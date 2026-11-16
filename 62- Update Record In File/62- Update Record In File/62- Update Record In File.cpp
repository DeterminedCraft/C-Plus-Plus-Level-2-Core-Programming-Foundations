
#include <iostream>
#include <fstream>
#include <vector>
#include <string> 
using namespace std;

// CRUCIAL: This documentation is based on the previous lesson titled, Delete Record From File.
// 
// UpdateRecordInFile():


/* Scenario

   I already have a file.txt file containing : [IMPORTANT - before running, make sure that file.txt is currently populated with this exact data]

   Ali
   Maher
   Fadi
   Shadi
   Lama
   Ali
   Mohammad


  and I want, IN THIS SAME FILE, to REPLACE Ali with Omar:

   Omar
   Maher
   Fadi
   Shadi
   Lama
   Omar
   Mohammad


*/

void LoadDataFromFileToVector(const string& FileName, vector<string>& vFileContent)
{
    fstream file;
    file.open(FileName, ios::in); // open file.txt in read-mode only.

    if (file.is_open())   // a STANDARD practice to ensure that the program has already opened the file before proceeding.
    {
        string line;

        while (getline(file, line))
        {
            vFileContent.push_back(line);
        }

        file.close();
    }
}


void SaveVectorToFile(const string FileName, const vector<string>& vFileContent)
{
    fstream file;
    file.open(FileName, ios::out);  // open file.txt in write mode.

    if (file.is_open())
    {
        for (const string& line : vFileContent)
        {
            file << line << endl;
        }

        file.close();
    }
}

void UpdateRecordInFile(const string& FileName, const string& CurrentRecord, const string &ToUpdateRecord)
{
    vector<string> vFileContent;
    LoadDataFromFileToVector(FileName, vFileContent);
    // the vector variable 'vFileContent' is now initialized with elements, each representing a line from the file.


    // 2- Now, making changes to the vector (updating the record "Ali" to "Omar"):
    for (string& line : vFileContent)
    {
        if (line == CurrentRecord)
        {
            line = ToUpdateRecord;
        }
        // the records "Ali" has now been changes to "Omar"
    }



    // 3- Now, saving the UPDATED vector to file
    SaveVectorToFile("file.txt", vFileContent);
}
        
         
       


void PrintFileContent(const string& FileName)
{
    fstream file;
    file.open(FileName, ios::in);
    

    if (file.is_open())
    {
        string line;

        while (getline(file, line))
        {
            cout << line << endl;
        }

        file.close();
    }
}


int main()
{

    cout << "File content BEFORE updating a record:\n\n";
    PrintFileContent("file.txt");


    UpdateRecordInFile("file.txt", "Ali", "Omar");


    cout << "File content AFTER updating a record:\n\n";
    PrintFileContent("file.txt");


    return 0;
}



















