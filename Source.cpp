#include <iostream>
using namespace std;

int main() {

	double userAmount;
	int numOfBills;
	double billAmount = 20.0;

	cout << "Enter the amount given to the teller: $";
	cin >> userAmount;

	numOfBills = static_cast<int>(userAmount / billAmount);

	cout << "If you give me $" << userAmount 
		<< ", I'll give you " << numOfBills << " $20 bills" << endl;

	system("pause");
	return 0;
}
