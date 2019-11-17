#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, n, lod;
	cout << "Введите размерность массива: ";
	cin >> n;
	lod = 0;

	int *a = new int[n];

	for (i = 0; i < n; i++)
	{
		cout << "Введите элемент массива: ";
		cin >> a[i];
		if (a[i] % 2 == 1) lod = a[i];
	}

	for (i = 0; i < n; i++)
	{
		if (a[i] % 2 == 1)
		{ 
			a[i] = a[i] + lod;
		}
		cout << "Элемент массива: " << a[i] << endl;
	}

	system("pause");
	return 0;
}
