// This code conforms with the UFC specification version 2018.1.0
// and was automatically generated by FFC version 2019.1.0.
//
// This code was generated with the following parameters:
//

//  add_tabulate_tensor_timing:     False
//  convert_exceptions_to_warnings: False
//  cpp_optimize:                   True
//  cpp_optimize_flags:             '-O3 -fno-math-errno -march=native'
//  epsilon:                        1e-14
//  error_control:                  False
//  external_include_dirs:          ''
//  external_includes:              ''
//  external_libraries:             ''
//  external_library_dirs:          ''
//  form_postfix:                   False
//  format:                         'ufc'
//  generate_dummy_tabulate_tensor: False
//  max_signature_length:           0
//  no-evaluate_basis_derivatives:  True
//  optimize:                       True
//  precision:                      None
//  quadrature_degree:              6
//  quadrature_rule:                None
//  representation:                 'uflacs'
//  split:                          False

#include "ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7.h"

// Based on https://gcc.gnu.org/wiki/Visibility
#if defined _WIN32 || defined __CYGWIN__
    #ifdef __GNUC__
        #define DLL_EXPORT __attribute__ ((dllexport))
    #else
        #define DLL_EXPORT __declspec(dllexport)
    #endif
#else
    #define DLL_EXPORT __attribute__ ((visibility ("default")))
#endif

ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_cell_integral_main_otherwise::ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_cell_integral_main_otherwise() : ufc::cell_integral()
{

}

ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_cell_integral_main_otherwise::~ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_cell_integral_main_otherwise()
{

}

const std::vector<bool> & ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_cell_integral_main_otherwise::enabled_coefficients() const
{
static const std::vector<bool> enabled({true});
return enabled;
}

void ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_cell_integral_main_otherwise::tabulate_tensor(double * A,
                                    const double * const * w,
                                    const double * coordinate_dofs,
                                    int cell_orientation) const
{
    // This function was generated using 'uflacs' representation
    // with the following integrals metadata:
    // 
    // num_cells:         None
    // optimize:          True
    // precision:         16
    // quadrature_degree: 6
    // quadrature_rule:   'default'
    // representation:    'uflacs'
    // 
    // and the following integral 0 metadata:
    // 
    // estimated_polynomial_degree: 9
    // optimize:                    True
    // precision:                   16
    // quadrature_degree:           6
    // quadrature_rule:             'default'
    // representation:              'uflacs'
    // Quadrature rules
    alignas(32) static const double weights24[24] = { 0.006653791709694649, 0.006653791709694649, 0.006653791709694649, 0.006653791709694649, 0.001679535175886783, 0.001679535175886783, 0.001679535175886783, 0.001679535175886783, 0.009226196923942399, 0.009226196923942399, 0.009226196923942399, 0.009226196923942399, 0.008035714285714283, 0.008035714285714283, 0.008035714285714283, 0.008035714285714283, 0.008035714285714283, 0.008035714285714283, 0.008035714285714283, 0.008035714285714283, 0.008035714285714283, 0.008035714285714283, 0.008035714285714283, 0.008035714285714283 };
    // Precomputed values of basis functions and precomputations
    // FE* dimensions: [entities][points][dofs]
    // PI* dimensions: [entities][dofs][dofs] or [entities][dofs]
    // PM* dimensions: [entities][dofs][dofs]
    alignas(32) static const double FE6_C0_D001_Q24[1][1][2] = { { { -1.0, 1.0 } } };
    alignas(32) static const double FE6_C0_Q24[1][24][4] =
        { { { 0.2146028712591518, 0.3561913862225449, 0.2146028712591517, 0.2146028712591517 },
            { 0.356191386222545, 0.2146028712591516, 0.2146028712591517, 0.2146028712591517 },
            { 0.2146028712591518, 0.2146028712591516, 0.2146028712591517, 0.3561913862225449 },
            { 0.2146028712591518, 0.2146028712591517, 0.3561913862225449, 0.2146028712591517 },
            { 0.0406739585346115, 0.8779781243961657, 0.04067395853461139, 0.04067395853461134 },
            { 0.8779781243961661, 0.04067395853461119, 0.04067395853461139, 0.04067395853461134 },
            { 0.04067395853461147, 0.04067395853461132, 0.04067395853461132, 0.877978124396166 },
            { 0.04067395853461148, 0.04067395853461128, 0.877978124396166, 0.04067395853461134 },
            { 0.3223378901422755, 0.0329863295731731, 0.3223378901422757, 0.3223378901422757 },
            { 0.03298632957317295, 0.3223378901422757, 0.3223378901422757, 0.3223378901422757 },
            { 0.3223378901422755, 0.3223378901422757, 0.3223378901422757, 0.03298632957317311 },
            { 0.3223378901422755, 0.3223378901422757, 0.03298632957317308, 0.3223378901422757 },
            { 0.6030056647916492, 0.2696723314583158, 0.06366100187501748, 0.0636610018750175 },
            { 0.6030056647916491, 0.06366100187501744, 0.2696723314583159, 0.0636610018750175 },
            { 0.6030056647916492, 0.06366100187501746, 0.0636610018750175, 0.2696723314583159 },
            { 0.269672331458316, 0.603005664791649, 0.06366100187501748, 0.0636610018750175 },
            { 0.2696723314583159, 0.06366100187501747, 0.6030056647916491, 0.0636610018750175 },
            { 0.269672331458316, 0.06366100187501748, 0.0636610018750175, 0.6030056647916491 },
            { 0.06366100187501757, 0.06366100187501751, 0.2696723314583159, 0.6030056647916491 },
            { 0.06366100187501759, 0.2696723314583158, 0.6030056647916491, 0.0636610018750175 },
            { 0.06366100187501768, 0.6030056647916491, 0.0636610018750175, 0.2696723314583159 },
            { 0.06366100187501758, 0.06366100187501748, 0.6030056647916491, 0.2696723314583159 },
            { 0.06366100187501759, 0.2696723314583159, 0.0636610018750175, 0.6030056647916491 },
            { 0.06366100187501766, 0.603005664791649, 0.2696723314583159, 0.0636610018750175 } } };
    // Unstructured piecewise computations
    const double J_c0 = coordinate_dofs[0] * FE6_C0_D001_Q24[0][0][0] + coordinate_dofs[3] * FE6_C0_D001_Q24[0][0][1];
    const double J_c4 = coordinate_dofs[1] * FE6_C0_D001_Q24[0][0][0] + coordinate_dofs[7] * FE6_C0_D001_Q24[0][0][1];
    const double J_c8 = coordinate_dofs[2] * FE6_C0_D001_Q24[0][0][0] + coordinate_dofs[11] * FE6_C0_D001_Q24[0][0][1];
    const double J_c5 = coordinate_dofs[1] * FE6_C0_D001_Q24[0][0][0] + coordinate_dofs[10] * FE6_C0_D001_Q24[0][0][1];
    const double J_c7 = coordinate_dofs[2] * FE6_C0_D001_Q24[0][0][0] + coordinate_dofs[8] * FE6_C0_D001_Q24[0][0][1];
    const double J_c1 = coordinate_dofs[0] * FE6_C0_D001_Q24[0][0][0] + coordinate_dofs[6] * FE6_C0_D001_Q24[0][0][1];
    const double J_c6 = coordinate_dofs[2] * FE6_C0_D001_Q24[0][0][0] + coordinate_dofs[5] * FE6_C0_D001_Q24[0][0][1];
    const double J_c3 = coordinate_dofs[1] * FE6_C0_D001_Q24[0][0][0] + coordinate_dofs[4] * FE6_C0_D001_Q24[0][0][1];
    const double J_c2 = coordinate_dofs[0] * FE6_C0_D001_Q24[0][0][0] + coordinate_dofs[9] * FE6_C0_D001_Q24[0][0][1];
    alignas(32) double sp[15];
    sp[0] = J_c4 * J_c8;
    sp[1] = J_c5 * J_c7;
    sp[2] = sp[0] + -1 * sp[1];
    sp[3] = J_c0 * sp[2];
    sp[4] = J_c5 * J_c6;
    sp[5] = J_c3 * J_c8;
    sp[6] = sp[4] + -1 * sp[5];
    sp[7] = J_c1 * sp[6];
    sp[8] = sp[3] + sp[7];
    sp[9] = J_c3 * J_c7;
    sp[10] = J_c4 * J_c6;
    sp[11] = sp[9] + -1 * sp[10];
    sp[12] = J_c2 * sp[11];
    sp[13] = sp[8] + sp[12];
    sp[14] = std::abs(sp[13]);
    alignas(32) double BF0[24] = {};
    alignas(32) double BF1[24] = {};
    alignas(32) double BF2[24] = {};
    for (int iq = 0; iq < 24; ++iq)
    {
        // Quadrature loop body setup (num_points=24)
        // Unstructured varying computations for num_points=24
        double w0_c0 = 0.0;
        for (int ic = 0; ic < 4; ++ic)
            w0_c0 += w[0][ic] * FE6_C0_Q24[0][iq][ic];
        double w0_c1 = 0.0;
        for (int ic = 0; ic < 4; ++ic)
            w0_c1 += w[0][ic + 4] * FE6_C0_Q24[0][iq][ic];
        double w0_c2 = 0.0;
        for (int ic = 0; ic < 4; ++ic)
            w0_c2 += w[0][ic + 8] * FE6_C0_Q24[0][iq][ic];
        alignas(32) double sv24[6];
        sv24[0] = w0_c0 * std::pow(w0_c0, 2);
        sv24[1] = w0_c1 * std::pow(w0_c0, 2);
        sv24[2] = w0_c2 * std::pow(w0_c0, 2);
        sv24[3] = -1 * sv24[0] * sp[14];
        sv24[4] = -1 * sv24[1] * sp[14];
        sv24[5] = -1 * sv24[2] * sp[14];
        const double fw0 = sv24[3] * weights24[iq];
        BF0[iq] += fw0 * FE2_C0_Q24[0][iq][iq];
        const double fw1 = sv24[4] * weights24[iq];
        BF1[iq] += fw1 * FE2_C0_Q24[0][iq][iq];
        const double fw2 = sv24[5] * weights24[iq];
        BF2[iq] += fw2 * FE2_C0_Q24[0][iq][iq];
    }
    std::fill(A, A + 72, 0.0);
    for (int i = 0; i < 24; ++i)
        A[i] += BF0[i];
    for (int i = 0; i < 24; ++i)
        A[i + 24] += BF1[i];
    for (int i = 0; i < 24; ++i)
        A[i + 48] += BF2[i];
}

extern "C" DLL_EXPORT ufc::cell_integral * create_ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_cell_integral_main_otherwise()
{
  return new ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_cell_integral_main_otherwise();
}


ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main() : ufc::form()
{
    // Do nothing
}

ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::~ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main()
{
    // Do nothing
}

const char * ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::signature() const
{
    return "d0537eed6883c74a287e9103648b20e7523fcf787669d04512fca7cc7e8ec6575e507d93167da94970fdf7b76e79428aeea11f75af9f4c76d6c61e3c63abd554";
}

std::size_t ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::rank() const
{
    return 1;
}

std::size_t ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::num_coefficients() const
{
    return 1;
}

std::size_t ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::original_coefficient_position(std::size_t i) const
{
    if (i >= 1)
    {
        throw std::runtime_error("Invalid original coefficient index.");
    }
    static const std::vector<std::size_t> position = {3};
    return position[i];
}

ufc::finite_element * ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::create_coordinate_finite_element() const
{
    return create_ffc_element_f5785c5cc0dc6ecf7fa4ec57073e163591d3d6c7_finite_element_main();
}

ufc::dofmap * ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::create_coordinate_dofmap() const
{
    return create_ffc_element_f5785c5cc0dc6ecf7fa4ec57073e163591d3d6c7_dofmap_main();
}

ufc::coordinate_mapping * ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::create_coordinate_mapping() const
{
    return create_ffc_coordinate_mapping_99d75d6051e4b936f982abb2e4dc3efd28745293_coordinate_mapping_main();
}

ufc::finite_element * ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::create_finite_element(std::size_t i) const
{
    switch (i)
    {
    case 0:
        return create_ffc_element_5a41a7796d10fe0299267c5d2da7e50a0f746167_finite_element_main();
    case 1:
        return create_ffc_element_58b5216853e5acc2b88285e73dba0895863e24e3_finite_element_main();
    default:
        return nullptr;
    }
}

ufc::dofmap * ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::create_dofmap(std::size_t i) const
{
    switch (i)
    {
    case 0:
        return create_ffc_element_5a41a7796d10fe0299267c5d2da7e50a0f746167_dofmap_main();
    case 1:
        return create_ffc_element_58b5216853e5acc2b88285e73dba0895863e24e3_dofmap_main();
    default:
        return nullptr;
    }
}

std::size_t ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::max_cell_subdomain_id() const
{
    return 0;
}

std::size_t ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::max_exterior_facet_subdomain_id() const
{
    return 0;
}

std::size_t ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::max_interior_facet_subdomain_id() const
{
    return 0;
}

std::size_t ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::max_vertex_subdomain_id() const
{
    return 0;
}

std::size_t ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::max_custom_subdomain_id() const
{
    return 0;
}

std::size_t ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::max_cutcell_subdomain_id() const
{
    return 0;
}

std::size_t ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::max_interface_subdomain_id() const
{
    return 0;
}

std::size_t ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::max_overlap_subdomain_id() const
{
    return 0;
}

bool ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::has_cell_integrals() const
{
    return true;
}

bool ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::has_exterior_facet_integrals() const
{
    return false;
}

bool ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::has_interior_facet_integrals() const
{
    return false;
}

bool ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::has_vertex_integrals() const
{
    return false;
}

bool ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::has_custom_integrals() const
{
    return false;
}

bool ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::has_cutcell_integrals() const
{
    return false;
}

bool ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::has_interface_integrals() const
{
    return false;
}

bool ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::has_overlap_integrals() const
{
    return false;
}

ufc::cell_integral * ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::create_cell_integral(std::size_t subdomain_id) const
{
    return nullptr;
}

ufc::exterior_facet_integral * ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::create_exterior_facet_integral(std::size_t subdomain_id) const
{
    return nullptr;
}

ufc::interior_facet_integral * ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::create_interior_facet_integral(std::size_t subdomain_id) const
{
    return nullptr;
}

ufc::vertex_integral * ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::create_vertex_integral(std::size_t subdomain_id) const
{
    return nullptr;
}

ufc::custom_integral * ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::create_custom_integral(std::size_t subdomain_id) const
{
    return nullptr;
}

ufc::cutcell_integral * ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::create_cutcell_integral(std::size_t subdomain_id) const
{
    return nullptr;
}

ufc::interface_integral * ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::create_interface_integral(std::size_t subdomain_id) const
{
    return nullptr;
}

ufc::overlap_integral * ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::create_overlap_integral(std::size_t subdomain_id) const
{
    return nullptr;
}

ufc::cell_integral * ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::create_default_cell_integral() const
{
    return create_ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_cell_integral_main_otherwise();
}

ufc::exterior_facet_integral * ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::create_default_exterior_facet_integral() const
{
    return nullptr;
}

ufc::interior_facet_integral * ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::create_default_interior_facet_integral() const
{
    return nullptr;
}

ufc::vertex_integral * ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::create_default_vertex_integral() const
{
    return nullptr;
}

ufc::custom_integral * ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::create_default_custom_integral() const
{
    return nullptr;
}

ufc::cutcell_integral * ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::create_default_cutcell_integral() const
{
    return nullptr;
}

ufc::interface_integral * ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::create_default_interface_integral() const
{
    return nullptr;
}

ufc::overlap_integral * ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main::create_default_overlap_integral() const
{
    return nullptr;
}

extern "C" DLL_EXPORT ufc::form * create_ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main()
{
  return new ffc_form_f3b1f42a71d64afbb3b3c1477b97b6b7713801a7_form_main();
}

