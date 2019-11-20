#include <iostream>
using namespace std;

int main()
{
	double L, C, f1, f2, f3, r1, r2, r3;
	cout << "Enter distance (km): ";
	cin >> L;
	cout << "Enter engine consumption per 100km: ";
	cin >> C;
	cout << "Enter price fuel 1: ";
	cin >> f1;
	cout << "Enter price fuel 2: ";
	cin >> f2;
	cout << "Enter price fuel 3: ";
	cin >> f3;
	r1 = ((L / 100) * C) * f1;
	r2 = ((L / 100) * C) * f2;
	r3 = ((L / 100) * C) * f3;
	cout << "1 fuel consumption: " << r1 << " RUB\n"
		 << "2 fuel consumption: " << r2 << " RUB\n"
		 << "3 fuel consumption: " << r3 << " RUB\n";
}