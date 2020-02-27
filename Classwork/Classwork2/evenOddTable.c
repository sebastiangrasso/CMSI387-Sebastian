//
//  evenOddTable.c
//  
//
//  Created by Sebastian Grasso on 1/26/20.
//

#include <stdio.h>

int main(int argc, char * argv[]) {
    int i;
    char* type;
    for (i = -10; i <= 10; ++i) {
        if (i % 2 == 0) {
            type = "EVEN";
        } else {
            type = "ODD";
        }
        printf("%d \t %d \t %s \n", i, (i * i), type);
    }
    return 0;
}
