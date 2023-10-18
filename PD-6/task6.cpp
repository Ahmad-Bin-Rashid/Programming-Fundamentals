/*
 Program that calculates the price of the whole stay for a studio
 and apartment.
*/


#include <iostream>
using namespace std;

string calculateHotelPrices (string month, int stay);                              //function prototype

main()
{
    	string month = " ";
	int stay = 0;
	string result = " ";

    	cout <<"Enter the month (May, June, July, August, September, October): ";
    	cin >> month;
    	cout <<"Enter the number of stays: ";
    	cin >> stay;

    	result = calculateHotelPrices (month, stay);                                 //function call
	cout << result;
}

string calculateHotelPrices (string month, int stay)

/*
 Functon that takes the month and number of stays in hotel
 and calculates the price of stays depending on month.
*/

{
	string result1 = " ";
	string result2 = " ";
    	float apartment = 0.0;
    	float discount = 0.0;
	float studio = 0.0;
	
	//calculation for apartment
	
    	if (month == "May" || month == "October")
    	{
    		float value = 65;
        
        	if (stay > 14)
        	{
        		discount = (value * 10) / 100;
        		apartment = value - discount;
    		}
        	apartment = stay * apartment;
    	}
    	if ((month == "June" || month == "September") && (stay <= 14))
    	{
    		float value = 68.70;
        	apartment = stay * value;
	}
	
    	if ((month == "June" || month == "September") && (stay > 14))
    	{
    		float value = 68.70;
        	discount = (value * 10) / 100;
     		apartment = value - discount;        	
        	apartment = stay * apartment;
    	}
    
    	if (month == "July" || month == "August")
    	{
    		float value = 77;
        
        	if (stay > 14)
        	{
        		discount = (value * 10) / 100;
        		apartment = value - discount;
    		}
        	apartment = stay * apartment;
    	}


	//calculation for studio

	if ((month == "May" || month == "October") && (stay <= 7))
	{
		float value = 50;
		studio = stay * value;
	}
	if ((month == "May" || month == "October") && (stay > 7 && stay <= 14))
    	{
    		float value = 50;
       	discount = (value * 5) / 100;
       	studio = value - discount;
        	studio = stay * studio;
    	}

    	if ((month == "May" || month == "October") && (stay > 14))
    	{
    		float value = 50;
       	discount = (value * 30) / 100;
       	studio = value - discount;
    		studio = stay * studio;
	}
    
    	if ((month == "June" || month == "September") && (stay <= 14))
    	{
    		float value = 75.20;
        	studio = stay * value;
    	}
        
      if ((month == "June" || month == "September") && (stay > 14))
      {
      	float value = 75.20;
      	discount = (value * 0.2);
      	studio = value - discount;
      	studio = stay * studio;
	}	
    
	if (month == "July" || month == "August")
    	{
    		float value = 76;
        	studio = stay * value;
    	}
    	
    	result1 = "Apartment: "+ to_string(apartment) +"$.\n";
	result2 = "Studio: "+ to_string(studio) +"$.";
	
	string result = result1 + result2;
	return result;
}
