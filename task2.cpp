#include <iostream>

using namespace std;

int main()
{
	setlocale (0, "");
	int i, n, j;
	cout << "Введите размерность массива: ";
	cin >> n;

	double *a = new double[n];
	double *b = new double[n];

	for (i = 0; i < n; i++)
	{
		cout << "Введите элемент массива A: ";
		cin >> a[i];
	}

	double sum = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			sum = sum + a[j];
		}
		b[i] = sum / (i + 1);
		sum = 0;
	}

	for (i = 0; i < n; i++)
	{
		cout << "Элемент : " << b[i] << endl;
	}

	system("pause");
	return 0;
}
