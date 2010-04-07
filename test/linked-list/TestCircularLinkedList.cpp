

#include "TestCircularLinkedList.h"

// -----------------------------------------------------------------------------
BOOST_AUTO_TEST_CASE(test_circular_linked_list_print_null)
{
	std::cout << "--------------------  " << "test_circular_linked_list_print_null" << "  --------------------" << std::endl;
	CllNode * pNode = NULL;
	BOOST_CHECK_EQUAL(pNode, (CllNode*) NULL);
	cllPrint(pNode, "NODE: ", "\n\n", FALSE);
}

// -----------------------------------------------------------------------------
BOOST_AUTO_TEST_CASE(test_circular_linked_list_insert_sorted1)
{
	std::cout << "--------------------  " << "test_circular_linked_list_insert_sorted1" << "  --------------------" << std::endl;
	CllNode *pNode = (CllNode *) NULL;
	pNode = cllAdd(pNode, 7);
	pNode = cllAdd(pNode, 5);
	pNode = cllAdd(pNode, 9);
	pNode = cllAdd(pNode, 8);
	pNode = cllAdd(pNode, 3);
	BOOST_CHECK_MESSAGE(pNode != (CllNode *) NULL, "The pointer pNode should not be NULL");
	cllPrint(pNode, "NODE: ", "\n\n", TRUE);
}


// -----------------------------------------------------------------------------
BOOST_AUTO_TEST_CASE(test_circular_linked_list_delete1)
{
	std::cout << "--------------------  " << "test_circular_linked_list_delete1" << "  --------------------" << std::endl;
	CllNode *pNode = (CllNode *) NULL;
	pNode = cllAdd(pNode, 7);
	pNode = cllAdd(pNode, 5);
	pNode = cllAdd(pNode, 9);
	pNode = cllAdd(pNode, 8);
	pNode = cllAdd(pNode, 3);
	cllPrint(pNode, "Nodes after adding: ", "\n\n", TRUE);
	BOOST_CHECK_MESSAGE(pNode != (CllNode *) NULL, "The pointer pNode should not be NULL");
	pNode = cllDelete(pNode, 3);
	pNode = cllDelete(pNode, 7);
	pNode = cllDelete(pNode, 9);
	cllPrint(pNode, "Nodes after deleting 3,7,9: ", "\n\n", TRUE);
}



