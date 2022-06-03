#pragma once
#include <string>

class Student
{
public:
	void setName(std::string newName);
	void setSurname(std::string newSurname);
	void getGrades();
	double getAverage();
	Student();
private:
	std::string name;
	std::string surname;
	// const int gradesCount = 5;
	double grades[5]; 
};