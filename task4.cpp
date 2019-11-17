#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, n, min = 0, max = 0;
	cout << "Введите размерность массиа: ";
	cin >> n;

	int *arr = new int[n];

	for (i = 0; i < n; i++)
	{
		cout << "Введите элемент: ";
		cin >> arr[i];
		min = arr[i] < arr[min] ? i : min;
		max = arr[i] > arr[max] ? i : max;
	}

	if (min < max)
	{ 
		for (i = min + 1; i < max; i++)
		{
			arr[i] = 0;
		}
	}
	else for (i = max + 1; i < min; i++)
	{
		arr[i] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		cout << "Элемент: " << arr[i] << endl;
	}

	system("pause");
	return 0;
}
