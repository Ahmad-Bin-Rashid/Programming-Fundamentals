/*
 Program that takes measurements as input from user
and calculates the height of the tree using trigonometric principles. 
*/


# include <iostream>
# include <cmath>
using namespace std;

float firstRealRoot (float a,float b,float c);          //function prototypes
float secondRealRoot (float a,float b,float c);
float realRoot (float a,float b,float c);
float firstComplexRoot (float a,float b,float c);
float secondComplexRoot (float a,float b,float c);

main()
{
	float a;
	float b;
	float c;
	float discriminant;
	float root1;
	float root2;
	float root;

	cout <<"Enter the value of a: ";
	cin >> a;
	cout <<"Enter the value of b: ";
	cin >> b;
	cout <<"Enter the value of c: ";
	cin >> c;
                                                      //discriminant calculaton
	discriminant = pow (b, 2) - (4 * a * c);
	                                              //when unequal real roots
	if(discriminant > 0){
		root1 = firstRealRoot (a, b, c);
		root2 = secondRealRoot (a, b, c);
		cout <<"Solutions: x = "<< root1 <<" and x = "<< root2;
	}
	if(discriminant == 0){                        //when equal real roots
		root = realRoot (a, b, c);
		cout <<"Solution: x = "<< root;
	}
	if(discriminant < 0){                         //when complex roots
		root1 = firstComplexRoot (a, b, c);
		root2 = secondComplexRoot (a, b, c);
		cout <<"Complex Solutions: x = "<< root1 <<" + "<< root2 <<"i and x = "<< root1 <<" - "<< root2 <<"i";
	}
}

/*
 These functions below calculate the roots of equation.
*/


float firstRealRoot (float a,float b,float c)
{
	float root1 = (-b + sqrt(pow (b, 2) - (4 * a * c))) / (2 * a);
	return root1;
}


float secondRealRoot (float a,float b,float c)
{
	float root2 = (-b - sqrt(pow (b, 2) - (4 * a * c))) / (2 * a);
	return root2;
}

float realRoot (float a,float b,float c)
{
	float root = (-b) / (2 * a);
	return root;
}


float firstComplexRoot (float a,float b,float c)
{
	float root1 = ((-b) / (2 * a));
	return root1;
}


float secondComplexRoot (float a, float b, float c)
{
	float root2 = (sqrt (-(pow (b, 2) - (4 * a * c))) / (2 * a));
	return root2;
}
