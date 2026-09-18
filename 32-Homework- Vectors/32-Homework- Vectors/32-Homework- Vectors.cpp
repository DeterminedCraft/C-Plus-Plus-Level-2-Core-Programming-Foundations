
#include <iostream>
#include <vector>
using namespace std;

/*

 Write a Program to ask user to enter as many numbers as s/he wants,
 each time a number entered add it to your vector,
 and ask the user if s/he wants to add more numbers until s/he says No,
 then print all vector elements on the screen.


*/


enum enUserResponse { Yes = 'Y', yes = 'y', No = 'N', no = 'n' };

double ReadDoubleNumber(const string& message)
{
    double number; // what's returned.

    cout << message;
    cin >> number;
    cout << endl;
    return number;
}




bool ValidatePositiveDouble(const double& number)  // pass by const ref. since 'number' is ONLY going to be used for comparison against the range.
{
    return (number > 0);
}




double ReadPositiveDouble(const string &message)
{
    double number;  // what's returned.

    number = ReadDoubleNumber(message); // 'number'is to be IMEMDIATELY validated against the range, in the while condition.
    
    while (!ValidatePositiveDouble(number))
    {
        cout << "Error- Only positive numbers allowed. ";
        number = ReadDoubleNumber(message);
    }

    return number;

    // the above block is to be sequentially composed line by line & at the end, implements all the functions.
}


char ReadCharacter(const string& message)
{
    char character;   // what's returned

    cout << message;
    cin >> character;
    cout << endl;

    return character;
}


bool ValidateCharacter(const char &character)   // pas by const. ref. since 'character' is ONLY used against the range, in the while condition.
{
    return (character == 'Y' || character == 'y' || character == 'N' || character == 'n');
}


char ReadResponse(const string& message)
{
    char character;  // what's returned

    character = ReadCharacter(message);   // 'character' is to be IMMEDIATELY validated against the range, in the while condition.

    while (!ValidateCharacter(character))
    {
        cout << "Invalid character. Try again. \n";
        character = ReadCharacter(message);
    }

    return character;
    // the above block is to be sequentially composed line by line & at the end, implements all the functions.
}


bool IsAddMore(const char& ResponseCharacter)  // pas by const. ref. since 'ResponseCharacter' is ONLY used against the range, in the while condition.
{
    switch (ResponseCharacter)
    {
    case  enUserResponse::Yes:
        return true;

    case  enUserResponse::yes:
        return true;

    case  enUserResponse::No:
        return false;

    case  enUserResponse::no:
        return false;

    default:
        return false;
        // to prevent the compiler from 'complaining' EVEN THOUGH  ResponseCharacter can NOT store some unexpected character as ReadResponse()
        // prevents it as user input in IMMEDIATELY validated against the range, in the while condition.
    }

}


void StartProgram(vector <double> &vNumbers)
{   
    bool AddMore;
    char ResponseCharacter;
   
    do
    {
        double number = ReadPositiveDouble("Add a number: ");   // Range NOT included as the value is NOT intrinsic.
/*              |--> to be added at the very end, after finishing typing the "return" keyword in the imlementing function.*/

        vNumbers.push_back(number);
        
        ResponseCharacter =ReadResponse("Would you like to add another number  Yes(Y) / No(N) ?: "); // Ranges NOT included as their values are NOT intrinsic.

        AddMore = IsAddMore(ResponseCharacter);

    } while (AddMore);

}



void PrintVectorElements(const vector <double>& vNumbers)   // use ranged for-loop for Colection Classes.
{
    cout << "\nThe vector variables contains the elements: \n";
    for (const double & number:  vNumbers)  // 'number' is of type double because the vectro is so as well.  // pass by reference as copying is slow and it consumes memory.
    {                                       
        cout << number << " ";
    }

    cout << endl;
}



int main()
{
    vector <double> vNumbers;  // added later

    StartProgram(vNumbers); // CRUCIAL: Vectors are NOT like arrays 
    //(here the Vector variable passed as an argument in the calling function is NOT sent along with its address 
    // in memory. 

    //The vvector variable 'vNumbers' is ow initialized 

    PrintVectorElements(vNumbers);
    
   
    return 0;
}


