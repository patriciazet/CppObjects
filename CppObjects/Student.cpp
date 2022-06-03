#include <iostream>
#include "Student.hpp"



void Student::setName(std::string newName)
{
	name = newName;
}

void Student::setSurname(std::string newSurname)
{
	surname = newSurname;

}

void Student::getGrades()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Enter a grade: " << std::endl;
		std::cin >> grades[i];
	}
}

double Student::getAverage()
{
	double sum = 0;
	double result = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += grades[i];
	}
	result = sum / 5;

	return result;
}

Student::Student()
{
	for(int i = 0; i < 5; i++)
	{
		grades[i] = 0;
	}
}
