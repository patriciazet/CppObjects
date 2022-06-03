#include <iostream>
#include "Account.hpp"

std::string Account::generateBankNumber()
{
	return std::string();
}

Account::Account()
{
	balance = 0;
}

int Account::withdraw(double amount)
{
	// TODO: Should I check if amount is negative?
	if (balance >= amount) 
	{
		balance -= amount;
		return 0;
	}
	else 
	{
		std::cout << "Not enough money to withdraw" << std::endl;
		return -1;
	}
	
}

void Account::deposit(double amount)
{
	// TODO: Should I check if amount is negative?
	balance += amount;
}

double Account::getBalance()
{
	return balance;
}

void Account::printBalance()
{
	std::cout << "Account balance is: " << getBalance() << std::endl;
}


