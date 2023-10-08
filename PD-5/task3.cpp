/*
 Program that calculates the price of the vehicle after adding the tax
  according to the vehicle type entered by the user.
*/

# include <iostream>
using namespace std;
                                                                        //Function Prototype
float taxCalculator (float price, char type);

main()
{
    float price;
    float finalPrice;
    char type;

    cout <<"Enter the vehicle type code (M, E, S, V, T): ";
    cin >> type;
    cout <<"Enter the price of the vehicle: $";
    cin >> price;
                                                                        //Function call
    finalPrice = taxCalculator (price, type);
    cout <<"The final Price of the vehicle of type "<< type <<" after adding the tax is: $"+ to_string(finalPrice) +".";
}

float taxCalculator (float price, char type)

/*
 Function that takes price and type of the vehicle entered by user
 and calculates the price adding the tax according to the vehicle
 type.
*/

{
    float finalPrice;
    float taxAmount;

    if (type == 'M')                                             //For Motorcycle type vehicle
    {
        taxAmount = (price * 6) / 100;
        finalPrice = price + taxAmount;
        return finalPrice;
    }
    if (type == 'E')                                             //For Electric type vehicle
    {
        taxAmount = (price * 8) / 100;
        finalPrice = price + taxAmount;
        return finalPrice;
    }
    if (type == 'S')                                             //For Sedan type vehicle
    {
        taxAmount = (price * 10) / 100;
        finalPrice = price + taxAmount;
        return finalPrice;
    }
    if (type == 'V')                                             //For Van type vehicle
    {
        taxAmount = (price * 12) / 100;
        finalPrice = price + taxAmount;
        return finalPrice;
    }
    if (type == 'T')                                             //For Truck type vehicle
    {
        taxAmount = (price * 15) / 100;
        finalPrice = price + taxAmount;
        return finalPrice;
    }
}
