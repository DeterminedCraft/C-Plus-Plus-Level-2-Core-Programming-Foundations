/*
 
                                                    Stack Memory vs Heap Memory

    Memory = RAM

   +-----------------------------------------------------------+
   |                                                           |
   |                     RAM: Memory Layout                    |
   |                                                           |
   |   +---------------------------------------------------+   |
   |   |   4  |  Heap: any unnamed dynamic object          |   |
   |   |      |        (single value object or array object|   |
   |   +---------------------------------------------------+   |
   |                                                           |
   |   +---------------------------------------------------+   |
   |   |   3  |  Stack: local variables / functions / pointers |   
   |   |      |                                            |   |
   |   +---------------------------------------------------+   |
   |                                                           |
   |   +---------------------------------------------------+   |
   |   |   2  |  Static / Global                           |   |
   |   |      |                                            |   |
   |   +---------------------------------------------------+   |
   |                                                           |
   |   +---------------------------------------------------+   |
   |   |   1  |  Source Code / Instructions                |   |
   |   |      |                                            |   |
   |   +---------------------------------------------------+   |
   |                                                           |
   +-----------------------------------------------------------+


   Memory (RAM) is divided into 4 parts:

   Part I: Source Code / Instructions  
           The size is too small.
           Stores the compiled code.



   part II: Static / Global
            The size is too small.
            It's where the global and static variables are stored in memory throught the lifetime of the entire program.

            When a program is run, the execution begins by reserving a space in memory for global variable(s)
            (if the are declared). Thereafter, the execution is main() begins.


  
  Part III: Stack 
            Occupies more size in memory.
            It stores what's in main() for local variables, procedures, functions, pointer variables etc ( and NOT global & static variables).

            This FIXED memory space is designated by the Operating System for the program BEFORE THE PROGRAM RUNS.
            It's FIXED size is determined by the sizes combined of the different data types declared in the program.

            The Stack is space in memory where our program is active.

            But in the case that, for whatever reason, more memory is needed
            without knowing how much

            ,then pointers will be the mean to point and access the 4th space in memory called HEAP
            where we can reserve DURING RUNTIME (DYNAMICALLY) as much memory as needed IN THE HEAP.

            Note: If your program occupies 2MB in Stack and more memory is needed,
                 then the rest of the 16 GB in Heap is available dynamically (during runtime).
                 via the pointer ( daftar al sheekat)


    Part IIII: Heap
               It occupies the VAST MAJORITY of space in memory. it follows that its space is enormous as compared to that of Stack.

               It stores the unnamed dynnamic objects (single value objects or array objects)

               It's the memory that is stored in / reserved from, during run-time (dynamically), 
               if the Stack needs more space for your program, during its execution,
               and this is achieved via the use of pointers.

               Example:  
               

               int main()
               {
                 int x = 5;  // stored in stack.

                 float * p = new float (5);   // The pointer variable p is stored in heap.
               }

               
       

           





















*/


