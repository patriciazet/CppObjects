#pragma once

class Car
{
public:
	class Engine 
	{
	public:
		enum class EngineTypes : char { Diesel, Petrol }; //nazwy

		void changeOil();
		Engine(EngineTypes type, double liters);
	private:
		double capacity;
		EngineTypes engineType; //œcis³a kontrola typów		
	};
	
	

	void annualService(); //pod carem a nie enginem, bo car przechodzi
	Car(Engine::EngineTypes type, double capacity); //konstruktor
	~Car();

private:
	Engine* engine;  //atrybut, wskaŸników nie powinno siê robiæ public
};

