/******************************************************************************
 A library that enables the use of the <std:vector> C++ construct in Fortran.
 Ioannis Nompelis <nompelis@nobelware.com>
 ******************************************************************************/

/******************************************************************************
 Copyright (c) 2018, Ioannis Nompelis
 All rights reserved.

 Redistribution and use in source and binary forms, with or without any
 modification, are permitted provided that the following conditions are met:
 1. Redistribution of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.
 2. Redistribution in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.
 3. All advertising materials mentioning features or use of this software
    must display the following acknowledgement:
    "This product includes software developed by Ioannis Nompelis."
 4. Neither the name of Ioannis Nompelis and his partners/affiliates nor the
    names of other contributors may be used to endorse or promote products
    derived from this software without specific prior written permission.
 5. Redistribution or use of source code and binary forms for profit must
    have written permission of the copyright holder.
 
 THIS SOFTWARE IS PROVIDED BY IOANNIS NOMPELIS ''AS IS'' AND ANY
 EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL IOANNIS NOMPELIS BE LIABLE FOR ANY
 DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
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

// vector< double > * global_double = NULL;
// vector< float > * global_float = NULL;
// vector< int > * global_int = NULL;
// vector< long > * global_long = NULL;

vector< vector< double > > global_double;
vector< vector< float >  > global_float;
vector< vector< int >    > global_int;
vector< vector< long >   > global_long;

//
// Functions to create an arbitrary number of contairs of each type
//

//int inc_double_init( int num )
//{
//   global_double = new vector< double > [ num ];
//   if( global_double == NULL ) {
//      return(1);
//   } else {
//      return(0);
//   }
//}

void inc_double_init( int num )
{
   global_double.resize( num );
}

//int inc_float_init( int num )
//{
//   global_float = new vector< float > [ num ];
//   if( global_float == NULL ) {
//      return(1);
//   } else {
//      return(0);
//   }
//}

void inc_float_init( int num )
{
   global_float.resize( num );
}

//int inc_int_init( int num )
//{
//   global_int = new vector< int > [ num ];
//   if( global_int == NULL ) {
//      return(1);
//   } else {
//      return(0);
//   }
//}

void inc_int_init( int num )
{
   global_int.resize( num );
}

//int inc_long_init( int num )
//{
//   global_long = new vector< long > [ num ];
//   if( global_long == NULL ) {
//      return(1);
//   } else {
//      return(0);
//   }
//}

void inc_long_init( int num )
{
   global_long.resize( num );
}

//
// Functions to dump the arrays of containers
//

void inc_double_dump( void )
{
   //delete global_double;
   global_double.clear();
}

void inc_float_dump( void )
{
   //delete global_float;
   global_float.clear();
}

void inc_int_dump( void )
{
   //delete global_int;
   global_int.clear();
}

void inc_long_dump( void )
{
   //delete global_long;
   global_long.clear();
}

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

