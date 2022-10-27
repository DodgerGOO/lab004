#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y;
	double R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "R = "; cin >> R;
		cout << "y = "; cin >> y;
		if      ((y <= 0 && x <= 0 && (x * x) + (y * y) <= R * R) ||
			(x >= 0 && (x * x) + (y * y) <= R * R && y <= (x - 1) * (x - 1)))

			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;
	
		for (int i = 0; i < 10; i++)
		{
			x = 6.0 * rand() / RAND_MAX - R;
			y = 6.0 * rand() / RAND_MAX - R;
			if    ((y <= 0 && x <= 0 && (x * x) + (y * y) <= R * R) ||
				(x >= 0 && (x * x) + (y * y) <= R * R && y <= (x - 1) * (x - 1)))

				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}