#include<iostream>
using namespace std;
int main()
{
	int number, binary;
	cout << "Enter a decimal number between 0 and 15: ";
	cin >> number;

	if (number >= 0 && number <= 15) {
		while (number > 0)
		{
			binary = number % 2;
			cout << binary;
			number /= 2;
		}
	}
	else {
	cout << "The number is not between 0 to 15";
	} 	

	return 0;
}
