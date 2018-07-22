/******************************************************************************
 A library that enables the use of the <std:vector> C++ construct in Fortran.
 Ioannis Nompelis <nompelis@nobelware.com>
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#include "incont.h"

#ifdef __cplusplus
extern "C" {
#endif


//
// Fortran functions to access the containers of doubles
//

void inc_double_store_( int* handle, double* d )
{
   inc_double_store( *handle, *d );
}

double inc_double_get_( int* handle, int* index )
{
   return( inc_double_get( *handle, *index ) );
}

long inc_double_get_size_( int* handle )
{
   return( (long) inc_double_get_size( *handle ) );
}

void inc_double_clear_( int* handle )
{
   inc_double_clear( *handle );
}


//
// Fortran functions to access the containers of floats
//

void inc_float_store_( int* handle, float* f )
{
   inc_float_store( *handle, *f );
}

float inc_float_get_( int* handle, int* index )
{
   return( inc_float_get( *handle, *index ) );
}

long inc_float_get_size_( int* handle )
{
   return( (long) inc_float_get_size( *handle ) );
}

void inc_float_clear_( int* handle )
{
   inc_float_clear( *handle );
}


//
// Fortran functions to access the containers of longs
//

void inc_long_store_( int* handle, long* l )
{
   inc_long_store( *handle, *l );
}

long inc_long_get_( int* handle, int* index )
{
   return( inc_long_get( *handle, *index ) );
}

long inc_long_get_size_( int* handle )
{
   return( (long) inc_long_get_size( *handle ) );
}

void inc_long_clear_( int* handle )
{
   inc_long_clear( *handle );
}


//
// Fortran functions to access the containers of ints
//

void inc_int_store_( int* handle, int* l )
{
   inc_int_store( *handle, *l );
}

int inc_int_get_( int* handle, int* index )
{
   return( inc_int_get( *handle, *index ) );
}

int inc_int_get_size_( int* handle )
{
   return( (int) inc_int_get_size( *handle ) );
}

void inc_int_clear_( int* handle )
{
   inc_int_clear( *handle );
}



#ifdef __cplusplus
}
#endif

