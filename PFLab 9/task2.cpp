/*
 Program that takes a word from the user and passes it to a 
 function that displays it in the reverse order.
*/

#include <iostream>
using namespace std;

void reverse(string word);                        //function prototype

main()
{
    string word;

    cout << "Enter a string: ";
    cin >> word;

    reverse(word);                                //function call
}

void reverse(string word)

/*
 Function that takes a string as input parameter and displays
 it in the reverse order.
*/

{
    int count = word.length();

    cout <<"Reversed String: ";
    for (int y = count-1; y >= 0; y--)
    {
        cout << word[y];
    }
}
