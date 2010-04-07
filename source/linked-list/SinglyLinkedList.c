
#include "linked-list/SinglyLinkedList.h"
#include "stdio.h"
#include "stdlib.h"

// -----------------------------------------------------------------------------
void sllPrint (SllNode * pNode, const char * psHeader, const char * psFooter, int bDebug)
{
	printf("%s", psHeader);
	while (NULL != pNode)
	{
		const char * psFormat = (TRUE == bDebug) ? "%d:%ld   " : "%d   ";
		printf(psFormat, pNode->nValue, (long long) pNode->pNext);
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
SllNode * insertValueIntoSortedList(int nValue, SllNode * pRoot)
{
	SllNode * pNewNode = newNode(nValue);
	if (NULL == pRoot || nValue <= pRoot->nValue )
	{
		pNewNode->pNext = pRoot;
		return pNewNode;
	}
	SllNode * pIter = pRoot;
	while (TRUE)
	{
		if (pIter->pNext == NULL)
		{
			pIter->pNext = pNewNode;
			break;
		}
		
		if (pIter->pNext != NULL && nValue <= pIter->pNext->nValue )
		{
			SllNode * pTemp = pIter->pNext;
			pIter->pNext = pNewNode;
			pNewNode->pNext = pTemp;
			break;
		}
		pIter = pIter->pNext;
	}
	return pRoot;
}

// -----------------------------------------------------------------------------
SllNode * reverseList(SllNode * pRoot)
{
	SllNode * pRet = NULL;
	SllNode * pIter = pRoot;
	while (TRUE)
	{
		if (pIter == NULL)
		{
			break;
		}
		
		if (pIter->pNext == NULL)
		{
			// SllNode * pTemp = pRet;
			pIter->pNext = pRet;
			pRet = pIter;
			break;
		}
		// when pIter->pNext is not null...
		SllNode * pTemp = pIter->pNext;
		pIter->pNext = pRet;
		pRet = pIter;
		
		pIter = pTemp;
	}
	return pRet;
}

// -----------------------------------------------------------------------------
SllNode * deleteFromListRecursively(int nValue, SllNode * pRoot)
{
	SllNode * pRet = NULL;
	if (pRoot == NULL)
	{
		return pRet;
	}
	
	SllNode * pTemp = deleteFromListRecursively(nValue, pRoot->pNext);
	if (nValue == pRoot->nValue)
	{
		pRet = pTemp;
		free(pRoot);
	}
	else
	{
		pRoot->pNext = pTemp;
		pRet = pRoot;
	}
	return pRet;
}

// -----------------------------------------------------------------------------
void appendNode(SllNode ** ppFirst, SllNode ** ppLast, SllNode * pIncoming)
{
	if (ppFirst == NULL || ppLast == NULL || pIncoming == NULL)
	{
		return;
	}
	
	// this is error conditon ...
	if (*ppFirst == NULL && (*ppLast != NULL))
	{
		return;
	}
	
	if (*ppFirst == NULL)
	{
		*ppFirst = pIncoming;
		*ppLast = pIncoming;
		(*ppLast)->pNext = NULL;
	}
	else
	{
		(*ppLast)->pNext = pIncoming;
		(*ppLast) = pIncoming;
		pIncoming->pNext = NULL;
	}
	return;
}

// -----------------------------------------------------------------------------
SllNode * deleteFromListIteratively1(int nValue, SllNode * pRoot)
{
	SllNode *pKeepFirst = NULL, *pKeepLast = NULL;
	// SllNode *pDeleteFirst = NULL, *pDeleteLast = NULL;
	SllNode *pIter, *pTemp;
	for	(	pIter = pRoot, pTemp = (NULL != pIter) ? pIter->pNext : NULL;
			pIter != NULL;
			pIter = pTemp, pTemp = (NULL != pIter) ? pIter->pNext : NULL
		)
	{
		if (nValue != pIter->nValue)
		{
			appendNode(&pKeepFirst, &pKeepLast, pIter);
		}
		else
		{
			free(pIter);
		}
	}
	return pKeepFirst;
}
