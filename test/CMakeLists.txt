
# test directory
# CMAKE_C_FLAGS_DEBUG or CMAKE_CXX_FLAGS_DEBUG

# -----------------------------------------------------------------------------
add_executable				(test-singly-linked-list
								${source-dir}/linked-list/SinglyLinkedList.c
								${source-dir}/common/common.c
								${test-dir}/linked-list/TestSinglyLinkedList.cpp
							)
							
target_link_libraries		(test-singly-linked-list boost_unit_test_framework)

# -----------------------------------------------------------------------------
add_executable				(test-scoped-pointer
								${source-dir}/smart-pointer/ScopedPointer.cpp
								${test-dir}/smart-pointer/TestScopedPointer.cpp
							)

target_link_libraries		(test-scoped-pointer boost_unit_test_framework)

# -----------------------------------------------------------------------------
add_executable				(test-circular-linked-list
								${source-dir}/linked-list/CircularLinkedList.c
								${source-dir}/common/common.c
								${test-dir}/linked-list/TestCircularLinkedList.cpp
							)
							
target_link_libraries		(test-circular-linked-list boost_unit_test_framework)

