#include <iostream>
using namespace std;
main()
{
	float initVel;
	float acc;
	float time;
	float finalVel;
	cout <<"Enter Initial Velocity (m/s): ";
	cin >> initVel;
	cout <<"Enter Acceleration (m/s^2): ";
	cin >> acc;
	cout <<"Enter Time (s): ";
	cin >> time;
	finalVel = (acc * time) + initVel;
	cout <<"Final Velocity (m/s): "<<finalVel;
}