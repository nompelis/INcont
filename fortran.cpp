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
// Functions to create an arbitrary number of contairs of each type
//

void inc_double_init_( int* num, int *ier )
{
   //if( inc_double_init( *num ) == 0 ) {
   //   *ier = 0;
   //} else {
   //   *ier = 1;
   //}
   inc_double_init( *num );
}

void inc_float_init_( int* num, int *ier )
{
   //if( inc_float_init( *num ) == 0 ) {
   //   *ier = 0;
   //} else {
   //   *ier = 1;
   //}
   inc_float_init( *num );
}


void inc_int_init_( int* num, int *ier )
{
   //if( inc_int_init( *num ) == 0 ) {
   //   *ier = 0;
   //} else {
   //   *ier = 1;
   //}
   inc_int_init( *num );
}


void inc_long_init_( int* num, int *ier )
{
   //if( inc_long_init( *num ) == 0 ) {
   //   *ier = 0;
   //} else {
   //   *ier = 1;
   //}
   inc_long_init( *num );
}


//
// Functions to drop the arrays of containers
//

void inc_double_dump_( void )
{
   inc_double_dump();
}

void inc_float_dump_( void )
{
   inc_float_dump();
}

void inc_int_dump_( void )
{
   inc_int_dump();
}

void inc_long_dump_( void )
{
   inc_long_dump();
}


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

