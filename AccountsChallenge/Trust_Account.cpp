#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
	: Savings_Account{ name, balance, int_rate } {
}

bool Trust_Account::deposit(double amount) {
	if (amount >= bonus_threshold) {
		amount += bonus_amount;
	}
	return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
	if (current_yearly_withdraws == 3 || amount > balance*withdraw_max_percent) {
		return false;
	}
	else {
		current_yearly_withdraws++;
		return Savings_Account::withdraw(amount);
	}
}

std::ostream& operator<<(std::ostream& os, const Trust_Account& account) {
	os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "% interest rate]";
	return os;
}