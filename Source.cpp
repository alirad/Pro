#include <iostream>
using namespace std;

bool prime(int);
void generatePrime(int, int);

int main()
{
	int first[10], second[10], t;
	cin >> t;
	for (int i = 0;i < t;i++) {
		cin >> first[i] >> second[i];
	}
	for (int i = 0;i < t;i++) {
		generatePrime(first[i], second[i]);
		cout << endl;
	}

	system("pause");
	return 0;
}

bool prime(int num)
{
	int i = 1, t=0;
	while (i <= num) {
		if (num%i == 0) {
			t++;
		}
		i++;
	}
	if (t == 2) {
		return true;
	}
	else {
		return false;
	}
}

void generatePrime(int first, int second)
{
	while (first <= second) {
		if (prime(first) == true) {
			cout << first << endl;
		}
		first++;
	}
}
