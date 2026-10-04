
#include <iostream>
using namespace std;

/******************************** Pre-requisites to Pointers Mental Model ********************************
 
 An object is anything that has a region of storage in memory with lifetime.

 Hence:
 - It could have a name (identifier) OR can be without name.
 - It has a reserved space in memory whose size is determined by the data type of the value it's going to store.
 - It has a value -indeterminate (garbage) or definate.
 - It has an address in memory.

 In the case that an object has a name (identifier), then it's called a variable (don't call it a 'variable object').

 In the case that an object doesn't have a name (identifier),
 then it's called an unnamed dynamically allocated object.
 OR 
 simply unnamed object (as the user didn't first store the value inside a variable
 as in, for example, cout << "Hi" << endl; where "Hi" is a literal string value.


  
 More details:

 int x = 10;      // with name (identifier).

 cout << "Hi";  // unnamed object: "Hi" isn't first stored by the user in a variable. Note: it's string literal value.

 int * p  = new int(10);    // new int(10) represents
                            // an unnamed; dynamically allocated object by the new keyword that stores the integer 10
                            // int * p represents:
                            // p is a pointer variable of type integer pointer (int * = integer pointer).
                            // that can ONLY store the address of the unnamed dynamically allocated object
                            // CAUSING P to point at (to reference) the unnamed dynamically created object 
                            // FOR THE SOLE REASON of accessing its value (that is 10).

 


 IMPORTANT notes: 
 - A variable is an object that has a name (Just call it a variable and not an object variable).
 - Any object that has a name is a variable.
 - An object without a name cannot be called a variable: 
   - so it's either called: an unnamed dynamically allocated object.
   - or simply, unnamed object (the user did not first store the value in a variable).

 - A function or a procedure is NOT a object. 
   Just how main() is not an onject. However; they do have addresses.
 - An array is a series of objects arranged contiguously in memory


         ****************************** Now one can understand Pointers  ******************************
 */
 
 /* ******************************************************************************************************************************************************
                                              The Actual Pointer Mental Model
  ====================*************************************************************************************************************************************
  to add (plus refine and shorten). The purpose is#1 
  
  plus in order to initialize dynamic memory allocation objects with actual values and this is possible only using pointers.
  so that we release thse objects from meory during run time and as soon as we 
  are done with them so less space is reserved in memry which is conducive to more speed and better performance .

  There are two common ways to access a value.

  1- Via the variable itself (the traditional way):

      int x = 5;
      cout << x << endl;

  Here, x directly accesses its own value.

  2- Via a pointer:

  The syntax *p is used to dereference a pointer and access the
  object that it points to.

  For structure/class objects, p->member is used to access a
  member through a pointer.

  Steps:

  1- Declare a pointer variable of a specific pointer data type:

      int* p;

  Here, p is a pointer variable capable of storing the address
  of an int object.

  2- Store the address of the variable/object whose value we want
     to access in the pointer:

      p = &x;

  The & operator obtains the address of x.

  Now p contains the address of x, so p points to x.

  The pointer can then be dereferenced using *p:

      cout << *p << endl;   // accesses x's value -> 5

  We can also modify the object through the pointer:

      *p = 50;

  This changes the value of x itself to 50.

  Therefore:

    int x = 5;
    int* p = &x;

  means:

    x  -> the actual int object containing the value 5
    p  -> a pointer variable containing the address of x
    *p -> accesses the object that p points to, therefore x

  Important distinction:

  A pointer does NOT point to a variable "only in order to access
  its value."

  A pointer fundamentally stores an address.

  When the pointer contains the address of an object, we say that
  the pointer points to that object.

  Dereferencing the pointer with * gives us access to the object
  it points to.

  Therefore:

     p   -> contains the address of x
    *p  -> accesses x through that address

  The following two statements:

    int* p;
    p = &x;

  can be combined into one statement:

    int* p = &x;
*/






/* A pointer variable points to (= references) an object or function/ procedure whose address it stores.
            
 The purpose behind pointing, is to give the pointer access to the value of the object (EXTREMELY IMPORTANT)
 through dereferencing.
  
  Examine the following line:  int * p = &c  

  - A space in memory is reseved with the name (identifier) p .
  - It contains the address of c.
  - and it has its own unique address off course.
 
 -----------------------------------A Standalone Note:-----------------------------------------------
 ----------------------------------------------------------------------------------------------------
  
  int * p = &c    // Pointer Variable p (could be any name) is of type integer pointer. 
                  // It stores the address of c ( &c reads 'the address of c').
                 
 As SOON AS it stores the address of c, it will be pointing to (referecing) to the object that is variable c.
                                        put this as a separate note:       that is unnamed (dynamically allocated)
                                                                                         
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
 
 continue:

   Whether it's a choice of style or according to an actual need:
  One may need to declare the pointer variable first

  int * p;

  and then initialize it on a separate line below:

  p = &c;

  Note: for   int * p
              -in memory, p, doesn't occupy much space because a pointer is to SIMPLY POINT TO something and also because it's designated to store nothing but an address.

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

