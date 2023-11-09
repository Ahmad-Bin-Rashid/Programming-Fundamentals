/*
 Program that change every letter in a given string with the
 letter following it in the alphabetical order.
*/

#include <iostream>
using namespace std;

void nextLetter(string word);                           //function prototype

main()
{
    string word;

    cout << "Enter a String: ";
    getline(cin, word);

    nextLetter(word);                                   //function call
}

void nextLetter(string word)

/*
 Function to change every letter in a given string with the
 letter following it in the alphabetical order.
*/

{
    int count = word.length();
    int ascii;
    
    cout <<"Shifted String: ";
    for (int y = 0; y < count; y++)
    {
        ascii = word[y];
        if ((ascii >= 65 && ascii < 90) || (ascii >=97 && ascii < 122))
        {
            ascii += 1;
        }
        else if (ascii == 90)
        {
            ascii = 65;
        }
        else if (ascii == 122)
        {
            ascii = 97;
        }
        char shift = ascii;
        cout << shift;
    }

}
