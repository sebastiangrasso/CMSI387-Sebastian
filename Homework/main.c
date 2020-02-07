//
//  main.c
//  callAndResponse
//
//  Created by Sebastian Grasso on 2/6/20.
//  Copyright © 2020 Sebastian Grasso. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char name[60];
    int age;
    int classYear;
    char major[50];
    char nationality[50];
    char birthdate[10];
    
    printf("What is your name? ");
    scanf("%s", &name);
    
    printf("What is your age? ");
    scanf("%d", &age);
    
    printf("What is your class year? ");
    scanf("%d", &classYear);
    
    printf("What is your major? ");
    scanf("%s", &major);
    
    printf("What is your nationality? ");
    scanf("%s", &nationality);
    
    printf("What is your dirthdate (Form MM/DD/YYYY)? ");
    scanf("%s", &birthdate);
    
    printf("Name: %s \n Age: %d \n Class Year: %d \n Major: %s \n Nationality: %s \n Birthdate: %s \n", name, age, classYear, major, nationality, birthdate);

    return 0;
}
