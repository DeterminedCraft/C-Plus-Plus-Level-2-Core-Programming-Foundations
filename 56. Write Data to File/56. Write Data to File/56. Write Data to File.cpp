
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


void WriteDataToFile(const string& FileName)  // pass by const. ref.
{
    fstream file; // creating an object of the fstream class in order to have access to its methods. // the variable name could be anything !

    file.open(FileName, ios::out); // opening the file.txt in a write mode (It will open the file and IMMEDIATELY erase its content before writing to it).
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

    if (file.is_open()) // it's a standard practice to ALWAYS check that the file has already been opened by the program,
    {
        //  We LINE BY LINE write (also for read, as will be shown later):
        file << "This is my 1st line.\n"; // Notice: we are writing inside the file & NOT printing to the console. That's why, the variable 'file' is used and not the cout <<
        file << "This is my 2nd line.\n";
        file << "This is my 3rdline.\n";
        file << "This is my FINAL line.\n";
        // AS SOON AS you finish writing to the file, you have to close the file:-
        file.close();  // as soon as you finish writing to the file, close it.
        // A MUST  (because, an 'in use' message would be triggered if you or someone else tries to open the file while it's already open),
    }

}



int main()
{
    WriteDataToFile("file.txt"); // the argument is the file name.

    return 0;
}
// When you finish understanding this program, read the below notes:
// 
// so now, I have file.txt containing the above 4 lines.
// what if I need to append(add) an additional line(s) 
// to this already existing file with the already existing lines inside it ?
// 
// well, check the next lesson

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
  To access file.txt in the program's current working directory.:

  Click on View > Solution Explorer
  Right-click on the project ( on 56.Write Data to File) > Open Folder in File Explorer 

  Spot the file "file.txt" > Double-click on it.

  so that we'll see the text: 

   This is my 1st line.
   This is my 2nd line.
   This is my 3rdline.
   This is my FINAL line.


   Now - in this specific case, if I re-run the program 
   (or if I run the program for the 1st time where the file already has data before running)

   then, the file opens > data totally erased > data is written to the file.

   so the questions is, 
   how do I run the program in order to add additional data to the already existing data in the file before running ?

   We will see that in the next lesson.

*/