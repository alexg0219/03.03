#pragma once

using namespace std;

class STUDENT
{
public:
	STUDENT(string firstName, string secondName, string patr, int number, int* array);

	STUDENT();

	~STUDENT();

	void Print();
	
	double AverageScore();

	void PrintSecondName();

	int NumberGroup();

private:
	string fName;
	string sName;
	string patronymic;
	int numberGroup;
	int marks[5];
};
