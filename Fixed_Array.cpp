// $Id: Fixed_Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include "Fixed_Array.h"

//
// Fixed_Array
//

template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (void):Base_Array<T>(N)
{
    
}

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (const Fixed_Array <T, N> & arr):Base_Array<T>(N)
{
	for(size_t i = 0; i < arr.size(); i++)
    {
        this->set(i, arr.get(i));
    }
    
    
}

//
// Fixed_Array
//
template <typename T, size_t N>
template <size_t M>
Fixed_Array <T, N>::Fixed_Array (const Fixed_Array <T, M> & arr):Base_Array<T>(N)
{
	if(N > M){
		for(size_t i = 0; i < M; i++)
		{
			this->set(i, arr.get(i));
		}
    }
    else if(N <= M)
    {
		for(size_t i = 0; i < N; i++)
		{
			this->set(i, arr.get(i));
		}
    }
    
}

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (T fill):Base_Array<T>(N, fill)
{
	
}

//
// ~Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::~Fixed_Array (void)
{
    delete [] this->data_;
}

//
// operator =
//
template <typename T, size_t N>
const Fixed_Array <T, N> & Fixed_Array <T, N>::operator = (const Fixed_Array <T, N> & rhs)
{
    if(this->size()== rhs.size())
    {
        for(size_t i = 0; i < this->size(); i++)
        {
            this->set(i, rhs.get(i));
        }
    }
    
}

//
// operator =
//
template <typename T, size_t N>
template <size_t M>
const Fixed_Array <T, N> & Fixed_Array <T, N>::operator = (const Fixed_Array <T, M> & rhs)
{
    size_t finish=0; 
	if(N > M)
    {
        finish = M;
    }
    else if(N <= M)
    {
        finish = N;
    }
    for(size_t i = 0; i < finish; i++)
    {
        this->set(i, rhs.get(i));
    }
}


