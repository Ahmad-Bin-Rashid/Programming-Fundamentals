/*
  Program that takes the words in a string array and count the number of times a particular
  letter appears in that array.
*/


#include <iostream>
using namespace std;

int calculateLetterCount (string array[], int size, char letter);                  //function prototype

main()
{
    int size;
    char letter;

    cout <<"Enter how many words you want to enter: ";
    cin >> size;

    string array[size];

    for (int x = 0; x < size; x++)
    {
        cout <<"Enter word "<< x + 1 <<": ";
        cin >> array[x];
    }

    cout <<"Enter the letter you want to count: ";
    cin >> letter;

    cout << letter <<" shows up "<< calculateLetterCount(array, size, letter) <<" times in the data.";
}

int calculateLetterCount (string array[], int size, char letter)

/*
  Function that takes the array of words and a letter and calculates how
  many times that particular letter has been used in the words array.
*/

{
    int count = 0;
    string word;
    for (int y = 0; y < size; y++)
    {
        word = array[y];
        int length = word.length();
        for (int z = 0; z < length; z++)
        {
            if (word[z] == letter)
                count++;
        }
    }
    return count;
}
