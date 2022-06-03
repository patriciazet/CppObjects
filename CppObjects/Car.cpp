#include <iostream>
#include "Car.hpp"


void Car::Engine::changeOil()
{
	std::cout << "Engine: Changing oil after 12 months" << std::endl;
}


Car::Engine::Engine(EngineTypes type, double liters)
{
	if (type == EngineTypes::Diesel)
	{
		std::cout << "Engine: Making new diesel engine." << std::endl;
	}
	else
	{
		std::cout << "Engine: Making new petrol engine." << std::endl;
	}
	
	engineType = type;
	capacity = liters;
}

void Car::annualService()
{
	std::cout << "Car: Car annual service" << std::endl;
	engine->changeOil(); //je¿eli wywo³ujemy metodê na wskaŸniku do obiektu to dajemy strza³kê zamiast kropki
}

Car::Car(Engine::EngineTypes type, double capacity)
{
	std::cout << "Car: Making new car. Type: " << "TODO" << " Engine capacity: " << capacity << std::endl;
	engine = new Engine(type, capacity);
}

Car::~Car()
{
	delete engine; //do delete dajê wskaŸnik
	std::cout << "Car: destructor." << std::endl;
}

