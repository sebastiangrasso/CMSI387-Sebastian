//
//  main.c
//  ConcurrentThreads
//
//  Created by Sebastian Grasso on 2/6/20.
//  Copyright © 2020 Sebastian Grasso. All rights reserved.
//

#include <pthread.h>
#include <unistd.h>
#include <stdio.h>


static void *child(void *ignored){
    while(1)  {
        sleep(5);
        printf("Child is done sleeping 5 seconds \n");
    }
    return NULL;
}

int main(int argc, char * argv[]) {
    pthread_t child_thread;
    int code;
    
    code = pthread_create(&child_thread, NULL, child, NULL);
    if (code){
        fprintf(stderr, "pythread_create failed with code %d\n", code);
    }
    int keypress = getchar();
    
    if (keypress){
        pthread_cancel(child_thread);
        printf("Cancelled Child Thread");
    }
    
    return 0;
}
