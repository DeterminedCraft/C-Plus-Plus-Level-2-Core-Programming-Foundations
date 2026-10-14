
#include <iostream>
using namespace std;

/*
 
  Think of the Quick Watch Window as a CUSTOMIZED Auto Window:

  During debugging, one can:  Highlight a variable or an expression > Add to Quick Watch

  So that, not only:
  1- One can watch this variable or expression (Like Auto Window can do).
  2- But also, can evaluate expressions, functions, a part of the code, etc 
     by assinging their variable(s) different value(s) inside the window
     where these changes do not affect the actual code in editor.

     Again: As a developer, you've to master all these aspects of debugging in order to become faster 
            in resolving problems and writing code.



    Practice:
    1- On the line where a = 10 is, place a break point.
    2- Run the program so that it will stop at the line where a = 10 is, without executing it.
    3- You will notice that the Auto Window is launched (Discussed in the last lesson).
    4- Now let's say-  you keep on pressing F11, till you reach the line ( c = a + b)
       and as you can see, if you hover the mouse over 'c', 'a', & 'b' (The value displayed in the auto window)
       , then you can view their current values in memory.


   NOW, you can (for example) highlight a + b alone in the editor > Press SHIFT + F9. 
   
   his will trigger a "Quick Watch Window": 
   - The expression  a + b will be displayed along with its value.
   - Click on "Add Watch" (Adjouter Espion) (meaning: watch it for me) 
   - In Editor, besides the already existing Automatic Watch Window, 
     A Quick Watch Window (Watch1) tab will appear with the current expression a + b  along with its value.

        so the expression in the pop-up Quick Watch Window will have variable values that could be tweaked (will not
        effect the original values in memory of the editor's code) in the UI
        for example:

        from a + b in the pop-up, to a + b / 10 (and so on) and then click on "Re-evaluate"
        where the value of a + b / 10, in the pop-up, will be displayed.

        so, in the quick watch window, one can re-valuate the value of: a variable, an expression, an array, a function
        or anything that you want.


 
 Another example: Place the break point on the line where  c = mySum(a, b) is:
                  
                  - Highlight the part MySum(a, b)  
                  - Press SHIFT + F9
                  - Quick Watch Window pop-up appears with mySum(a, b) displayed along its value.
 
 So The Quich Watch Window HELPS A TON in watching the values of the results of expressions, variables, functions.
                 
                 - Now you could add the part + 5, so one would have:
                   MySum(a, b) + 5;    
                   and click on Re-evaluate.



   Another example:  While in debug mode & without having to place a break point on the line where arr1 is:
                     
                     - Highlight arr1
                     - SHIFT + F9
                     - A Quick Watch Window appears showing all the details of arr1 including its  5 elements (important to discern)
                       (whereas if arr1[5] is highlighted, then it's 5 elements will not be listed in the Quick Watch Window).

         Again: Quick Watch feature is not only for variables (normal variables & array variables) or functions
                . It is for EVERYTHING & ANYTHING you could think of.

 
 Also, as you noticed the "Add To Watch" button in the pop-up, 
 adds the current expression and its evaluation to the watch tab in editor so we can:

 View the info in the tab instead of the pop-up & have a history of the different expressions' evaluations'.



                      ********** AN IMPORANT NOTE REGARDING POINTERTS (an upcoming lesson) **********:
                      * In the Quick Watch Window for the arr1 expression, 
                      * the values of each array element is listed.
                      * However, the value for arr1 itself is some Hexidecimal. Example:  0x000000cebc32f718
                      * This represents the memory address where the array variable is stored
                      * 
                      * & the advantage is that, if one wants to have the variable array as an argument 
                      * in the called function, then I send the memory address of the array instead of the 
                      * whole actual array. ( will be explained further in the upcoming pointers lessons).




*/




    int MySum(int a, int b)
    {
        int s = 0;
        s = a + b;
        return s;
    }

    int main()
    {
        int arr1[5] = { 200,100,50,25,30 };
        int a, b, c;
        a = 10;
        b = 20;
        a++;
        ++b;
        c = a + b;
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        for (int i = 1; i <= 5; i++)
        {
            cout << i << endl;
            a = a + a * i;
        }
        c = MySum(a, b);
        cout << c;
        return 0;
    }



