#include<iostream>
#include "MyClass.hpp"
#include "Shape.hpp"
#include <corecrt_math_defines.h>
#include "Account.hpp"
#include "Student.hpp"
#include"Shape.hpp"
#include "Car.hpp"




void zad12()
{
	MyClass o1, o2;
	o1.setVariable(16);
	int value = o1.getVariable();
	int value2 = o2.getVariable();
	std::cout << value << " " << value2 << std::endl;


	Rectangle rect;
	rect.setDimensions(3, 7);
	std::cout << rect.getField() << " " << rect.getCircuit() << std::endl;
}

void zad2_2()
{
	Account prv;
	prv.deposit(150);
	std::cout << prv.getBalance() << std::endl;
	int cash = prv.withdraw(100);
	std::cout << prv.getBalance() << std::endl;
	cash = prv.withdraw(100);
	std::cout << prv.getBalance() << " " << cash << std::endl;

}

int student()
{
	Student myStudent;
	myStudent.getGrades();
	std::cout << "Average is: " << std::endl;
	std::cout << myStudent.getAverage() << std::endl;

	return 0;
}

int main()
{
	Car Volvo(Car::Engine::EngineTypes::Petrol, 2.6);
	Volvo.annualService();

}
