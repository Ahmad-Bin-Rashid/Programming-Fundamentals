# include <iostream>
using namespace std;

string plant (string seed, int water, int fert, int temp);

main ()
{
    string seed;
    int water;
    int fert;
    int temp;

    cout <<"Enter the type of flower: ";
    cin >> seed;
    cout <<"Enter the units of water added: ";
    cin >> water;
    cout <<"Enter the units of fertilizer added: ";
    cin >> fert;
    cout <<"Enter the temperature: ";
    cin >> temp;

    cout << plant (seed, water, fert, temp);
}

string plant (string seed, int water, int fert, int temp)
{
    string stem = "-";
    string totalstems = stem;
    string totalflowers = seed;
    string plant;
    string result;
    
    for (int x = 1; x < water; x += 1)
    {
        totalstems += stem;
    }

    if (temp >= 20 && temp <= 30)
    {
        for (int y = 1; y < fert; y++)
        {
            totalflowers += seed;
        }
        plant = totalstems + totalflowers;
        result = plant;
        for (int z = 1; z < water; z++)
        {
            result = result + plant;
        }
        return result;
    }

    else
    {
        result = totalstems;
        for (int z = 1; z < water; z++)
        {
            result = result + totalstems;
        }
        plant = result + seed;
        return plant;
    }
}
