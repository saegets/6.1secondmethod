#include <iostream>
#include <cmath>
#include <iomanip>
#include <time.h>

using namespace std;
void Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
}

int Num(int* a, const int size, int i, int number)
{
	if (a[i] < 0 || a[i] % 2 == 1)
		number++;
	if (i < size - 1)
		return Num(a, size, i + 1, number);
	else
		return number;
}

int Sum(int* a, const int size, int i, int S)
{
	if (a[i] < 0 || a[i] % 2 == 1)
		S += a[i];
		if (i < size - 1)
			return Sum(a, size, i + 1, S);
		else
		return S;
}

void Print(int* a, const int size, int i)
{
	if (i == 0)
	{
		cout << "a[24]={";
	}
	cout << setw(4) << a[i] << ",";
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << "} \n number= " << Num(a, 24, 0, 0) << "\n sum = " << Sum(a, size, 0, 0) <<  endl;
}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 24;
	int a[n];
	int Low = -50;
	int High = 15;
	int k = 0;
	Create(a, n, Low, High, 0);
	Num(a, n, 0, k);
	Sum(a, n, 0, 0);
	Print(a, n, 0);

	
	return 0;
}
