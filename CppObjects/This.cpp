class ThisExample
{
	int variable;
public:
	ThisExample(int variable) //konstruktor, metoda zarządzająca obiektem
	{
		this->variable = variable;
	}
	int getVariable()
	{
		return variable;
	}
};