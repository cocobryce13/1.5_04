#include <iostream>
#include<windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int arr[] = { 5, 3, 6, 7, 1, 9, 2, 4, 8, 10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	bool swapped = false;

	std::cout << "Массив до сортировки: ";

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;

	do
	{
		swapped = false;
		for (int i = 1; i < size; i++)
		{
			if (arr[i - 1] > arr[i])
			{
				int temp = arr[i - 1];
				arr[i - 1] = arr[i];
				arr[i] = temp;
				swapped = true;
			}
		}
	} while (swapped);

	std::cout << "Массив после сортировки: ";

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;
}