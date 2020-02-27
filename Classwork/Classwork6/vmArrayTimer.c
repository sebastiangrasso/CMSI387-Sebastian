//
//  virtualMemTimer.c
//  
//
//  Created by Sebastian Grasso on 2/24/20.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
  int index, size;
  time_t t;
  clock_t start, end;
  double cpu_time_used;
  int *virtualMem;

  if( 1 == argc ) {
     printf( "\n\n   Please enter one argument, the array size.\n\n" );
     exit( 0 );
  }
  size = atoi( argv[1] ) ;
  printf( "\n\n   OK, using array of %d elements.\n\n", size );

  virtualMem = (int *)malloc( sizeof(int) * size );
  if( NULL == virtualMem ) {
     printf( "\n    Could not allocate array of %d size.\n\n", size );
     exit( -1 );
  }

  virtualMem = (int *)malloc(sizeof(int) * size);

  srand((unsigned)time(&t));
  
  printf( "\n  Array allocated, now filling with random int values...\n" );
  for (index = 0; index < size; index++)
  {
    virtualMem[index] = rand() % 100;
  }

  start = clock();

  for (index= 0; index< size; index++)
  {
    if (index> 0 && (index+ 1) % 4096 == 0)
    {
      end = clock();
      cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
      printf("Access Element: %d \n Value: %d \n Lookup took %f seconds \n", index+ 1, virtualMem[index], cpu_time_used);
    }
  }

  free(virtualMem);

  return 0;
}
