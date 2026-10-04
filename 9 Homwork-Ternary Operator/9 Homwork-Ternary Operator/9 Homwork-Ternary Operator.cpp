
#include <iostream>
using namespace std;

/* Write two programs to do the following:

 Using Ternary Operator:

 - A program to check whether the number is Positive or Negative.

 - Another program to check whether the number is 0, Positive, or negative 
   (use nested ternary operators)



*/

// Note: Multiple main() statements exist for pedadogigal purposes.
//       Simply, comment out them all except for the one you wish to execute.

int ReadIntegerNumber(const string& message)
{
    int number;  // whats returned

    cout << message;
    cin >> number;
    cout << endl;

    return number;

    
}

int main()
{
    int number = ReadIntegerNumber("Enter a number: "); // ranges are ignored on purpose to accomodate the question.

    (number > 0) ?   cout << "positive\n"  :  cout << "negative\n";


    return 0;
}



int main()
{
    int number = ReadIntegerNumber("Enter a number: "); // ranges are ignored on purpose to accomodate the question.

    (number == 0) ? cout << "Zero.\n" : ((number > 0) ? cout << "Positive.\n" : cout << "Negative.\n");


    return 0;
}



// or if you want to save to variable, and thereafter print out the result:

int main()
{
    int number = ReadIntegerNumber("Enter a number: "); // ranges are ignored on purpose to accomodate the question.

    string result =(number == 0) ? "Zero" : ((number > 0) ?  "Positive" : "Negative");

    cout << result << endl;

    return 0;
}