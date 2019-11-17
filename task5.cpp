#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, n, x, temp;
	cout << "Введите размерность массива: ";
	cin >> n;

	int *arr = new int[n];

	for (i = 0; i < n; i++)
	{
		cout << "Введите элемент массива: ";
		cin >> arr[i];
	}

	x = 0;

	for (i = 1; i < n; i++)
	{
		if (arr[x] > arr[i])
		{
			temp = arr[i];
			arr[i] = arr[x];
			arr[x] = temp;
			x = i;
		}
	}

	for (i = 0; i < n; i++)
	{
		cout << "Элемент массива: " << arr[i] << endl;
	}

	system("pause");
	return 0;
}
