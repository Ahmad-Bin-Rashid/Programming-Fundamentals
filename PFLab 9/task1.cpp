/*
 Program that takes a word from the user and passes it to a function
  that displays the location of all alphabets in the array.
*/

#include <iostream>
using namespace std;

void postmortem(string word);                  //function prototype

main()
{
    string word;

    cout << "Enter a word: ";
    cin >> word;

    postmortem(word);                           //function call
}

void postmortem(string word)

/*
 Function that displays the location of all alphabets in the 
 array.
*/

{
    for (int x = 0; word[x] != '\0'; x++)
    {
        cout << word[x] <<" found at position "<< x << endl;
    }
}
