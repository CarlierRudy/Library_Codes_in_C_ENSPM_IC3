#include <stdio.h>
#include <stdlib.h>
#include "SampleLib.h"
int main( void ) {
	system("color F0");
 int result = power( 2, 4 );
 printf( "2^4 == %d\n", result );
 result = fact( 6 );
 printf( "6! == %d\n", result );
 system("pause");
 return EXIT_SUCCESS;
}
