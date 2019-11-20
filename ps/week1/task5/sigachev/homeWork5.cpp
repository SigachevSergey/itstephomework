#include <iostream>
using namespace std;

int main()
{
	double pi = 3.14;
	double L;
	cout << "Enter lap length:";
	cin >> L;
	double S = pi * (L / (2 * pi)) * (L / (2 * pi));
	cout << "Square - " << S <<"\n";
}