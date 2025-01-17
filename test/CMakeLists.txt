configure_lit_site_cfg(
        ${CMAKE_CURRENT_SOURCE_DIR}/lit.site.cfg.py.in
        ${CMAKE_CURRENT_BINARY_DIR}/lit.site.cfg.py
        MAIN_CONFIG
        ${CMAKE_CURRENT_SOURCE_DIR}/lit.cfg.py
)

configure_lit_site_cfg(
        ${CMAKE_CURRENT_SOURCE_DIR}/Unit/lit.site.cfg.py.in
        ${CMAKE_CURRENT_BINARY_DIR}/Unit/lit.site.cfg.py
        MAIN_CONFIG
        ${CMAKE_CURRENT_SOURCE_DIR}/Unit/lit.cfg.py
)

set(TPP_OPT_TEST_DEPENDS
        FileCheck count not
        tpp-opt
        tpp-run
        TPPUnitTests
        )

add_lit_testsuite(check-tpp-opt "Running the tpp-opt regression tests"
        ${CMAKE_CURRENT_BINARY_DIR}
        DEPENDS ${TPP_OPT_TEST_DEPENDS}
        )
set_target_properties(check-tpp-opt PROPERTIES FOLDER "Tests")

add_lit_testsuites(TPP_OPT ${CMAKE_CURRENT_SOURCE_DIR} DEPENDS ${TPP_OPT_TEST_DEPENDS})
