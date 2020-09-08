#pragma once
#include "Savings_Account.h"
class Trust_Account :
    public Savings_Account
{
    friend std::ostream& operator<<(std::ostream& os, const Trust_Account& account);

private:

    static constexpr const char* def_name = "Unnamed Trust Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    static constexpr double bonus_amount = 50.0;
    static constexpr double bonus_threshold = 5000.00;
    static constexpr double withdraw_max_percent = 0.2;
    static constexpr int total_yearly_withdraws = 3;

protected:

    int current_yearly_withdraws = 0;

public:

    Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    bool deposit(double amount);
    bool withdraw(double amount);


    
};

