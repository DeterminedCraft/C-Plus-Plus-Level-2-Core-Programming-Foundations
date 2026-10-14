
#include <iostream>
#include <fstream> // HAS to be included for working with files.
using namespace std;


/*
  In the previous lesson, we've demonstrated that the

  Write Mode =  ios::out

  Opens the file > Totally erases its content 

  But with the Append Mode = ios::app 

  I can
  Open the file > Keep its content intact > Append data after.


*/


// This is the old code that opens the file & erases all it's content before writing data to it:

void WriteDataToFile(const string& FileName)  
{
	fstream file; 

	file.open(FileName, ios::out); 
	
	if (file.is_open()) 
	{
		file << "This is my 1st line.\n"; 
		file << "This is my 2nd line.\n";
		file << "This is my 3rdline.\n";
		file << "This is my FINAL line.\n";
		
		file.close();  
	}
}


int main()
{
	WriteDataToFile("file.txt"); 

	return 0;
}





 // and this is the modified code that opens the file & writes data to it by appending it to the old already existing data:

void WriteDataToFile(const string& FileName)
{
	fstream file;

	file.open(FileName, ios::out | ios::app);  // Write mode + Append mode
	// If file.txt does not exist, it will be created.
	// If it already exists, its original content will NOT be erased;
	// new data will be appended to the end of the file.

	if (file.is_open())  
	{
		file << "Appending this 1st line.\n";
		file << "Appending this 2nd and FINAL line.\n";

		file.close(); 
	}
}


int main()
{
	WriteDataToFile("file.txt");

	return 0;
}







// another version for appending :
// note: the above version (with the 'or' statement) is the preferred one.

void WriteDataToFile(const string& FileName)
{
	fstream file;

	file.open("MyFile.txt", ios::app); // append mode 
	// If file.txt already exists, new data is added to the end
	// without erasing the existing content.
	// If file.txt does not exist, it will be created.
	// In other words, there is no difference between this & "MyFile.txt", ios::out | ios::app 

	if (file.is_open())
	{
		file << "Appending this 1st line.\n";
		file << "Appending this 2nd and FINAL line.\n";

		file.close();
	}
}


int main()
{
	WriteDataToFile("file.txt");

	return 0;
}


// Now, what if I want to read this file ( = line by line) to the console ?
//
// well, navigate to the next lesson.
