
#include <iostream>
using namespace std;



/*
 Write programs to do the following:

 • Using Recursion:

     • Program to print numbers from M down to N.
     • Program to calculate power N^M.
*/


int ReadPositiveNumber(const string& message)
{
    int number; // what's returned.

    cout << message;
    cin >> number;
    
    cout << endl;

    return number;
}


bool ValidatePositiveInteger(const int& number)    // 'number' is passed by const. ref. since it's ONLY compared against the ranges.
{
    return (number > 0);
}



int ReadPositiveInteger(string message)
{
    int number;   // what's returned.

    number = ReadPositiveNumber(message); // 'number' is to be IMMEDIATELY validated against the range, in the while condition

    while (!ValidatePositiveInteger(number))
    {
        cout << "Error- Only positive number allowed.";
        number = ReadPositiveNumber(message);
    }

    return number;
    // the above block of code is to be sequentially composed line by line & at the end implement all the functions.
}


bool ValidateSmallerPositiveInteger(const int &SomeNumber, int Num1)  // passed by const. ref. since its ONLY used for validation against the range  // ranges ALWAYS passed by value
{
    return (SomeNumber < Num1);
}


int ReadSmallerPositiveInteger(const string& message, int Num1) // Ranges ALWAYS passed by value.
{
    int SomeNumber;  // what's returned.

    SomeNumber = ReadPositiveNumber(message);  // 'number' is to be IMMEDIATELY validated against the range, in the while condition

    while (!ValidateSmallerPositiveInteger(SomeNumber, Num1))
    {
        cout << "Error- Number must be smaller than the previous one entered.\n";
        SomeNumber = ReadPositiveNumber(message);
    }

    return SomeNumber;
    // the above block of code is to be sequentially composed line by line & at the end implement all the functions.
}


void PrintNumbersFromNum1ToNum2(int Num1, const int& Num2)
{
    if (Num1 >= Num2)
    {
        cout << Num1 << endl;
        PrintNumbersFromNum1ToNum2(Num1-1, Num2);
    }
   // PrintNumbersFromNum1ToNum2(Num1-1, Num2);  //The pitfall of calling the recursive function outside the if statement 
    // this causes infinite loop which in turn renders a Stack overflow exception.
}


int main()
{
    int Num1 = ReadPositiveInteger("Enter first number: ");  // Range NOT included as its value is not intrinsic.
/*       |
         |--->  to be typed at the very end, after typing the "return" keyword in the implementing function  */

    int Num2 = ReadSmallerPositiveInteger("Enter the second number: ", Num1); // here, the argument 'number' is used for range
/*       |
         |--->  to be typed at the very end, after typing the "return" keyword in the implementing function  */

    PrintNumbersFromNum1ToNum2(Num1, Num2);

    return 0;
}


