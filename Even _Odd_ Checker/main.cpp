#include <iostream>
using namespace std;

int main() {

	cout << "\n===============================================\n" << endl;

	cout << "\n===== welcome to our even / odd checker  ======\n" << endl;

	cout << "\n===============================================\n" << endl;

	int num;

	cout << " \n====== please enter a number to check if it is even or odd ======\n" << endl;

	if (!(cin >> num)) { // if the input is not a number, this condition will be true

		cout << "\n====== invalid input =======\n" << endl;

		return 1;
	}

	if (num % 2 == 0)
	{  // if the number is divisible by 2, it is even

		cout << "\n======= the number you entered is even =======\n" << endl;
	}
	else // if the number is not divisible by 2, it is odd
	{
		cout << "\n======= the number you entered is odd =======\n" << endl;
	}

	return 0;

}
