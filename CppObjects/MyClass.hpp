#pragma once

class MyClass
{
	int variable = 42; //private by default
public:
	//akcesor(getter), kt�ry zwraca warto�� zmiennej variable
	int getVariable();
	
	void setVariable(int param);
};

