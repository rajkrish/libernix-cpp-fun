
# test directory


add_executable				(test-singly-linked-list
								${source-dir}/linked-list/SinglyLinkedList.c
								${source-dir}/common/common.c
								${test-dir}/linked-list/TestSinglyLinkedList.cpp
							)
							
target_link_libraries		(test-singly-linked-list boost_unit_test_framework)

