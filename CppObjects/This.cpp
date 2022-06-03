class ThisExample
{
	int variable;
public:
	ThisExample(int variable) //konstruktor, metoda zarz¹dzaj¹ca obiektem
	{
		this->variable = variable;
	}
	int getVariable()
	{
		return variable;
	}
};