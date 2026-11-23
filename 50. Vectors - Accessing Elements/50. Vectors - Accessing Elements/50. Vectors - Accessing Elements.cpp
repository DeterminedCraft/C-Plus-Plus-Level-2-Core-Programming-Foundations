

#include <iostream>
#include <vector>    // HAS to be included.
using namespace std;


int main() {

	vector<int> num{ 1, 2, 3, 4, 5 };


	cout << "\n\n using .at(i) \n";
	cout << "Element at Index 0: " << num.at(0) << endl;   // indexes ALWAYS start from 0
	cout << "Element at Index 2: " << num.at(2) << endl;
	cout << "Element at Index 4: " << num.at(4) << endl;
	cout << "Element at Index 4: " << num.at(5) << endl;   // will cause an out of bound exception, as you'retrying to access the unexisting 6th element. 
															// gives an error message in the launched the tab for the vectors code.
	                
	cout << "\n\n using [i]\n";      // Applies to all containers
	cout << "Element at Index 0: " << num[0] << endl;
	cout << "Element at Index 2: " << num[2] << endl; 
	//cout << "Element at Index 4: " << num[5] << endl;  // will cause an out of bound exception, as you'retrying to access the unexisting 6th element. 
	                                                  // Gives a warning pop up, & if you click on "Abort", the program will be aborted.
	                                                  // there might be some differences on how certain compilers handle the out of bound errors.
	// nevertheless, there will ALWAYS be an out of bound issue that needs to be fixed.
	cout << "****** Hi """"""" << endl;
	return 0;



}