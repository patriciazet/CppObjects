#pragma once

class MyClass
{
	int variable = 42; //private by default
public:
	//akcesor(getter), który zwraca wartoœæ zmiennej variable
	int getVariable();
	
	void setVariable(int param);
};

