

#ifndef _TEST_CURCULAR_LINKED_LIST_H_
#define _TEST_CURCULAR_LINKED_LIST_H_

#define BOOST_TEST_DYN_LINK 
#define BOOST_TEST_MODULE TestCircularLinkedList
#include <boost/test/unit_test.hpp>
#include <iostream>

using namespace boost::unit_test_framework; 
using namespace std;

// -----------------------------------------------------------------------------
// the following includes should be marked as C specific...
extern "C"
{
#include "linked-list/CircularLinkedList.h"
}




#endif // _TEST_CURCULAR_LINKED_LIST_H_




