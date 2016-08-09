#include <iostream>
#include <string>
#include "Account.h"
using namespace std;

double money = 10.00, setmoney;
Account::Account(long double depositeWithdrawal,bool TF)
{
	if (TF == true) {
		money += depositeWithdrawal;
	}
	else {
		if (money > depositeWithdrawal) {
			money -= depositeWithdrawal;
		}
	}
	setmoney = money;
	cout << stock() << "$" << endl << endl;
}

double Account::stock()
{
	return setmoney;
}
