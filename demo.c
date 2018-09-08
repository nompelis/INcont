#include <stdio.h>
#include <stdlib.h>

//#include "crap.h"

int inc_double_init( int );
int inc_double_init2( int );
void inc_double_store( int, double );
double inc_double_get( int, int );
long inc_double_get_size( int ) ;
void inc_double_clear( int ) ;
void inc_double_dump();

int inc_long_init( int );
void inc_long_store( int, long );
long inc_long_get( int, int );
long inc_long_get_size( int ) ;
void inc_long_clear( int ) ;
void inc_long_dump();


int main()
{
   int ihandle = 1;
   int jhandle = 2;

   printf("Creating arrays of containers \n");

   (void) inc_double_init( 10 );
   (void) inc_long_init( 10 );


   printf("Working with doubles...\n");

   inc_double_store( ihandle, 100.0 );
   inc_double_store( jhandle, 200.0 );

   inc_double_store( ihandle, 101.0 );
   inc_double_store( jhandle, 201.0 );


   printf("Number 0 from handle 1: %lf \n", inc_double_get( ihandle, 0 ));
   printf("Number 0 from handle 2: %lf \n", inc_double_get( jhandle, 0 ));

   printf("Number 1 from handle 1: %lf \n", inc_double_get( ihandle, 1 ));
   printf("Number 1 from handle 2: %lf \n", inc_double_get( jhandle, 1 ));

   printf("Size of handle 1: %ld \n", (long) inc_double_get_size( ihandle ) );
   inc_double_clear( ihandle );
   printf("Size of handle 1: %ld \n", (long) inc_double_get_size( ihandle ) );

   printf("Size of handle 2: %ld \n", (long) inc_double_get_size( jhandle ) );
   inc_double_clear( jhandle );
   printf("Size of handle 2: %ld \n", (long) inc_double_get_size( jhandle ) );


   printf("Working with longs...\n");

   inc_long_store( ihandle, 10000 );
   inc_long_store( jhandle, 20000 );

   inc_long_store( ihandle, 10100 );
   inc_long_store( jhandle, 20100 );


   printf("Number 0 from handle 1: %ld \n", inc_long_get( ihandle, 0 ));
   printf("Number 0 from handle 2: %ld \n", inc_long_get( jhandle, 0 ));

   printf("Number 1 from handle 1: %ld \n", inc_long_get( ihandle, 1 ));
   printf("Number 1 from handle 2: %ld \n", inc_long_get( jhandle, 1 ));

   printf("Dropping arrays of containers \n");

   inc_double_dump();
   inc_long_dump();

   return(0);
}

