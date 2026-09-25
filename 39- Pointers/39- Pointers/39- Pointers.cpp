
#include <iostream>
using namespace std;

// pre-requisite:  
// An object is a region of memory that has an identifier, stores a value and has an address.


/* Pointers:  A pointer variable points to the variable object that it stores the memory address of.
            
 The purpose behind pointing, is to give the pointer access to the value of the variable (EXTREMELY IMPORTANT).
           
 
 -----------------------------------A Standalone Note:-----------------------------------------------
 ----------------------------------------------------------------------------------------------------
  
  int * p = &c    // Variable p (could be any name) is of type integer pointer. It equals the address of c.
                  // again &c reads 'the address of c'.

  A space in memory is reseved for variable p .
  containing the address of c. 
  and it has its own unique address off course.

  It points the the variable object, it stores the address of ( **In order to access value of the variable).
  

  A pictorial representation for this explanation:
   ┌─────────────────────────────┐
   │            MEMORY           │
   │                             │
   │  Name: a                    │
   │  ┌───────-─-─-─┐            │
   │  │ some value  │ <<---      │
   │  └────────-─-──┘      │     │
   │  Address:             │     │
   │  000000469851FC54     │     │ <--- Address example.
   │                       │     │
   │  Name: p ─────────────┘     │
   │  ┌───────────────────┐      │
   │  │ 000000469851FC54  │      │ 
   │  └───────────────────┘      │
   │  Address:                   │
   │  000000FD9851FC99           │ <--- A different address (off course).
   │                             │
   └─────────────────────────────┘
 

 ______________________________________End of standalone note _______________________________________________________


   
  Simply examine the following code:
 
┌──────────────────────────────────────────────────────────────┐   ┌─────────────────────────────┐
│                          PROGRAM                             │   │            MEMORY           │
│                                                              │   │                             │
│  int a = 10;   --------------------------------> immediately │   │  Name: a                    │
│                                                              │   │  ┌────────┐                 │
│  cout << a << endl;                                          │   │  │   10   │                 │
│  cout << &a << endl;                                         │   │  └────────┘                 │
│                                                              │   │  Address: 000000469851FC54  │
│  int * p = &a;                                               │   │                             │
│  cout << p;                                                  │   │                             │
│                                                              │   │                             │
└──────────────────────────────────────────────────────────────┘   └─────────────────────────────┘
 
 For:  cout << a << endl;     // 10   It searches for the address of a, finds it and then it prints out its value.

 For: cout << &a << endl;    // 000000469851FC54   // again  &a reads 'the addess of a'

 For: int * p = &a;   // This is a variable of type int pointer. (int * = integer pointer) (double * = double pointer) etc.   
                     // int because variable a (that the pointer stores its address) is of type int.
                    // or:     int * x = &a  , etc.

 A pointer variable ONLY stores an address of another:

                                - variable (a normal variable or an array variable or a vector variable, etc.)
                                - or a function 
                                - or an object 
                                - or anything imaginable that exists in memory.
 
 A ointer does NOT store a value. Attempting to do so, renders exception / error.

 So, storing the address of ANYTHING can ONLY be done using pointers.

 
 =====================================================================================================================================
 Note:  In this line  [cout << &a << endl;]   &a reads: Address of a

 Examine this carefuly for the line of cout << &a << endl;

┌──────────────────────────────────────────────────────────────┐   ┌─────────────────────────────┐
│                          PROGRAM                             │   │            MEMORY           │
│                                                              │   │                             │
│  int a = 10;    ------------------------------> immediately  │   │  Name: a                    │
│                                                              │   │  ┌────────┐                 │
│  cout << a << endl;                                          │   │  │   10   │<<-----          │          
│  cout << &a << endl;                                         │   │  └────────┘       │
                                                                   │  Address:         │         │
│                                                              │   │  000000469851FC54 │         │
│                                                              │                       │
│                                                                                      │
│  int * p = &a;   -----------------------------> immediately  │   │  Name: p ----------  // p now points to the a variable object, it's storing the address of .      
│  cout << p;                                                  │   │  ┌───────────────────┐      │ & the purpose is to have access to the value of a which is 10 here.
│                                                              │   │  │  000000469851FC54 │      │
│                                                              │   │  └───────────────────┘      │
│                                                              │   │   Address:                  │
│                                                              │   │   000000FD9851FC99          │
│                                                              │   │        
│                                                              │   │                             │
└──────────────────────────────────────────────────────────────┘   └─────────────────────────────┘

 ***** Crucial ******
 Pointers make one able to access any place in memory from any place in the program.
 pointer make one able to access anything from memory anytime anywhere.

 How ?
 Answer: because a pointer is nothing BUT and ONLY the following pictorgram:


  A pictorial representation for this explanation:
   ┌─────────────────────────────┐
   │            MEMORY           │
   │                             │
   │  Name: a                    │
   │  ┌───────-─-─-─┐            │
   │  │ some value  │ <<---      │
   │  └────────-─-──┘      │     │
   │  Address:             │     │
   │  000000469851FC54     │     │ <--- Address example.
   │                       │     │
   │  Name: p ─────────────┘     │
   │  ┌───────────────────┐      │
   │  │ 000000469851FC54  │      │
   │  └───────────────────┘      │
   │  Address:                   │
   │  000000FD9851FC99           │ <--- A different address (off course).
   │                             │
   └─────────────────────────────┘
   This diagram could belong to:

   int * p = &a       // if variable a was an integer.
   float * p = &a     // if variable a was a float.
   stEmployeeInfo * p = &a   // if variable a was a structure user-defined data type.
   string * p = &a   // if variable a was a string.
   char * p = &a   // if variable a was a character.
   enResponse * p = &a   // if variable a was an enum user-defined data type.
   double * p = &a   // if variable a was a double .



 The above PICTORIAL REPRESENTATION applies to a variable.

    If it applies to, for example, a function, then swap:

    Name: a       with:    Name: function1   in the diagram.

    For example:

    int (*p)() = &function1;
    // if function1() returns an int
    // and so on for other return types.


*/



 int main()
 {
    int a = 10;

    cout << "a value        = " << a << endl;   // 10
    cout << "a address      = " << &a << endl;  // 0000000CFBEFFA04   
    // It is hard for you as a programmer to memorize this hexidecimal address
    // in your program and then use it directly when needed. 
    // 
    // This is why they came up with the concept of pointers
    // where you declare a variable of type pointer that stores this address 
    // 
    // and then use the name of this pointer variable whenever you need the address.

    int * p = &a;   // we chose p as the name. It could be anything else you want.  
                    // = &a (reads:  equals the address of a)
                    // the variable 'p' is of type integer pointer, ONLY stores addresses.
                    // 
                    // * The star:
                    // is to help one envision, the pointer variable p NOW POINTS TO THE VARIABLE a OBJECT.
                    // and the purpose of that is to have access to the value of a which is 10 here.
         
    /* Curcial to envision:
    ┌─────────────────────────────┐
    │          MEMORY             │
    │                             │
    │  Name: a                    │
    │  ┌────────┐                 │
    │  │   10   │ <<-----------   │  
    │  └────────┘             │   │
    │  Address:               │   │ 
       000000469851FC54       │   │
    │                         │   │
    │  Name: p ---------------    │
    │  ┌────────────────────────┐ │
    │  │  000000469851FC54      │ │
    │  └────────────────────────┘ │
    │  Address: 000000FD9851FC99  │
    └─────────────────────────────┘

     Note: 
             int* p;
             p = &a;
      
             is exactly the same as declaring & initializing on the same line:

             int* p = &a;

             The only difference is that, in the first case, (int* p; ) , a space in memory is reserved for variable p and it's filled
             with "garbage" value (The whole thing stops at ;).

             In the second case ( int* p = &a;) a space in memory is reserved for the variable p and it's immediately initialized with
             the address of a instead of a "garbage" value.
    
*/
   


    // int * p = 20;    // throws exception as pointers only store addresses.
    // int * p = a;    // throws exception as pointers only store addresses.



    cout << "Pointer Value = " << p;    // 0000000CFBEFFA04  the same output above.

    cout << endl;

    return 0;
 }

 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 // Regarding changing the direction of a pointer: 
 // (EXTREMLY USEFUL PROVIDING INCREDIBLE FLEXIBILITY as we shall see moving forward):

int main()
{
    int a = 10;
    int b = 50;

    cout << "a value        = " << a << endl;
    cout << "a address      = " << &a << endl;

    int* p;
    p = &a;
    p = &b;    // changing the direction of the pointer.


    cout << "Pointer Value = " << p;

    cout << endl;

    return 0;
}

