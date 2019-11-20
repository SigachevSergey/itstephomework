#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//В задании в примере после запятой 6 знаков, а в решении выходило 5 знаков.
	//так же спомощью GOOGLE нашел способ вывода заданного количества знаков у дроби.
	cout << setprecision(7);
	double R0, R1, R2, R3;
	cout << "Enter Resist 1:";
	cin >> R1;
	cout << "Enter Resist 2:";
	cin >> R2;
	cout << "Enter Resist 3:";
	cin >> R3;
	R0 = 1 / ((1 / R1) + (1 / R2) + (1 / R3));
	cout << "Resist 0 is - " << R0 <<"\n";
}