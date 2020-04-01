#include "currency_bank.h"
#include <algorithm>
void add(std::vector<int>& cand, int i, int target, int sum, std::vector<int>& vsum);
currency_bank::currency_bank() {
	//Initlize with Dummy Data
	for (auto coins: coins)add(coins,5 );
}
currency_bank::~currency_bank() {

}
void currency_bank::add(int coin, int amount) {
	auto ptr = bank_balance.find(coin);
	if (ptr == bank_balance.end())
		bank_balance.insert({ coin,amount });
	else
		bank_balance.insert({coin,amount+ptr->second});
}
void currency_bank::getAmount(int amount) {
	//Bank_balance = Bank_balance+amount;
}
int currency_bank::calculateChange(int productCost,int currentValue) {
	return  currentValue - productCost;
}
/*
std::vector<int> currency_bank::getChangeCoins(int target) {
	std::vector<int> values;
	std::map<int, int>::iterator itr;
	for (itr = bank_balance.begin(); itr != bank_balance.end(); itr++) {
		for (int i = 0; i < itr->second;i++) {
			values.push_back(itr->first);
		}
	}
	std::vector<int> vsum;
	add(values, 0, target, 0, vsum);
	return vsum;
}
void add(std::vector<int>& cand, int i, int target, int sum, std::vector<int>& vsum)
{
	for (int s = 0; i < cand.size(); ++i)
	{
		s = sum + cand[i];
		if (s > target) continue;
		vsum.push_back(cand[i]);
		if (s == target)
			return;
		else
			add(cand, i + 1, target, s, vsum);
		vsum.pop_back();
	}
}*/