
#include <iostream>
using namespace std;

/*
    **Ranged loop   =   Ranged For-loop **

 Walking through all elements of a CONTAINER, storing each element in the process.

 It is especially useful when walking through containers whose size or number of elements may vary dynamically.

 We'll touch more on this as we progress.



  Syntax:

  for (RangeDeclaration : RangeExpression)
  {
    // code
  }


*/


int main()
{
    int array[] = { 1, 50, 100, 150, 200, 250, 300, 400 };

    for (int n : array)  // the data type of n SHOULD be the same as what we're walking into
        // when compiler encounters the colon, it considers what comes after as a container 
    {                      // Therefore, storing each single value of the container inside n on every single iteration untill all elements are exhaused.

        cout << n << endl;
    }

    return 0;
}


// ANOTHER way of utilizing it, WITHOUT having to declare the container as a first step.

int main()
{

    for (int n : {1, 50, 100, 150, 200, 250, 300, 400})
    {
        cout << n << " ";
    }
    cout << endl;

}