


#ifndef _TEST_SINGLY_LINKED_LIST_H_
#define _TEST_SINGLY_LINKED_LIST_H_

#define BOOST_TEST_DYN_LINK 
#define BOOST_TEST_MODULE Test1
#include <boost/test/unit_test.hpp>
#include <iostream>

using namespace boost::unit_test_framework; 
using namespace std;

// -----------------------------------------------------------------------------
// the following includes should be marked as C specific...
extern "C"
{
#include "linked-list/SinglyLinkedList.h"
}


#endif  // _TEST_SINGLY_LINKED_LIST_H_





