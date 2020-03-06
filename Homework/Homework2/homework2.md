# Homework 2
1. Reversing the steps and unlocking the spinlock before removing the current thread is dangerous because it can result in the the thread running multiple times. It's possible that the if the thread isn't removed prior to unlocking the mutex, the thread will run in an infinite loop. 
2. It is important that the program gets the values of seatsRemaining and cashOnHand from the current state. If the audit occurs in the middle of ticket puchasing transaction, then the values may come from different states and the audit will by buggy because the cashOnHand and seatsRemaining values may not coincide.
3. [BoundedBufferTest]()
4. [ModifiedBounderBuffer]()
5. ⋅⋅* The undo log of two phase locking makes it possible for T2 to see the old value of x and the new value of y. Every time a new value is written, the undo log stores actions necessary to revert back to the original state.
   ⋅⋅* It is possible using read committed isolation level with short read locks because transactions only reading data have easy access to the shared lock that they release after each read. Even though writing holds the lock, read operations can easily access it and guarentee that the information they are reading is committed, or not still being written. 
   ⋅⋅* Since snapshot isolation stores the new value in a different location for each write operation, T2 ignores all writes since T1 and will not be able to see the old value of x. 
6. Virtual Addresses-
   First= 12289  Last= 16383
   Physical Addresses- 
   First= 24576  Last= 28668
7. Since each page directory points to 1024 page table entries, and each page table entry can point to 1024 page frames, the last entry in the page directory would start at 1024*1023, or 1047552 (We use 1023 because page directory indexing begins at 0). 1047553 is next page we can access, one index over. 
8. First I declared an array of chars of size equal to the integer entered on the command line. Then using the time C library, I declared a clock to start at the begining of a for loop traversing this array and print the time when the last 4096th element was accessed. Then I began testing the program with different array sizes from the Mac terminal. I began with an arbitrary 10,000,000, which causes a seg fault. Then after a little stack overflow research and testing, I determined the largest array size I could use was one of 8384944, where the loop up time for the last element was .066827. I continued this process, halving the size each time.

|Size    | last eligible look up time |
| ------ | ------  |
|8384944 | 0.66827 |
|4192472 | 0.33689 |
|2093236 | 0.16259 |
|1048118 | 0.08474 |
|524059  | 0.004458 |

After a little more testing between the range [524059 - 1048118], I found the time increases a huge amount around array sizes of ~1034059 and then continue to increase linearly. 

9. There are 8 processes running. 
![family tree]: (https://github.com/sebastiangrasso/CMSI387-Sebastian/blob/master/Homework/Homework2/IMG_1533%20(1).jpg)
