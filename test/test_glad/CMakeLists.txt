

CPPOPENGL_DEFINE_TEST(test_glad)
SET_TARGET_CPP_20(test_glad)
target_link_libraries(test_glad PUBLIC glad)
CPPOPENGL_ADD_TEST(test_glad glad)
