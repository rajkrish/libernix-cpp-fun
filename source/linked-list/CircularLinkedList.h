
#ifndef _CURCULAR_LINKED_LIST_H_
#define _CURCULAR_LINKED_LIST_H_

#include "common/common.h"

// -----------------------------------------------------------------------------
typedef struct TCllNode
{
	int nData;
	struct TCllNode * pNext;
} CllNode;


// -----------------------------------------------------------------------------
void cllAppend(CllNode ** ppFirst, CllNode ** ppLast, CllNode * pIncoming);
CllNode * cllAdd(CllNode *pRoot, int nData);
void cllPrint (CllNode * const pRoot, char * const psHeader, char * const psFooter, int bDebug);
CllNode * cllDelete(CllNode * pRoot, int nData);

#endif // _CURCULAR_LINKED_LIST_H_



