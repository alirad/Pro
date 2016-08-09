#include <iostream>
#include <string>
#include "Account.h"
using namespace std;

void Welcome();
void Deposit();
void Withdrawal();
void Transfer();
void AccountBalance();
void Code(int cc[], int row);

int main()
{
	int options;
	bool exit=true;
	Welcome();
	cout << "Option:";
	cin >> options;
	while (exit == true)
	{
		switch (options)
		{
		case 1:Deposit();
			break;
		case 2:Withdrawal();
			break;
		case 3:Transfer();
			break;
		case 4:AccountBalance();
			break;
		case 5:
			break;
		default:
			cout << "You choose wrong optin.";
		}
		if (options == 5)
		{
			exit = false;
		}
		else {
			system("pause");
			system("cls");
			Welcome();
			cout << "Option:";
			cin >> options;
		}
	}
	system("pause");
	return 0;
}

void Welcome()
{
	cout << "Welcome To The Bank" << endl;
	cout << "1.Deposite" << endl;
	cout << "2.Withdrawal" << endl;
	cout << "3.Transfer" << endl;
	cout << "4.Account Balance" << endl;
	cout << "5.Exit" << endl;
}

void Deposit()
{
	long double money;
	cout << "How Much?" << endl;
	cin >> money;
	Account deposite(money, true);
}

void Withdrawal()
{
	long double money;
	cout << "How Much?" << endl;
	cin >> money;
	Account withdrawal(money, false);
}

void Transfer()
{
	string name;
	int code[4];
	long double moneytrans;
	cout << "Please enter information:" << endl;
	cout << "Name:";
	cin >> name;
	cout << "Code:";
	for (int i = 0;i < 4;i++) {
		cin >> code[i];
	}
	cout << "How much:";
	cin >> moneytrans;
	Account transfer(moneytrans, false);
	cout << "Your Money Transfer for " << name << " And Code:";
	Code(code, 4);
}

void AccountBalance()
{
	Account accountBalance(0, true);
}

void Code(int cc[], int row)
{
	for (int j = 0;j < row;j++)
	{
		if (j < 2)
		{
			cout << " " << cc[j] << " ";
		}
		else {
			cout << " **** ";
		}
	}
}
