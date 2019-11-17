#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, n, temp;
	cout << "Введите размерность массивов: ";
	cin >> n;

	int *a = new int[n];
	int *b = new int[n];

	for (i = 0; i < n; i++)
	{
		cout << "Введите элемент массива A: ";
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << "Введите элемент массива B: ";
		cin >> b[i];
	}

	for (int i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}

	for (int i = 0; i < n; i++)
	{
		cout << "Массив A: " << a[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Массив B: " << b[i] << endl;
	}

	system("pause");
	return 0;
}
