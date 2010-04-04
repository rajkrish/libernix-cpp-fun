

#ifndef _SINGLY_LINKED_LIST_H_
#define _SINGLY_LINKED_LIST_H_

// -----------------------------------------------------------------------------
// the following includes should be marked as C specific...
#include "common/common.h"


typedef struct  SSllNode
{
	int nValue;
	struct SSllNode * pNext;
	
} SllNode;

void sllPrint (SllNode * pNode, const char * psHeader, const char * psFooter, int bDebug);
SllNode * newNode (int nValue);


#endif  // _SINGLY_LINKED_LIST_H_




