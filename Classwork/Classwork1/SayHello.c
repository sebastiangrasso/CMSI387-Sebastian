  
#include <stdio.h>
#include <stdlib.h>

int main( int argc, char * argv[] ) {

   char str[40];

   printf( "What is your name? \n" );
   gets(str);
   printf("Hello, %s\n", str);

}
