
#include "smart-pointer/ScopedPointer.h"


// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
template <typename T>
ScopedPointer<T>::ScopedPointer(T * ptrIn = 0) : ptr(ptrIn)
{
	cout << "Info:  creating a scoped pointer with a value = " << ptrIn << endl;
}


// -----------------------------------------------------------------------------
template <typename T>
T & ScopedPointer<T>::operator*()
{
	if (NULL == ptr)
	{
		throw exception("ERROR:  Smart pointer is null!");
	}
	return (*ptr);
}

// -----------------------------------------------------------------------------
template <typename T>
T * ScopedPointer<T>::operator->()
{
	if (NULL == ptr)
	{
		throw exception("ERROR:  Smart pointer is null!");
	}
	return ptr;
}

// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------

