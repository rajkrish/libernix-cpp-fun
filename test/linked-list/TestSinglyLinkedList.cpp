
#include "TestSinglyLinkedList.h"


// -----------------------------------------------------------------------------
BOOST_AUTO_TEST_CASE(test_singly_linked_list_print_null)
{
	SllNode * pNode = NULL;
	BOOST_CHECK_EQUAL(pNode, (SllNode*) NULL);
	sllPrint(pNode, "NODE: ", "\n\n", FALSE);
}

// -----------------------------------------------------------------------------
BOOST_AUTO_TEST_CASE(test_singly_linked_list_print_node1)
{
	SllNode *pNode = newNode(3);
	BOOST_CHECK_MESSAGE(pNode != (SllNode *) NULL, "The pointer pNode should not be NULL");
	sllPrint(pNode, "NODE: ", "\n\n", TRUE);
}



// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------



