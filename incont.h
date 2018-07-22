/******************************************************************************
 A library that enables the use of the <std:vector> C++ construct in Fortran.
 Ioannis Nompelis <nompelis@nobelware.com>
 ******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#include <vector>

#ifdef __cplusplus
extern "C" {
#endif

using namespace std;


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
