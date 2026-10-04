
#include <iostream>
#include <fstream>  // HAS to be included in order to access all file-related functions.  fstream = file stream.
using namespace std;


/* How to write and save data to a file !

   well, the first step is opening the file.
   you either open the file with WRITING or READING mode.
   and ONCE THE FILE IS OPENED, then we can write to it.
   
  Note: There is more than one way to write data ( & subsequently save it off course) to a file in C++.
        But here, we'll demonstrate only one way, as the goal is building a strong foundation and 
        
        then proceeding further into reading the saved data, editing it, and totally clearing it.
*/


int main()
{

    fstream MyFile; // the variable name could be anything !

    MyFile.open("MyFile.txt", ios::out); // open file in write mode.     // ios::out means write mode.
    // You MUST open in either write OR read mode.
    // CRUCIAL: in the case of the Write Mode; if the file already exists before running, then it will be open > its content will be TOTALLY CLEARED before writing to it.
   
   // EITHER include the full path of the file, for example:
   // C:\\Folder\\MyFile.txt
   // (assuming the program has permission to access that location).
   //
   // OR provide only the file name:
   // "MyFile.txt"
   //
   // In this case, the file will be created/opened in the program's
   // current working directory.
   //
   // In either case, if MyFile.txt does not already exist,
   // it will be created during the execution of the program.
    
    if (MyFile.is_open())  // to ensure that the file is open. As once it's open, then data can be written to it.
    {
        MyFile << "this is my first line\n";   // Notice: we are writing inside the file & NOT printing to the console. That's why, the variable 'MyFile' is used and not the cout <<
        MyFile << "this is my second line\n";
        MyFile << "this is my third line\n";
        // AS SOON AS you finish writing to the file, you have to close the file:
        MyFile.close();  // A MUST  (because, an 'in use' message would be triggered if you or someone else tries to open the file),
    }


    return 0;
}



/*
  To access MyFile.txt in the program's current working directory.:

  Click on View > Solution Explorer
  Right-click on the project ( on 56.Write Data to File) > Open Folder in File Explorer 

  Spot the file "MyFile.txt" > Double-click on it.

  so that we'll see the text: 

   this is my first line
   this is my second line
   this is my third line



   Now - in this specific case, if I re-run the program 
   (or if I run the program for the 1st time where the file already has data before running)

   then, the file opens > data totally erased > data is written to the file.

   so the questions is, 
   how do I run the program in order to add additional data to the already existing data in the file before running ?

   We will see that in the next lesson.

*/