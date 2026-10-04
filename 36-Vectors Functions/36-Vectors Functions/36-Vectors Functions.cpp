
#include <iostream>
using namespace std;
#include <vector>   //mandatory


// Let's examine some Vectors functions present in the Vector Library.



int main()
{
	vector <int> vNumbers;

	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);
	


	cout << "First Element: " << vNumbers.front() << endl;    // 10  first element in the vector.
	cout << "Last Element: " << vNumbers.back() << endl;     // 50   last element in the vector.

	//returns the number of elements present in the vector
	cout << "Size: " << vNumbers.size() << endl;            // 5

	//check the overall size of a vector
	cout << "Capacity : " << vNumbers.capacity() << endl;    //6

	//returns 1 (true) if the vector is empty
	cout << "Empty : " << vNumbers.empty() << endl;      //0 
	return 0;
}



/////////////////////////////////////////////////////////////////////////////////////////
// Now examine this program:

int main()
{
	vector <int> vNumbers;

	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);

	vNumbers.clear();           // this line will cause an Error / Exception thrown.
	// because this line cleard the vectors from all elements 
	// and now you are asking it, what is the first element and the last element.

	// this is why you have to check whether the Vector contains elements or not 
	// before using   vNumbers.front()    &  vNumbers.back() functions

	cout << "First Element: " << vNumbers.front() << endl;    
	cout << "Last Element: " << vNumbers.back() << endl;     

	//returns the number of elements present in the vector
	cout << "Size: " << vNumbers.size() << endl;            

	//check the overall size of a vector
	cout << "Capacity : " << vNumbers.capacity() << endl;    

	//returns 1 (true) if the vector is empty
	cout << "Empty : " << vNumbers.empty() << endl;      
	return 0;
}





//// so here is the correction:
//////////////////////////////////////////////////////////////////////////////

int main()
{
	vector <int> vNumbers;

	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);

	vNumbers.clear();         
	

	if (!vNumbers.empty())
	{
		cout << "First Element: " << vNumbers.front() << endl;
		cout << "Last Element: " << vNumbers.back() << endl;
	}
	
	// or

	if (vNumbers.size() > 1)
	{
		cout << "First Element: " << vNumbers.front() << endl;
		cout << "Last Element: " << vNumbers.back() << endl;
	}


	//returns the number of elements present in the vector
	cout << "Size: " << vNumbers.size() << endl;

	//check the overall size of a vector
	cout << "Capacity : " << vNumbers.capacity() << endl;

	//returns 1 (true) if the vector is empty
	cout << "Empty : " << vNumbers.empty() << endl;
	return 0;
}