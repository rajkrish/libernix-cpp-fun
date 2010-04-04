
#include "linked-list/SinglyLinkedList.h"
#include "stdio.h"
#include "stdlib.h"

// -----------------------------------------------------------------------------
void sllPrint (SllNode * pNode, const char * psHeader, const char * psFooter, int bDebug)
{
	printf("%s", psHeader);
	while (NULL != pNode)
	{
		const char * psFormat = (TRUE == bDebug) ? "%d   " : "%d:%ld   ";
		printf(psFormat, pNode->nValue, pNode->pNext);
		pNode = pNode->pNext;
	}
	printf("%s", psFooter);
}

// -----------------------------------------------------------------------------
SllNode * newNode (int nValue)
{
	SllNode * pTemp = (SllNode *) calloc(sizeof(SllNode), 1);
	pTemp->nValue = nValue;
	
	return pTemp;
}


// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------

