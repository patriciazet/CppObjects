class ThisExample
{
	int variable;
public:
	ThisExample(int variable) //konstruktor, metoda zarz�dzaj�ca obiektem
	{
		this->variable = variable;
	}
	int getVariable()
	{
		return variable;
	}
};