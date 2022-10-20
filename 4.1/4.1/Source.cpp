#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int N, i;
	double S;
	cout << "N = "; cin >> N;
	S = 0;
	i = 1;
	N = 15;
	while (i <= N)
	{
		S += (sin(10 * i) + cos(10 / i)) / sqrt(i);
		i++;
	}
	cout << S << endl;
	S = 0;
	i = 1;
	N = 15;
		do {
		S += (sin(10 * i) + cos(10 / i))/ sqrt(i);
		i++;
	} while (i <= N);
	cout << S << endl;
	S = 0;
	i = 1;
	N = 15;
	for (i = 1; i <= N; i++)
	{
		S += (sin(10 * i) + cos(10 / i)) / sqrt(i);
	}
	cout << S << endl;
	S = 0;
	i = 1;
	N = 15;
	for (i = N; i >= 1; i--)
	{
		S += (sin(10 * i) + cos(10 / i)) / sqrt(i);
	}
	cout << S << endl;
	return 0;
}