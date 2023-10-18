/*
 Program that inputs the exam starting time and student's arrival time
 and prints if the student has arrived on time, early or late.
*/

#include <iostream>
using namespace std;

string checkStudentStatus (int examHour, int examMins, int studHour, int studMins);            //function prototype

main()
{
    	int examHour;
	int examMins;
	int studHour;
	int studMins;
	string result;

    	cout <<"Enter Exam Starting Time (hour): ";
    	cin >> examHour;
    	cout <<"Enter Exam Starting Time (minutes): ";
    	cin >> examMins;
    	cout <<"Enter Student hour of arrival: ";
    	cin >> studHour;
	cout <<"Enter Student minutes of arrival: ";
    	cin >> studMins;

    	result = checkStudentStatus (examHour, examMins, studHour, studMins);               //function call
	cout << result;
}

string checkStudentStatus (int examHour, int examMins, int studHour, int studMins)

/*
 Functon that takes the exam starting time and student arriving time
 as input and calculate how many hours or minutes the student is 
 early or late.
*/

{
    	int exam = (examHour * 60) + examMins;
    	int student = (studHour * 60) + studMins;
    	int differ = exam - student;
    	string result;
    	
    	if (differ > 30 && differ < 60)
	{
		result = "Early\n"+ to_string(differ) +" minutes before the start";
	}
	
	if (differ >= 60)
	{
    		int hour = differ / 60;
    		int minutes = differ % 60;
		result = "Early\n"+ to_string(hour) +":"+ to_string(minutes) +" hours before the start";
	}
	
	if (differ == 0 )
	{
		result = "On time";
	}
	
	if (differ > 0 && differ <= 30)
	{
		result = "On time\n"+ to_string(differ) +" minutes before the start";
	}
	
	if (differ < 0)
	{
		differ = (-1) * differ;
		
		if (differ > 0 && differ < 60)
		{
			result = "Late\n"+ to_string(differ) +" minutes after the start";
		}
		if (differ >= 60)
		{
			int hour = differ / 60;
    			int minutes = differ % 60;
			result = "Late\n"+ to_string(hour) +":"+ to_string(minutes) +" hours after the start";
		}
	}
	return result;
}
