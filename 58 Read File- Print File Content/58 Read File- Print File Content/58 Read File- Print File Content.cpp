
#include <iostream>
#include <fstream> // HAS to be included
#include <string>  // needed so that getline() can be used.
using namespace std;

/* Pre-requisite: It is crucial to understand the following
   
 The following line:   fstream MyFile;
```

 means that an object named `MyFile` is created from the `fstream` class.
 The `MyFile` object has access to the public methods defined in the `fstream` class. 
 It ALSO has its own internal state/data. ***

 When methods are called on `MyFile`, the object can store data and/or have an internal state representation that can be modified.
 For example, `open()` changes the object's state to indicate that a file has been opened, while `close()` changes its state to indicate that the file has been closed.


 //Still Important; https://chatgpt.com/c/6ac5a39d-3b60-83e9-ac1a-5cf9e1430ef9

*/

/* We'll open a file in read-mode, 
   So that we print out its content to the console
  . We'll implement our own function to achieve that

*/




void ReadDataFromFile(const string& FileName)   // pass by cost. ref.
{
    fstream file;   

    file.open(FileName, ios::in); // open a file in read mode. The file is  MyFile.txt that's stored in the variable  'FileName'
    // **The MyFile object, NOW, has the internal state representation of MyFile.txt being open.
    // 
    // if File Name (= myFile.txt) already exists in this project's directory, then it will be opened in a read only mode.
    // if the file doesn't exist, the file will NOT be created and the program will continue without any errors warnings or exceptions.

    if (file.is_open())   // Ensuring that the program was able to open the file.
    {
        string line; // so that EACH line in MyFile.txt is saved & followed IMMEDIATELY by printing it out; before doing the same to the next line.

        while (getline(file, line))  //  while there is a first line (for the 1st while loop) ( = true), then save it in the variable 'line'.
        {                             // The myFile object here has the iternal state representation of MyFile.txt being open
            //** The internal state representation (for the object myFile) of the fact that MyFile.txt is open is STILL valid & PERSISTING 

            cout << line << endl;
            // then, the program jumps back to the while statement again to check if there is a second line in MyFile.txt...etc.
        }

        file.close();
        // **The MyFile object, NOW, has the internal state representation of MyFile.txt being closed.
    }
}



int main()
{
    
    ReadDataFromFile("file.txt");  // the argument is the ACTUAL FILE NAME (ONLY mentioned here).

    return 0;
}


