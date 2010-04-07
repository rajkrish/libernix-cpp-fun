 
#ifndef _SCOPED_POINTER_H_
#define _SCOPED_POINTER_H_

#include <iostream>
#include <string>
#include <exception>

using namespace std;

template <typename T>
class ScopedPointer
{
	private:
		T *ptr;
	public:
		ScopedPointer<T>(T *pIn);
		ScopedPointer<T>(ScopedPointer<T> const & spRhs);
		~ScopedPointer<T>();
		ScopedPointer<T> & operator=(ScopedPointer<T> const & spRhs);
		T & operator*();
		T const & operator *() const;
		T * operator->();
		T const * operator->() const;
		
};



#endif // _SCOPED_POINTER_H_


