

CPPOPENGL_DEFINE_TEST(test_unique_id)
SET_TARGET_CPP_20(test_unique_id)
target_link_libraries(test_unique_id PUBLIC glad)
CPPOPENGL_ADD_TEST(test_unique_id unique_id)
