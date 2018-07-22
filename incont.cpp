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
// globally known containers
// These are to be addressed by handles, corresponding to indices in the arrays
//

#define MAX_NUM_CONTAINERS  10

vector< double > global_double[ MAX_NUM_CONTAINERS ];
vector< float > global_float[ MAX_NUM_CONTAINERS ];
vector< int > global_int[ MAX_NUM_CONTAINERS ];
vector< long > global_long[ MAX_NUM_CONTAINERS ];


//
// Functions to manipulate arrays of doubles
//

void inc_double_store( int handle, double d )
{
   global_double[ handle].push_back( d );
}

double inc_double_get( int handle, int index )
{
   double d;

   d = (global_double[ handle ])[ index ];

   return( d );
}

size_t inc_double_get_size( int handle )
{
   return( (size_t) global_double[ handle ].size() );
}

void inc_double_clear( int handle )
{
   global_double[ handle ].clear();
}


//
// Functions to manipulate arrays of floats
//

void inc_float_store( int handle, float f )
{
   global_float[ handle].push_back( f );
}

float inc_float_get( int handle, int index )
{
   float f;

   f = (global_float[ handle ])[ index ];

   return( f );
}

size_t inc_float_get_size( int handle )
{
   return( (size_t) global_float[ handle ].size() );
}

void inc_float_clear( int handle )
{
   global_float[ handle ].clear();
}


//
// Functions to manipulate arrays of ints
//

void inc_int_store( int handle, int i )
{
   global_int[ handle].push_back( i );
}

int inc_int_get( int handle, int index )
{
   int i;

   i = (global_int[ handle ])[ index ];

   return( i );
}

size_t inc_int_get_size( int handle )
{
   return( (size_t) global_int[ handle ].size() );
}

void inc_int_clear( int handle )
{
   global_int[ handle ].clear();
}


//
// Functions to manipulate arrays of longs
//

void inc_long_store( int handle, long l )
{
   global_long[ handle].push_back( l );
}

long inc_long_get( int handle, int index )
{
   long l;

   l = (global_long[ handle ])[ index ];

   return( l );
}

size_t inc_long_get_size( int handle )
{
   return( (size_t) global_long[ handle ].size() );
}

void inc_long_clear( int handle )
{
   global_long[ handle ].clear();
}




#ifdef __cplusplus
}
#endif

