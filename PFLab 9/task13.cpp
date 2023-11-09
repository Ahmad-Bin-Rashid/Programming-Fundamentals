#include <iostream>
using namespace std;

void jazzifyChords (string chords[], int size);

main()
{
    int size;

    cout <<"Enter the number of chords: ";
    cin >> size;

    string chord[size];
    
    cout <<"Enter "<< size <<" chords, one per line: "<< endl;
    for (int x = 0; x < size; x++)
    {
        cin >> chord[x];
    }
    jazzifyChords (chord, size);
}

void jazzifyChords (string chords[], int size)
{
    	cout <<"Jazzified chords: [";
    	int lengh;
    	string seven = "7";
    	string word;
    	bool result = false;

    	for (int i = 0; i < size; i++)
    	{
        	word = chords[i];
        	lengh = word.length();
        
        	if (word[lengh - 1] != '7')
        	{
            	chords[i] += seven;
        	}
        	cout << chords[i];
            
		if (i != size - 1)
            {
                 	cout <<", ";
            }
    	}
    	cout <<"]"<< endl;
}
