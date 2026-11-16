
#include <iostream>
using namespace std;

/*  Pointers & Arrays

   So far, we've established that it's NOT possible to determine the length of an array (that's a fixed-length structure data type)
   during run-time. Furthermore, the length (number of elements) has to be initialized in a constant variable before compiling.
   for example:

   int main()
   {
    const int numberOfElements = 100;

    int array[numberOfElements];   

    // this will work but often results in wasting memory (in the past we used to reserve a space for 100 elements, but then only fill it with 10 elements, for example).
   }



   However, for the following spaghetti (to explain the idea quickly) code :


    int main()
   {
   
    int NumberOfElements = 0;
    cout << "Enter the number of elements to store: \n";
    cin >> NumberOfElements;
    
    int array[NumberOfElements];  // The argument is highlighted in red (warning): expression must have a constant value ( = must be declared as a const int) 

    // PLUS This renders an exception because the value can NOT be determined during runtime.
    
   }

   To overcome this issue, using a collection class (such as A Vector).

   In the case of insisting on using an array (fixed-length data structure), then keep on reading:-



   // So the questions is- How to dynamically render the length (number of elements) of an array ?

   // Answer- this is only possible with Dynamic Memory Allocation; meaning that the length will be initialized during run-time and then it's memory released/freed
              as soon as the length is no longer needed and before the whole program finishes executing.
   
   whose steps are:
     1- Declare a pointer variable.
     2- Create an unnamed dynamic memory allocation object (done via the [new] keyword)
     3- and assign it as a value ( = assign it on the right-hand side) to the pointer variable.
            so that now: The pointer variable stores the address of the object RESULTING in the pointer pointing to the object (so that it's able to access it's value).

     4- Now, the length (number of elements) of the array can be dynamically initialized ( = initialized DURING RUN TIME)
     5- *p means that the pointer variable will be pointed to the first element of the array to access its value
       .(YOU WILL ALWAYS have a use for *p as it is the WHOLE POINT of pointers- whether to print a value cout << *p   or assigne a value *p = value).
     6-  [delete] keyword is to be used, since the new keword was used.



*/

/*   Write a program that does the following, ONLY using an array (fixed-length data structure):
     

     Enter the number of elements: 3

     Enter Mark 1 : 100
     Enter Mark 2 : 98
     Enter Mark 3 : 92


    Displaying the entered marks:
    100
    98
    92




*/


int ReadPositiveNumber(const string& message) // pass by const ref.
{
   int number;  // what's returned

    cout << message;
    cin >> number;
    cout << endl;

    return number;
}



bool ValidateNumberOfElements(const int& NumberOfElements) // pass by const ref. since 'NumberOfElements' is ONLY used for comparison against the range.
{
    return (NumberOfElements > 0);
}



int ReadNumberOfElements(const string& message) // pass by const ref.
{  
    int NumberOfElements;  // what's returned.

    int count = 0;

    do
    {
        count++;
        if (count > 1)
        {
            cout << "Error- Only positive numbers allowed. Try again !\n";
        }

        NumberOfElements = ReadPositiveNumber(message); // 'NumberOfElements' is to be IMEMDIATELY validated against the range, in the while condition.

    } while (!ValidateNumberOfElements(NumberOfElements));

    return NumberOfElements;

    // this block of code is to be sequentially composed line by line & at the end, implement all functions.
}


void Readmarks(const int& NumberOfElements,   float * p)  // can not pass by const ref for the pointer variable. Why =?
{
    for (int i = 0; i < NumberOfElements; i++)
    {
        cout << "Enter Mark " << i + 1 << " : ";
        cin >> *(p + i);
        cout << endl;
    }
}


void PrintMarks(const int &NumberOfElements, float* p)
{
    for (int i = 0; i < NumberOfElements; i++)
    {
        cout << "Mark " << i + 1 << " : " << *(p + i) << endl;
    }
}


int main()
{
    
    int NumberOfElements = ReadNumberOfElements("Enter the number of elements: "); // Range NOT included as its value is NOT intrinsic.
/*                    |          
                      |--->    to be added at the very end, after finishing typing the "return" keyboard.     */
    
    float* p;

    p = new float [NumberOfElements];   // Dynamic allocation with the new keyword.
    // p now stores the address of the unnamed dynamically allocated object [that's, in this case only,  comprised of a sequential line of objects each representing an element]
    // RESULTING in p pointing at the first element in the object.
    // NOW *p will ALWAYS BE USED as it is the WHOLE point of pointers.


    Readmarks(NumberOfElements, p);
    // the unnamed dynamically allocated object has been initialized with elementS.

    cout << "\nDisplaying the entered marks: \n";
    PrintMarks(NumberOfElements, p);

    delete[] p;   // you HAVE TO use the [delete] keyword  since the [new] keword was used for DYNAMIC ALLOCATION IN MEMORY.

    return 0;
}






// this is the same program but in an uptimized spaghetti code style (just examine the comments and try to delete it)


int main()
{
    int NumberOfElements;

    cout << "Enter the number of elements: ";
    cin >> NumberOfElements;
    cout << endl;

    int* p;

    p = new int[NumberOfElements];   // This line make it possible; Dynamic memory allocation of an unnamed object that is an array ( a group of sequentially grouped objects).
    // p now stores the address of this object, RESULTING IT p pointing towards the first element in the object

    for (int i = 0; i < NumberOfElements; i++)
    {
        cout << "Enter Mark " << i + 1 << " : ";
        cin >> *(p + i);
        cout << endl << endl;
    }

    // the array has been filled with elements.
    cout << "\nDisplaying the entered marks:\n";
    for (int i = 0; i < NumberOfElements; i++)
    {
        cout << *(p + i)<< " " << endl;
    }

    delete[] p;

    return 0;
}

