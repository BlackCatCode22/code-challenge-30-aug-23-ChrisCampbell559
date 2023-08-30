#include <iostream>

using namespace std;

int main()
{

    cout << " Hello Pointers!";

    //create a char array
    char myChars[3];

    char myCharsToFillArray = 'a';

    //use a for loop to fill the array with a b c
    for (int i =0; i < 3; i++) {
        myChars[i] = myCharsToFillArray;
        myCharsToFillArray++;

        //Use a for loop to output the array
        for(int i = 0; i < 3; i++)  {
            cout << "  " << myChars[i] << "\n\n";


        }


        char myChar = 'z';
        char* pMyZpointer = &myChar;

        //dereference and output pMyZpointer
        cout << " I expect to see a D : " << *pMyZpointer;


        //point to the array
        char* pMyCharsPtr = myChars;

        // output the pointer's value
        cout << "should be an address " << pMyCharsPtr;
        cout << "\n\n";


        //Dereference the pointer and output it
        cout << " should be a z character " << *pMyCharsPtr;

        //increment the array pointer
        pMyArrayPtr++;

        // Output dereference pointer
        cout << "\n Should be the second char in the array (b): " << *pMyArrayPtr;

    }


    return 0;
}
