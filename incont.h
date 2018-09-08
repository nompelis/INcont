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

#include <vector>

#ifdef __cplusplus
extern "C" {
#endif

using namespace std;


//
// Global functions to create and destroy arrays of containers
//

//int inc_double_init( int num );
//int inc_float_init( int num );
//int inc_int_init( int num );
//int inc_long_init( int num );
void inc_double_init( int num );
void inc_float_init( int num );
void inc_int_init( int num );
void inc_long_init( int num );

void inc_double_dump( void );
void inc_float_dump( void );
void inc_int_dump( void );
void inc_long_dump( void );


//
// Global functions to access the containers
// These accessors are as simple as they need to be
//

void inc_double_store( int handle, double d );
double inc_double_get( int handle, int index );
size_t inc_double_get_size( int handle );
void inc_double_clear( int handle );

void inc_float_store( int handle, float f );
float inc_float_get( int handle, int index );
size_t inc_float_get_size( int handle );
void inc_float_clear( int handle );

void inc_int_store( int handle, int i );
int inc_int_get( int handle, int index );
size_t inc_int_get_size( int handle );
void inc_int_clear( int handle );

void inc_long_store( int handle, long l );
long inc_long_get( int handle, int index );
size_t inc_long_get_size( int handle );
void inc_long_clear( int handle );


#ifdef __cplusplus
}
#endif
