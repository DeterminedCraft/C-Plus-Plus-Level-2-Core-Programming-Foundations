
#include <iostream>
#include <fstream> // dealing with files.
#include <vector>   // without it, you can't use vectors.
#include <string> // to use the getline() 
using namespace std;

// Notice that you can either write data to a totally empty file 
// or append data to some already exisiting data
// But you can NEVER directly use the write mode ALONE to edit or delete CERTAIN data in the file.

// For this, one needs to:
// 
// FIRST, Load the data from the file to a vector = (Open the file in read mode + line by line push_back() to a vector).
// 
// then (demonstrated in the next lesson):
// make changes to the vector (whether by editing or deleting)
//
// once done, iterate through EACH element of the vector,
// writing it as A line in the file
// that is opened with the write mode.


void LoadDataFromFileToVector(const string& FileName, vector<string>& vFileContent)
{
    fstream file;
    file.open(FileName, ios::in); // Read Mode Only.

    if (file.is_open())
    {
        string line;   // mandatory lines for reading NO MATTER WHAT (add it to the very first notes)

        while(getline(file, line))         // mandatory lines for reading NO MATTER WHAT (add it to the very first notes)
        {
            vFileContent.push_back(line);
        }

    }
}


void PrintElementsInVector(const vector<string>& vFileContent)   // pass by const. ref.
{
    for (const string& line : vFileContent) // again - notice the vector's name is vFileContent 
    {                                       // & each element is stored in a variable called 'line' before printing it out.
        cout << line << endl;
    }
}

int main()
{
    vector<string> vFileContent; // one HAS to REALIZE that we'll be loading lines, line by line, from the file and into the vector.

    LoadDataFromFileToVector("file.txt", vFileContent);
    // the vector variable 'vFileContent' is now fully initialized with elements.


    PrintElementsInVector(vFileContent);


    return 0;
}


// Now, let's demonstrate how to Save Vector to File 
// ( = to write each element of the vector, as a line back to the file).
// 
// let's see that in the next lesson,
// 
// and eventually we 'll write one complete program to edit/delete 
// an already existing specific line(s) in the file.
//