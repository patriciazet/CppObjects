#pragma once
#include<string>



class Account
{
private:
	double balance = 0;
	std::string number;
	std::string generateBankNumber();
public:
	Account();

	/// returns code (-1) when balance < amount
	/// returns 0 on success
	int withdraw(double amount);

	void deposit(double amount);
	double getBalance();
	void printBalance();

};