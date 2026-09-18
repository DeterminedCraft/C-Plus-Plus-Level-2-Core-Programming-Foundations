
#include <iostream>
using namespace std;


/* WITHOUT skimming through the code below:
   
   Assume that you have the following block of code inside main():

    cout << MySum(10, 20) << endl;
    cout << MySum(10, 20, 30) << endl;
    cout << MySum(10, 20, 30, 40) << endl;

 Q: Is it possible to implement ONE function ONLY
    so that the program functions properly without any errors,
    and the output is displayed as:

    30
    60
    100  ?

*/

//// Answer:

int MySum(int a, int b, int c = 0, int d = 0)  // notice that 'c' & 'd' are default parameters(optional parameters).
{
    return (a + b + c + d);

}



int main()
{
    cout << MySum(10, 20) << endl;      // 'c' & 'd' will resort to their default values of 0 & 0, since there is the failure of not providing their values in the calling function
    cout << MySum(10, 20, 30) << endl;      // the value of 'c' is overriden to 30 from 0  & 'd' will resort to its default values of 0 
    cout << MySum(10, 20, 30, 40) << endl;  //both values of 'c' & 'd' are resp. overriden to 30 and 40.

    return 0;
}



///////////////////////////////////////////////////////////////////////////////////////////////////
// Now in the below code, read the warning messages (before compiling):

int MySum(int a, int b, int c, int d)   
{
    return (a + b + c + d);
}



int main()
{
    cout << MySum(10, 20) << endl;     // error reads: too few arguments in function call   
    cout << MySum(10, 20, 30) << endl;     // error reads: too few arguments in function call      
    cout << MySum(10, 20, 30, 40) << endl;  

    return 0;
}

/* This brings us to the topic of
   
   Default Parameters

   In programming, the term "default" implies:
   - failure
   - being optional.

   explanation:
   If something fails, then I will do this (and doing this is optional)
   .. using the default parameter.


   This was done with the switch..case statements.
   However- when it comes to functions/ procedures, in their implementations, when 
            you implement the 1st parameter, the 2nd parameters, the 3rd parameters, etc.
            you can, for example, make the 3rd parameter optional:

            meaning, the user can enter it. 
            & If the user doesn't enter it (failing to provide an argument in the caling function), 
            then it will resort to its DEFAULT value that you specify.


  Quick note:

  so on the line:  cout << MySum(10, 20) << endl;
  there is the FAILURE of not providing the 3rd argument in the calling function,

  so the function will default to using the specified value in the implementation.

  // Try to take advantage of the function/ procedure default parameter concept when
  // attempting to code/ solve problems


*/