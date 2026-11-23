
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

// The use of DeleteRecordFromFile() procedure.
/*
  As mentioned, the fstream library does NOT allow you to delete or edit a line(s).
  It's only capable of : write mode, append-write mode, & read mode.

  Therefore, to edit or delete a line(s) in file, I need to load the content of
  the file to some medium data structure [LoadDataFromFileToVector]that we've chosen to be a vector.

  and then inside the vector, if I want to delete a record (a line that came from the file),
  then we iterate through each element in order to find the record and override its value with an empty string " "

  and then, [SaveVectorToFile] by iterating through EACH element of the vector & writing it to the file
  ,ignoring the empty string so that no empty line is written to the file.
 

  This idea will be embodied in the procedure: DeleteRecordFromFile()  <----- Directly.



*/

/* Scenario

   I already have a file.txt file containing : [IMPORTANT - before running, make sure that file.txt is currently populated with this exact data]

   Ali
   Maher 
   Fadi
   Shadi
   Lama
   Ali
   Mohammad

  
  and I want THIS SAME file to only contain:

   Maher
   Fadi
   Shadi
   Lama
   Mohammad


*/

void PrintFileContent(const string& FileName)
{
    fstream file;
    file.open(FileName, ios::in); // open the file.txt in read-mode ONLY.

    if (file.is_open()) // a STANDARD practice, before proceeding, to ensure that the program already opended the file.
    {
        string line; // to save EACH line in the file, in variable 'line' and THEN proceeding for printing it to the console/ UI OR pushing it in a vector.

        while (getline(file, line))
        {
            cout << line << endl;
        }

        file.close();
    }
}



void LoadDataFromFileToVector(string FileName, vector<string>& vFileContent)
{
    fstream file;
    file.open(FileName, ios::in);  // open file.txt in Read-Mode ONLY.

    if (file.is_open())  // a STANDARD practice, before proceeding, to ensure that the program has already opened the file.
    {
        string line; // to save EACH line in the file in variable "line" and then process it (either display it in console/UI OR push it into the vector).

        while (getline(file, line))
        {
            vFileContent.push_back(line);
        }

        file.close(); // ALWAYS do so as we finished reading from the file.
    }
}


void SaveVectorToFile(const string& FileName, const vector<string> &vFileContent)
{

    fstream file;
    file.open(FileName, ios::out);  // open the file.txt in write-mode.

    if (file.is_open())
    {
        for (const string &line : vFileContent)
        {
            if (line != " ") // not interested in writing empty lines to the file (yes, a vector can include a " " element)
            {
                file << line << endl;
            }
            
        }

        file.close(); // IMMEDIATELY close the file after you're done with it (in this case: finishing writing to it).
    }
}



void DeleteRecordFromFile(const string& FileName, string record)
{
    // 1- Load the data from the file and to the vector:

    vector<string> vFileContent;
    LoadDataFromFileToVector(FileName, vFileContent);
        // the vector 'vFileContent' is now initialized with elements, each element is a line from the file.



    // 2- now make changes to the vector (in this specific case, it's deleting the record "Ali" from the vector):

    for (string& line : vFileContent)
    {
        if (line == record)
        {
            line = " ";  // the record to delete, is now replaced with an empty space " "
        }
    }


    // 3- now save the UPDATED vector to the file.
    SaveVectorToFile(FileName, vFileContent);
}



int main()
{
    // First (optional) let me display the content of this file, in the console
    cout << "Printing the file's content: \n\n";
    PrintFileContent("file.txt");


    // Delete record from the file (directly)
    DeleteRecordFromFile("file.txt", "Ali");
    

    // Displaying the content of this file, in the console
    cout << "\nPrinting the file's content after a record deletion: \n\n";
    PrintFileContent("file.txt");



    return 0;
}















