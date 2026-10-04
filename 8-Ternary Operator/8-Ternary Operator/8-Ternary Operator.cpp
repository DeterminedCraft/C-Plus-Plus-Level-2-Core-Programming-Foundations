
#include <iostream>
using namespace std;


/* So far we have:
   - if,  if..else,  if..if else.. etc statements. 
   - switch..case statements.

  However, we also have: Ternary Operator (Short Hand If Statement) 
  
  we use it in cases where it's simpler to do than an if statement
  where we type less, and it gives me unique features that don't exist in the if statement.

  
  Syntax:

  condition ? expression1 : expression2;
                 ↓             ↓
                True          False


  ex:      if(mark >= 50)       

  -    (mark >= 50)    is the condition 
  -    if              is the ?

  if the condition is true,  then execute expression1 regardless of what it is.
                   is false, then execute expression2 regadless of what it is.
            


*/

// Using normal if:  (Unoptimized)

int mark = 90;
string result;

if (mark >= 50)
{
    result = "Pass";
}
else
{
    result = "Fail";
}

cout << result << endl;


// OPTMIZED & MUCH EASIER: Using Ternary Operator (Short hand if) for optimization:

int mark = 90;
string result;

result = (mark >= 50) ? "pass" : "Fail";   // variable result was placed at the end, when it turned out it as needed.
cout << result << endl;
//// Note: Instead "Pass" or "Fail" I can call a function or do anything else as needed (common sense).
//
// so all of the previous code was abbreviated to ONE LINE
//From now and on, ONLY use the Ternary Operator when it is possible and logical to do so + optimizd code.






// Here is a clear demonstration:


int main()
{
    int mark = 90;
    string result;

    if (mark >= 50)
    {
        result = "Pass";
    }
    else
    {
        result = "Fail";
    }

    cout << result << endl;


    // Or instead of all the above unoptimized code:
    result = (mark >= 50) ? "pass" : "Fail";  
    cout << result << endl;
    

    return 0;
}


// Also, I can have:

int main()
{
    int mark = 50;
    
    (mark >= 50) ? cout << "Pass" : cout << "Fail";

    return 0;
}




// Also, I can have:

int main()
{
    int mark = 50;

    (mark >= 50) ? EnrollInSemester() : RetakeCourse();

    return 0;
//}



// Also, I can have nested Ternarz Operation:

int main()
{
    int mark = 70;

    (mark >= 50) ? cout << "Pass \n" : (mark >= 40) ? cout << "Needs some work\n" : cout << "Needs much more efforts \n";

    return 0;
}
