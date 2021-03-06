Sebastian Grasso
Homework01 (02/05/2020)

#1)
Operating Systems are the software that utilizes hardware resources of the computer system for the execution of other software. Middleware is built on top of the Operating System to provide different/more advanced abilities to software programs. Both do things like enforce rules for seperating computations or managing them through consistent storage, but they differ in underlying prodivers of lower-level services. For example, if any operating system provides the ability to read and write database files, middleware could provide the ability to update relational database tables, based off of the operating systems read/write ability. 

#2)
A thread is a sequence of computational steps strung together. A proccess is made up of a minimum of 1 thread. So a single-threaded process is simply one thread, while a multi-thread process consists of multiple threads. Processes are typically independent of one another and thus communication is more difficult, while threads, frequently running in sequence, are part of the same process and can exchange information more easily. 

#3)
The most exciting concept preview I found from chapter 1 was "supporting interactions across space". Chapter 9 is focused on the architecture of Network Systems and I can already see the overlap with the partitioning of a single computer. Built on top of the physical components is a link layer, which then provides the operating system services for network and transport. Given how large these networks have become, I think it will be very interesting to see how these processes scale when sending/receiving massive amounts of data.

#4)
1- Total Elapsed Time = 100 loops * (10ms I/0 + 1ms comp) + 1ms switch + 1000ms comp
                         = 2101 ms
   2- Total Elapsed Time = 100 loops * (1 ms switch + 10ms 1/0 & 10ms of B + 1 ms switch + 1 ms comp)
                         = 1300 ms
   2 is more efficient because it although the increased switching adds a few ms to each loop, it allows the CPU to not waste open processor time and thus saves almost the 4/5 of the full second to run thread B. 
   
#5)
Yes, running the two threads concurrently will allow the sleeping thread to print a message after every sleep cycle, while the enter key has not been pressed. On an enter press, the main thread can immediately kill the second thread, preventing the cyclic message

#6)
  [ T1 ][  T2  ][   T3   ]
  0     1       3        6
  
  t1=1, t2=3, t3=6, AVG= 10/3
  
  [ T1 ][   T3   ][  T2  ]
  0     1         4      6

  t1=1, t2=6, t3=4, AVG= 11/3
  
  [  T2  ][ T1 ][   T3   ]
  0       2     3        6
  
  t1=3, t2=2, t3=6, AVG= 11/3
  
  [  T2  ][   T3   ][ T1 ]
  0       2        5     6
  
  t1=6, t2=2, t3=5, AVG= 13/3

  [   T3   ][ T1 ][  T2  ]
  0         3     4      6
  
  t1=4, t2=6, t3=3, AVG= 13/3
  
  [   T3   ][  T2  ][ T1 ]
  0         3       5    6

  t1=3, t2=5, t3=6, AVG= 14/3
  
  Shortest Job First = Shortest AVG Turnaround
  
  #7)
  ```c
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
```
  
  
