#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int V, t, a;
	double S, V1, t1;
	cout << "Введите скорость (км/час): ";
	cin >> V;
	V1 = V / 3.6;
	cout << "Введите время ускорения в минутах: ";
	cin >> t;
	t1 = t * 60;
	cout << "Введите ускорение (м/с2): ";
	cin >> a;
	S = ((V1 * t1) + ((a * t1 * t1) / 2))/1000;
	cout << "Пройденое расстояние: " << S <<" километров\n";
}