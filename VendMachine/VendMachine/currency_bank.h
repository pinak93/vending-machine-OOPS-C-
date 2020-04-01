#pragma once
#include<string>
#include<map>
#include<vector>
class currency_bank
{
public:
	std::vector<int> coins{ 1,5,10,25 };
private:
	std::map<int, int> bank_balance;
public:
	currency_bank();
	~currency_bank();
	void add(int, int);
	void getAmount(int);
	std::vector<int> getChangeCoins();
	int calculateChange(int, int);
};

