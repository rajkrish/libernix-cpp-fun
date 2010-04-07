
#include "CircularLinkedList.h"

// -----------------------------------------------------------------------------
CllNode * cllNewNode(int nData)
{
	CllNode * pTemp = (CllNode * ) calloc( sizeof (CllNode * ), 1);
	pTemp->nData = nData;
	pTemp->pNext = NULL;
	
	return pTemp;
}
// -----------------------------------------------------------------------------
void cllAppend(CllNode ** ppFirst, CllNode ** ppLast, CllNode * pIncoming)
{
	assert(ppFirst != NULL);
	assert(ppLast != NULL);
	
	if (pIncoming == NULL)
	{
		return;
	}
	
	if ((*ppFirst) == NULL && (*ppLast) == NULL)
	{
		(*ppFirst) = pIncoming;
		(*ppLast) = pIncoming;
		pIncoming->pNext = pIncoming;
		return;
	}
	
	assert( (*ppFirst) != NULL );
	assert( (*ppLast) != NULL );
	
	(*ppLast)->pNext = pIncoming;
	(*ppLast) = pIncoming;
	pIncoming->pNext = (*ppFirst);
	return;
}

// -----------------------------------------------------------------------------
void cllPrint (CllNode * const pRoot, char * const psHeader, char * const psFooter, int bDebug)
{
	if (NULL == pRoot)
	{
		return;
	}
	
	int nCount = 0;
	CllNode * pIter = NULL;
	printf ("%s:   ", psHeader);
	char * const psFormat = (TRUE == bDebug) ? "%d--%ld-%ld   " : "%d   ";
	for	(	pIter = pRoot, nCount = 0;
			(nCount == 0) || (nCount > 0) && (pIter != pRoot);
			pIter = pIter->pNext, ++nCount
		)
	{
		printf(psFormat, pIter->nData, (long long) pIter, (long long) pIter->pNext); 
	}
	printf (psFooter);
}

// -----------------------------------------------------------------------------
CllNode * cllValidNext(CllNode * pNode)
{
	CllNode * pRet = (NULL != pNode) ? pNode->pNext : NULL;
	return pRet;
}

// -----------------------------------------------------------------------------
CllNode * cllAdd(CllNode *pRoot, int nData)
{
	CllNode * pIncoming = cllNewNode(nData);
	assert(NULL != pIncoming);
	
	CllNode *pFirst = NULL;
	CllNode *pLast = NULL;
	

	CllNode *pCurrent = NULL;
	CllNode *pAhead = NULL;
	int nCount = 0;
	printf ("\n");
	for	(	pCurrent = pRoot, nCount = 0, pAhead = cllValidNext(pCurrent);
			(pCurrent != NULL ) && ((nCount == 0) || (nCount > 0) && (pCurrent != pRoot));
			pCurrent = pAhead, ++nCount, pAhead = cllValidNext(pCurrent)
	)
	{
		printf("INFO:  Adding value = %d,  pIncoming = %ld,  nCount = %d,  pFirst = %ld,  pLast = %ld\n",
		nData, (long long) pIncoming, nCount, (long long) pFirst, (long long) pLast);
                if (pCurrent->nData > nData)
		{
			cllAppend(&pFirst, &pLast, pIncoming);
			pIncoming = NULL;
		}
		
		cllAppend(&pFirst, &pLast, pCurrent);
	}
	
	if (pIncoming != NULL)
	{
		cllAppend(&pFirst, &pLast, pIncoming);
	}
	return pFirst;
}

// -----------------------------------------------------------------------------
CllNode * cllDelete(CllNode * pRoot, int nData)
{
	CllNode *pFirst = NULL, *pLast = NULL;
	CllNode * pCurrent = NULL, *pAhead = NULL;
	int nCount = 0;
	for	(	pCurrent = pRoot, nCount = 0, pAhead = cllValidNext(pCurrent);
			(pCurrent != NULL) && ( (nCount == 0) || (nCount > 0) && (pCurrent != pRoot));
			pCurrent = pAhead, ++nCount, pAhead = cllValidNext(pCurrent)
		)
	{
		if (pCurrent->nData == nData)
		{
			free(pCurrent);
		}
		else
		{
			cllAppend(&pFirst, &pLast, pCurrent);
		}
	}
	return pFirst;
}

// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------



