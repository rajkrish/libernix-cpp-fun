
#include "TestSinglyLinkedList.h"


// -----------------------------------------------------------------------------
BOOST_AUTO_TEST_CASE(test_singly_linked_list_print_null)
{
	std::cout << "--------------------  " << "test_singly_linked_list_print_null" << "  --------------------" << std::endl;
	SllNode * pNode = NULL;
	BOOST_CHECK_EQUAL(pNode, (SllNode*) NULL);
	sllPrint(pNode, "NODE: ", "\n\n", FALSE);
}

// -----------------------------------------------------------------------------
BOOST_AUTO_TEST_CASE(test_singly_linked_list_print_node1)
{
	std::cout << "--------------------  " << "test_singly_linked_list_print_node1" << "  --------------------" << std::endl;
	SllNode *pNode = newNode(3);
	BOOST_CHECK_MESSAGE(pNode != (SllNode *) NULL, "The pointer pNode should not be NULL");
	sllPrint(pNode, "NODE: ", "\n\n", TRUE);
}



// -----------------------------------------------------------------------------

BOOST_AUTO_TEST_CASE(test_singly_linked_list_insert_sorted)
{
	std::cout << "--------------------  " << "test_singly_linked_list_insert_sorted" << "  --------------------" << std::endl;
	SllNode *pNode = (SllNode *) NULL;
	pNode = insertValueIntoSortedList(7, pNode);
	pNode = insertValueIntoSortedList(5, pNode);
	pNode = insertValueIntoSortedList(9, pNode);
	pNode = insertValueIntoSortedList(8, pNode);
	pNode = insertValueIntoSortedList(3, pNode);
	BOOST_CHECK_MESSAGE(pNode != (SllNode *) NULL, "The pointer pNode should not be NULL");
	sllPrint(pNode, "NODE: ", "\n\n", TRUE);
}

// -----------------------------------------------------------------------------
BOOST_AUTO_TEST_CASE(test_singly_linked_list_reverse)
{
	std::cout << "--------------------  " << "test_singly_linked_list_reverse" << "  --------------------" << std::endl;
	SllNode *pNode = (SllNode *) NULL;
	pNode = insertValueIntoSortedList(7, pNode);
	pNode = insertValueIntoSortedList(5, pNode);
	pNode = insertValueIntoSortedList(9, pNode);
	pNode = insertValueIntoSortedList(8, pNode);
	pNode = insertValueIntoSortedList(3, pNode);
	pNode = reverseList(pNode);
	BOOST_CHECK_MESSAGE(pNode != (SllNode *) NULL, "The pointer pNode should not be NULL");
	sllPrint(pNode, "NODE: ", "\n\n", TRUE);
}

// -----------------------------------------------------------------------------
BOOST_AUTO_TEST_CASE(test_singly_linked_list_delete_recursively)
{
	std::cout << "--------------------  " << "test_singly_linked_list_delete_recursively" << "  --------------------" << std::endl;
	SllNode *pNode = (SllNode *) NULL;
	pNode = insertValueIntoSortedList(7, pNode);
	pNode = insertValueIntoSortedList(5, pNode);
	pNode = insertValueIntoSortedList(9, pNode);
	pNode = insertValueIntoSortedList(8, pNode);
	pNode = insertValueIntoSortedList(3, pNode);
	pNode = insertValueIntoSortedList(8, pNode);
	pNode = deleteFromListRecursively(8, pNode);
	BOOST_CHECK_MESSAGE(pNode != (SllNode *) NULL, "The pointer pNode should not be NULL");
	sllPrint(pNode, "NODE: ", "\n\n", TRUE);
}


// -----------------------------------------------------------------------------
BOOST_AUTO_TEST_CASE(test_singly_linked_list_delete_iteratively1)
{
	std::cout << "--------------------  " << "test_singly_linked_list_delete_iteratively1" << "  --------------------" << std::endl;
	SllNode *pNode = (SllNode *) NULL;
	pNode = insertValueIntoSortedList(7, pNode);
	pNode = insertValueIntoSortedList(5, pNode);
	pNode = insertValueIntoSortedList(9, pNode);
	pNode = insertValueIntoSortedList(8, pNode);
	pNode = insertValueIntoSortedList(3, pNode);
	pNode = insertValueIntoSortedList(8, pNode);
	pNode = deleteFromListIteratively1(8, pNode);
	pNode = deleteFromListIteratively1(3, pNode);
	BOOST_CHECK_MESSAGE(pNode != (SllNode *) NULL, "The pointer pNode should not be NULL");
	sllPrint(pNode, "NODE: ", "\n\n", TRUE);
}


// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------



