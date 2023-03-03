#include <iostream>
#include <string>
#include "STUDENT.h"

using namespace std;

STUDENT::STUDENT()
{
	this->fName = "non";
	this->sName = "non";
	this->patronymic = "non";
	this->marks[0] = 0;
	this->marks[1] = 0;
	this->marks[2] = 0;
	this->marks[3] = 0;
	this->marks[4] = 0;
	this->numberGroup = 0;
}

STUDENT::STUDENT(string firstName, string secondName, string patr, int number, int* array)
{
	if (number < 0)
	{
		cout << "Error";
		exit(0);
	}

	if (sizeof(array) > 20)
	{
		cout << "Error";
		exit(0);
	}

	fName = firstName;
	sName = secondName;
	patronymic = patr;
	numberGroup = number;

	for (int i = 0; i < 5; i++)
	{
		if (array[i] < 0 || array[i] > 5)
		{
			cout << "Error";
			exit(0);
		}
		marks[i] = array[i];
	}
}

void STUDENT::Print()
{
	cout << sName << " " << fName << " " << patronymic << endl;
	cout << numberGroup << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << marks[i] << " ";
	}
}

double STUDENT::AverageScore()
{
	return double((marks[0] + marks[1] + marks[2] + marks[3] + marks[4])) / 5;
}

void STUDENT::PrintSecondName()
{
	cout << sName;
}

int STUDENT::NumberGroup()
{
	return numberGroup;
}

STUDENT::~STUDENT()
{
}