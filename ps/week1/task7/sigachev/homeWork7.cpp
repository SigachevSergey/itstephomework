#include <iostream>
using namespace std;

int main()
{
	double V, t, S;
	cout << "Enter length (km): ";
	cin >> S;
	cout << "Enter time (min): ";
	cin >> t;
	V = S / (t/60);
	cout << "Speed needed: " << V << "km/h\n";
}