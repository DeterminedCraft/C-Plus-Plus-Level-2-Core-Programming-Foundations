
#include <iostream>
#include <vector>   // HAS to be included.
using namespace std;

/*  Exception Handling 

    To prevent crashes that may occur during run time.
*/




 ////Lets write a code that simulates a crash:
int main() {
    
    vector<int> num{ 1, 2, 3, 4, 5 };
    
    cout << num.at(5) << endl;   // renders a crash/ out-of-bound exception DURING RUN TIME.
    
   
    return 0;
}

//// assume that you HAVE to keep the code as is:
//// then, handle this exception:

int main() {   // we will use a Try catch statement ( but it DOES slow down the program).

    vector<int> vNumbers{ 1, 2, 3, 4, 5 };

    try
    {

        cout << vNumbers.at(5) << endl;   // renders a crash/ out-of-bound exception DURING RUN TIME.

    }
    catch (...){  // here we're catching ALL exceptionS. In the future, we'll see how to handle only ONE SPECIFIC type of an exception.

        cout << "Exception handled: Out of bound \n";
    }

    return 0;
}

// even though the exception is handled, 
// 
// Exception Handling DOES slow down the program. As a programmer, you HAVE to be AWARE of this fact.
// 
// Hence, Exception handling is to be utilized ONLY WHEN IT'S ABSOLUTELY NECESSARY & NEEDED.
//
// so if we can handle a potential crash/ exception without resorting to Try..Catch
// then this is to be impplemented. 
// 
// If a try catch statment is used, then this convey that there has been no other way to prevent
// the potential crash / exception.



// As a programmer, if you sense that a crash / exception could be rendered during runtime,
// then, you have to FIRST handle the situation WITHOUT resorting to the Try Catch statement
// if possible.
//
// so in the case of the very fit code snippet
// one could handle the situation by implementing range validtion for the user input
// that prevents them from entering 5 (user enters 5, then an error message is thrown and
// the user is re-prompted to input a value.
//
//
