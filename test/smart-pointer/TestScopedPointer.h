


#ifndef _TEST_SCOPED_POINTER_H_
#define _TEST_SCOPED_POINTER_H_

#define BOOST_TEST_DYN_LINK 
#define BOOST_TEST_MODULE TestScopedPointer
#include <boost/test/unit_test.hpp>
#include <iostream>

#include "smart-pointer/ScopedPointer.h"

using namespace boost::unit_test_framework; 
using namespace std;

// -----------------------------------------------------------------------------

class Pointee
{
	public:
		Pointee();
		~Pointee();
};

void create1();

#endif  // _TEST_SCOPED_POINTER_H_






