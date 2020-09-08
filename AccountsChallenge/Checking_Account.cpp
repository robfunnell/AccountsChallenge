#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance)
	: Account{ name, balance } {
}

bool Checking_Account::withdraw(double amount) {
	amount += withdraw_fee;
	return Account::withdraw(amount);
}

std::ostream& operator <<(std::ostream& os, const Checking_Account& account) {
	os << "[Checking_Account: " << account.name << ": " << account.balance << ", $" << account.withdraw_fee << " withdraw fee]";
	return os;
}