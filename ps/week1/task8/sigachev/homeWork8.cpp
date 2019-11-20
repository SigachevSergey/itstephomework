#include <iostream>
using namespace std;

int main()
{
	double H, h, M, m, C, C1, S, s;		//H,M,S - start of call time; h,m,s - end of call time; C,C1 - call cost.
	cout << "enter the start time of the call with a space (hour minute second): ";
	cin >> H >> M >> S;
	cout << "enter the end time of the call with a space (hour minute second): ";
	cin >> h >> m >> s;
	C = (((h * 60) + m + (s / 60)) - ((H * 60) + M + (S / 60))) * 30;  // 30 - cost per minute.
	C1 = C / 100;
	cout << "\nCall cost: " << C1 << " RUB,\n"
		 << "or: " << C << " copecks.\n";
}