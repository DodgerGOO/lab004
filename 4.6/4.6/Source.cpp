#include <iostream>
#include <cmath>
using namespace std;
int main()
	int j, i;
	S = 0;
	j = 2;
	while (j <= 20)

	{
		P = 1;
		i = j * j;
		while (i <= 400)

		{
			P += i;
			i++;

		}
		S *= j / (j * j + P);
		j++;

	}
	cout << P << endl;
	S = 0;
	j = 2;
	do
	{
		P = 1;
		i = j * j;
		do
		{
			P += i;
			i++;
		} while (i <= 400);
		S *= j / (j * j + P);
		j++;
	} while (j <= 20);
	cout << P << endl;
	S = 0;
	for (j = 2; j <= 20; j++)

	{
		P = 1;
		for (i = j * j; i <= 400; i++)

		{
			P += i;

		}
		S *= j / (j * j + P);

	}
	cout << P << endl;
	P = 1;
	S = 0;
	for (j = 20; j >= 2; j--)

	{
		P = 1;
		for (i = 400; i >= j * j; i--)

		{
			P += i;

		}
		S *= j / (j * j + P);
		cout << P << endl;
		return 0;
	}