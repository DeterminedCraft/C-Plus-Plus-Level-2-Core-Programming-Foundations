
#include <iostream>
using namespace std;

/*
   So far, we've been range-validating numerical inputs.

   today, we'll learn how to validate that a number has been entered and not, for example, a string.

*/


/*

 The overall idea is that the main job of `cin` is to **extract the value entered by the user from the input buffer and store it in the variable**.

 For example:
 
 int Number;
 cin >> Number;
 

 Here, `cin` tries to extract the user's input from the input buffer, and store it into the variable `Number`.

 If the user is supposed to enter an integer but instead enters something that **cannot be interpreted as an integer**, such as:

 ```text
 hello
 ```

 then:

 cin.fail() == true


 This means that `cin` could not successfully extract the value from the buffer, therefore entering a **fail state**.

 And, on top of that, the invalid input is still sitting in the **input buffer**.



 To fix the situation, we need two things:

 ### 1.  `cin.clear()`

 This **resets the stream's error/fail state**.

 It does **NOT** remove the invalid characters from the input buffer.

 It simply makes `cin` capable of performing another input operation.



 ### 2. `cin.ignore(...)`

 We then need to remove the invalid input that is still sitting in the buffer:


 For example:  cin.ignore(1000, '\n');


 This means:

 > Ignore up to 1000 characters, or stop as soon as a newline (`'\n'`) is encountered — whichever comes first.

 The `1000` is therefore the **maximum number of characters to ignore**. 
 It is not necessarily the number of characters actually present in the buffer (so if there are 2000, then only 1000 will be ignored. so, do not use).

 The \n represents the **newline character**, which is inserted into the input buffer when the user presses **Enter**.

 For example, if the user enters: hello123

 and presses Enter, the buffer conceptually contains:   h e l l o 1 2 3 \n


 Then:  cin.ignore(1000, '\n');
 
 removes the characters until it reaches `'\n'`:



 ### Important note about `cin.ignore()`    iT ignores **one character**.

 a more robust version is:   cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');   / What should be used.
 

 This essentially says:

 > Ignore as many characters as necessary until a newline is encountered.

 This is generally preferable because you don't have to guess how long the invalid input might be.

 ---

 ### Typical validation sequence
 

 // Assume that the user is supposed to enter a numerical value, but instead enters a character or a string:
 while (cin.fail())
 {
    // User didn't input a number

    cin.clear();

    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    cout << "Invalid Number, Enter a valid one:" << endl;

    cin >> Number;
 }


 The sequence is therefore:

 ```text
 cin.fail()
     ↓
 Detects that the input operation failed
     ↓
 cin.clear()
     ↓
 Resets cin's fail state
     ↓
 cin.ignore(...)
     ↓
 Removes the invalid input from the buffer
     ↓
 cin >> Number
     ↓
 Attempts to read the new input
```

 ### The key distinction

 **`cin.clear()` fixes the state of `cin`.**

 **`cin.ignore()` removes the problematic input from the buffer.**

 You generally need **both** when recovering from invalid input.

 

*/

#include <iostream>
using namespace std;


int ReadIntegerNumber(const string& message)
{
    int number;  // what's returned

    cout << message;
    cin >> number;

    while (cin.fail())  // you validate whether a numerical value is entered, and then you perform range validation for the number //data type validation comes before range validation (common sense)
    {
        cin.clear(); // clears the failed state
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // then clears the buffer off the invalid input.
        cout << "Error- Only numerical values are allowed. Enter number:\n";
        cin >> number;
    }

    cout << endl;
    return number;
}


bool ValidateIntegerInRange(const int& number, int min, int max) // 'number' passd by const ref since its ONLY used for comparison against the ranges // Ranges ALWAYS pased by value
{
    return (min <= number && number <= max);
}



int ReadIntegerInRange(const string& message, int min, int max)   // ranges ALWAYS passed by value
{
    int number;  // what's returned
    
    number = ReadIntegerNumber(message);   // 'number' is to be IMMEDIATELY validated against the range, in the while condition

    while (!ValidateIntegerInRange(number, min, max))
    {
        cout << "Number entered must be between " << min << " & " << max << ". Try again.\n";
        number = ReadIntegerNumber(message);
    }

    return number;

    // the above block of code is to be sequentially composed line by line
    // and at the end, implement all the functions.
}



int main()
{
    int min = -1000000;
    int max = 1000000;

    int number = ReadIntegerInRange("Enter a number: ", min, max);
/*       |
         |----> // written at the very end, after finishing typing the "return" keyword in the implementing function.*/

    cout << "The entered number is " << number << endl;

    return 0;
}





//////// Instructor's primitive code (for a quick show):

int ReadNumber()
{
	int Number;
	cout << "Please enter a number?" << endl;
	cin >> Number;

	while (cin.fail())   // if failure is true (as a resulting of inputting anything other than a number) // so trap it here until a number is entered.
	{
		// user didn't input a number
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // comment out this line and see what happens ( = an endless loop of the cout message below
		cout << "Invalid Number, Enter a valid one: " << endl;
		cin >> Number;
	}
	return Number;
}


int main()
{
	cout << "Your Number is:" << ReadNumber() << endl;
	return 0;
}