
#include <iostream>
#include <fstream>
#include <vector>
#include <string>  // for getline()
using namespace std;


// Saving Vector to File.


void SaveVectorToFile(const string& FileName, const vector <string>& vFileContent)
{
    // the first step EVER is to open the file
    fstream file;
    file.open(FileName, ios::out); // open in write mode.

    if (file.is_open())   // a STANDARD  procedure to ensure that the program has alreay opened the file, before proceeding.
    {
        for (const string& line : vFileContent)
        {
            if (line != " ")   // not interested in writing empty values to the file (yes, a vector can include a " " element)
            {
                file << line << endl;
            }
        }

        file.close(); // close AS SOON AS you are done writing to the file (or reading even).
    }
}


void ReadDataFromFile(const string& FileName)
{
    fstream file;

    file.open(FileName, ios::in);  // Read-Mode only.

    if (file.is_open())  // a STADNARD practice to enure that the file has already been opened by the prgram before proceeding.
    {
        string line;  // as EACH line in the file will be stored in 'line' and then processing it ( = in this case, printing it out).

        while (getline(file, line))
        {
            cout << line << endl;
        }

        file.close(); // AS SOON AS you finish reading (or writing) data, close the file.
    }
}


int main()
{
    vector <string> vFileContent = { "Ahmad", "Ali", "Lama", "Fadi" };

    SaveVectorToFile("file.txt", vFileContent);


    // Now, I'm interested in printing out the file's content onto the console.
    cout << "\nPrinting out the file's content: \n\n";
    ReadDataFromFile("file.txt");

    return 0;
}



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Below is a program using the lengthy way:
/*
  Let's start with writing to a file.
  then, loading data from file to a vector.
  then, saving vector to file.


*/

void WriteDataToFile(const string& FileName) // pass by constant reference.
{
    fstream file;

    file.open(FileName, ios::out); // open the file file.txt in write mode. 
    // in the case that this file already exists and is populated with data, then this line would erase its content immediately after opening it.

    if (file.is_open())   // A STANDARD approach to ensure that the file has been opened by the program.
    {
        file << "This is my 1st line.\n"; // Notice: we are writing inside the file & NOT printing to the console. That's why, the variable 'file' is used and not the cout <<
        file << "This is my 2nd line.\n";
        file << "This is my 3rdline.\n";
        file << "This is my FINAL line.\n";

        file.close(); // close the file AS SOON AS you're done writing or reading to it.
    }
}




void LoadDataFromFileToVector(const string& FileName, vector<string>& vFileContent)
{
    fstream file; // first step ever is opening the file
    file.open(FileName, ios::in); // opening the file file.txt in read-mode ONLY.

    if (file.is_open())   // a STANDARD practice is to ensuring that the file has been opended by the program.
    {
        string line; // each line in the file will be stored in 'line' variable &, this time, push_back()'ed into the vector.
                       // instead of merely printing it out.
        while (getline(file, line))
        {
            vFileContent.push_back(line);
        }
        
        file.close();  // closing the file as reading its content is now complete.
    }

}




void PrintVectorsElements(const vector<string>& vFileContent) // pass byu constant reference.
{
    for (const string& line : vFileContent)  // *'line' is named so, as each element of the vector is the pushed back line from the file.
    {
        cout << line << endl;
    }
}




void SaveVectorToFile(const string& FileName, const vector<string>& vFileContent)
{
    // the first step ever is to open the file:
    fstream file;
    
    file.open(FileName, ios::out | ios::app); //opening the file "file.txt" in WRITE-APPEND 
    //(Just to observe that data is indeed saved from vector to file).

    if (file.is_open())  // a STANDARD practice, to ensure that the file is already opended by the program before proceeding.
    {
        for (const string& line : vFileContent)
        {
            file << line << endl;
        }

        file.close(); // close it as you're done with append-writing data to it.
    }
}




void ReadDataFromFile(const string& FileName)
{
    fstream file;

    file.open(FileName, ios::in);  // open the file "file.txt" in read-mode ONLY.

    if (file.is_open())   // A standard practice to ALWAYS ensure that the file is already open by the program before proceeding.
    {
        string line;  // 'line' is to store EACH line in the file and THEN processing it (processing in this case is merely to print it out).

        while (getline(file, line))
        {
            cout << line << endl;
        }

        file.close(); // ALWAYS close the file after finishing reading or writing from/to it.
    }
}




int main()
{
    
    WriteDataToFile("file.txt");
    // data is written to the file and is now saved.

    // Now, let's [ Load Data from File to Vector]:
    vector<string> vFileContent;
    LoadDataFromFileToVector("file.txt", vFileContent);

    // The vector variable 'vFileContent' is now fully initializd with elements ( each element is a whole line in the file).



    // Out of curiosity: To print out the elements in the vector:
    cout << "\nThe elements in the Vector are: \n\n";
    PrintVectorsElements(vFileContent);



    // ***Now, let me Save The Vector to The File:  
        // doing it in either: Write mode (File is opened > it's content is immediately erased > saving the elements of the vector to the file).
        //                 OR: Append Write Mode (open the file > DON'T erase its content but instead, append the elements of the vector to file):

    SaveVectorToFile("file.txt", vFileContent);



    // Now, let me print out the file content
    cout << "\nThe file content is: \n\n";
    ReadDataFromFile("file.txt");
    return 0;
}


// so this has been an essential practice on how to Save Vector to File 
// but without modifying the vector first  (Editing an element(s) or adding/deleting an elements(s)),
