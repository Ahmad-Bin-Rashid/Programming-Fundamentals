/*
 Program that displays the name, percentage and grade depending
 upon the marks of student.
*/

#include <iostream>
using namespace std;

float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksScience, float marksBiology);
string calculateGrade(float percentage);

main()
{
    string name;
    float marksEnglish;
    float marksMaths;
    float marksChemistry;
    float marksScience;
    float marksBiology;
    float percentage;
    string grade;

    cout <<"Enter student name: ";
    cin >> name;
    cout <<"Enter marks for English: ";
    cin >> marksEnglish ;
    cout <<"Enter marks for Maths: ";
    cin >> marksMaths ;
    cout <<"Enter marks for Chemistry: ";
    cin >> marksChemistry ;
    cout <<"Enter marks for Social Science: ";
    cin >> marksScience ;
    cout <<"Enter marks for Biology: ";
    cin >> marksBiology ;

    percentage =  calculateAverage (marksEnglish, marksMaths, marksChemistry, marksScience, marksBiology);
    cout <<"Student Name: " << name << endl;
    cout <<"Percentage: " << percentage << "%" << endl;
    cout <<"Grade: " << calculateGrade(percentage) <<endl;
}

float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksScience, float marksBiology)

/*
 Function that calculates percentage.
*/

{
    float result;

    result = marksEnglish + marksMaths + marksChemistry + marksScience + marksBiology;
    result = result / 5;

    return result;
}

string calculateGrade(float percentage)

/*
 Function that takes percentage and calculate grade.
*/

{
    string grade;

    if (percentage >= 90 && percentage <= 100)
    {
        grade = "A+";
    }
    if (percentage >= 80 && percentage < 90)
    {
        grade = "A";
    }
    if (percentage >= 70 && percentage < 80)
    {
        grade = "B+";
    }
    if (percentage >= 60 && percentage < 70)
    {
        grade = "B";
    }
    if (percentage >= 50 && percentage < 60)
    {
        grade = "C";
    }
    if (percentage >= 40 && percentage < 50)
    {
        grade = "D";
    }
    if (percentage < 40)
    {
        grade = "F";
    }
    return grade;
}
