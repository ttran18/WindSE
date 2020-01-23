"""
The FunctionSpaceManager contains all the different types of function
spaces required for solve multiple classes of problems.
"""

import __main__
import os

### Get the name of program importing this package ###
main_file = os.path.basename(__main__.__file__)

### This checks if we are just doing documentation ###
if main_file != "sphinx-build":
    from dolfin import *
    import time

    ### Import the cumulative parameters ###
    from windse import windse_parameters

    ### Check if we need dolfin_adjoint ###
    if windse_parameters["general"].get("dolfin_adjoint", False):
        from dolfin_adjoint import *

class GenericFunctionSpace(object):
    def __init__(self,dom):
        self.params = windse_parameters
        self.fprint = self.params.fprint
        self.dim = dom.dim
        self.mesh = dom.mesh
        self.tf_degree = self.params["wind_farm"].get("turbine_degree",1)

    def SetupSubspaces(self):
        self.V = self.W.sub(0).collapse()
        self.Q = self.W.sub(1).collapse()
        self.V0 = self.V.sub(0).collapse() 
        self.V1 = self.V.sub(1).collapse()

        if self.dim == 3: 
            self.V2 = self.V.sub(2).collapse()
            self.VelocityAssigner = FunctionAssigner(self.V,[self.V0,self.V1,self.V2])
        else:
            self.VelocityAssigner = FunctionAssigner(self.V,[self.V0,self.V1])

        self.SolutionAssigner = FunctionAssigner(self.W,[self.V,self.Q])

        ### Create Function Spaces for numpy turbine force ###
        if self.params["wind_farm"].get("turbine_method","numpy") == "numpy":
            tf_V = VectorElement("Quadrature",self.mesh.ufl_cell(),degree=self.tf_degree,quad_scheme="default")
            self.tf_V = FunctionSpace(self.mesh, tf_V)
            self.tf_V0 = self.tf_V.sub(0).collapse() 
            self.fprint("Quadrature DOFS: {:d}".format(self.tf_V.dim()))

            # self.tf_V1 = self.tf_V.sub(1).collapse()

            # if self.dim == 3: 
            #     self.tf_V2 = self.tf_V.sub(2).collapse()
            #     self.tf_Assigner = FunctionAssigner(self.tf_V,[self.tf_V0,self.tf_V1,self.tf_V2])
            # else:
            #     self.tf_Assigner = FunctionAssigner(self.tf_V,[self.tf_V0,self.tf_V1])


class LinearFunctionSpace(GenericFunctionSpace):
    """
    The LinearFunctionSpace is made up of a vector function space for velocity
    and a scaler space for pressure. Both spaces are "CG1" or Linear Lagrange elements.
    """
    def __init__(self,dom):
        super(LinearFunctionSpace, self).__init__(dom)

        ### Create the function space ###
        fs_start = time.time()
        self.fprint("Creating Function Space",special="header")

        V = VectorElement('Lagrange', self.mesh.ufl_cell(), 1) 
        Q = FiniteElement('Lagrange', self.mesh.ufl_cell(), 1)
        self.W = FunctionSpace(self.mesh, MixedElement([V,Q]))

        self.SetupSubspaces()

        self.fprint("Velocity DOFS:   {:d}".format(self.V.dim()))
        self.fprint("Pressure DOFS:   {:d}".format(self.Q.dim()))
        self.fprint("Total DOFS:      {:d}".format(self.W.dim()))
        
        fs_stop = time.time()
        self.fprint("Function Spaces Created: {:1.2f} s".format(fs_stop-fs_start),special="footer")

class TaylorHoodFunctionSpace(GenericFunctionSpace):
    """
    The TaylorHoodFunctionSpace is made up of a vector function space for velocity
    and a scalar space for pressure. The velocity function space is piecewise quadratic
    and the pressure function space is piecewise linear.
    """
    def __init__(self,dom):
        super(TaylorHoodFunctionSpace, self).__init__(dom)

        ### Create the function space ###
        fs_start = time.time()
        self.fprint("Creating Function Space",special="header")
        V = VectorElement('Lagrange', self.mesh.ufl_cell(), 2) 
        Q = FiniteElement('Lagrange', self.mesh.ufl_cell(), 1)
        self.W = FunctionSpace(self.mesh, MixedElement([V,Q]))

        self.SetupSubspaces()

        self.fprint("Velocity DOFS: {:d}".format(self.V.dim()))
        self.fprint("Pressure DOFS: {:d}".format(self.Q.dim()))
        self.fprint("Total DOFS:    {:d}".format(self.W.dim()))

        fs_stop = time.time()
        self.fprint("Function Spaces Created: {:1.2f} s".format(fs_stop-fs_start),special="footer")

