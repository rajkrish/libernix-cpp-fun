
#include "TestScopedPointer.h"
#include "smart-pointer/ScopedPointer.cpp"


// -----------------------------------------------------------------------------
Pointee::Pointee()
{
	cout << "INFO:  Creating pointee " << endl;
}

// -----------------------------------------------------------------------------
Pointee::~Pointee()
{
	cout << "INFO:  Creating pointee " << endl;
}

// -----------------------------------------------------------------------------
// BOOST_AUTO_TEST_CASE(test_scoped_pointer_create_null)
// {
// 	cout << "------------------------- " << "test_scoped_pointer_create_null" << "------------------------- "  << endl;
// 	ScopedPointer<char> spc;
// 	cout << "INFO:  Successfully created scoped pointer with null value" << endl;
// }
// 
// // -----------------------------------------------------------------------------
// BOOST_AUTO_TEST_CASE(test_scoped_pointer_create_non_null)
// {
// 	cout << "------------------------- " << "test_scoped_pointer_create_non_null" << "------------------------- "  << endl;
// 	char *strHello = new char[50];
// 	
// 	ScopedPointer<char> spc(strHello);
// 	cout << "INFO:  Successfully created scoped pointer with non null value" << endl;
// }

