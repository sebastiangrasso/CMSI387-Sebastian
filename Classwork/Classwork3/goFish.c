//
//  goFish.c
//  
//
//  Created by Sebastian Grasso on 1/30/20.
//

#include <stdio.h>
#include <string.h>

int main( int argc, char * argv[] ) {
  
  int number;
  int numbers[25];
  int sum = 0;
  int numSevs = 0;
  int i = 0;
  char concat[128];
  
  while (1) {
    printf("Number: ");
    scanf("%d", &number);
    if (number == -9999) {
      break;
    }
    numbers[i] = number;
    i++;
  }
//sum values, divide by i (count) for average
    for (int a = 0; a < i; a++) {
      sum += numbers[a];
    }
//build concatanated string
    int index = 0;
    for (int a = 0; a < i; a++) {
        index += snprintf(&concat[index], 10+sizeof(numbers[a]), "%d", numbers[a]);
    }
//count sevens
    size_t b = 0;
    while (concat[b] != '\0') {
        if (concat[b] == '7'){
            numSevs++;
        }
        b++;
    }
    
  printf("\nSum: %d\n", sum );
  printf("Average: %f\n", (double)sum/i);
  printf("Concatenation: %s\n", concat);
  printf("Number of Sevens: %d\n", numSevs);
}
