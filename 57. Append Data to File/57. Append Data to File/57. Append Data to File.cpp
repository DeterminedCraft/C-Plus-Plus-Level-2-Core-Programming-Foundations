
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

int main() {

	fstream MyFile;

	MyFile.open("MyFile.txt", ios::out);//Write Mode

	if (MyFile.is_open())
	{
		MyFile << "Hi, this is the first line\n";
		MyFile << "Hi, this is the second line\n";
		MyFile << "Hi, this is the third line\n";
		MyFile.close();
	}

	return 0;
}




 // and this is the modified code that opens the file & writes data to it by appending it to the old already existing data:
int main() {

	fstream MyFile;

	MyFile.open("MyFile.txt", ios::out | ios::app );   // Write mode + Append mode
	// If MyFile.txt does not exist, it will be created.
	// If it already exists, its original content will NOT be erased;
	// new data will be appended to the end of the file.

	if (MyFile.is_open())
	{
		MyFile << "Hi, this is a new line\n";
		MyFile << "Hi, this is another new line\n";
		
		MyFile.close();
	}

	return 0;
}



// another version for appending:
// note: the above version (with the 'or' statement) is the preferred one.
int main() {

	fstream MyFile;

	MyFile.open("MyFile.txt", ios::app); // append mode 
	// If MyFile.txt already exists, new data is added to the end
	// without erasing the existing content.
	// If MyFile.txt does not exist, it will be created.
	// In other words, there is no difference between this & "MyFile.txt", ios::out | ios::app 

	if (MyFile.is_open())
	{
		MyFile << "Hi, this is a new line\n";
		MyFile << "Hi, this is another new line\n";

		MyFile.close();
	}

	return 0;
}