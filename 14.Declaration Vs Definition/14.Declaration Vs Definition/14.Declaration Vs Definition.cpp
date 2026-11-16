
#include <iostream>
using namespace std;

/*
  Function/ procedure Declaration Vs Definition




  Have a look at the below code:

*/

int main()
{
    add(10, 20);

     return 0;
}

void add(int a, int b)  // This is the function implementation (+ definition)
{
    cout << (a + b);
}

// as you notice, I did the implementation below main().
// I am supposed to do it ABOVE main().

// This is why- When I run the program, I will stumble upon the following compilation error 
// 'add': identifier not found.
// 
//____________________________________________________________________________________________________
//----------------------------------------------------------------------------------------------------





// Now, let's say that I insist on implementing this procedure BELOW main()
// This is how to overcome such problem:



// declare the function (by simply copying the entire header of the implementation):

void add(int, int);  // just mention the data type without its respective variable.
//It tells the compiler that a function named add exists & is implemented (defined) below main()

int main()
{
    add(10, 20);

    return 0;
}

void add(int a, int b)  // This is the function implementation (= definition)
{
    cout << (a + b);
}


/*  When is it useful ?
    
    sometimes if the mishap of implementing (defining) functions/procedures
    ,below the calling line, occurs then this issue can be overcomed by
    declaring these functions/procedes ABOVE the calling line.

    or use it if,

    you simply need to call a function that is implemented below the calling line.

*/



/*  In technical terms:

   When is it useful?

   A function declaration is useful when we need to call a function
   before its definition appears in the code.

   The declaration lets the compiler know about the function before
   it reaches the function call.


*/




*/