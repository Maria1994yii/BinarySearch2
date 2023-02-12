// FirstTraining.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int binSearch(int* arr, int size, int key);
int binerySearchRecursive(int* arr, int first, int last, int key);

int main()
{
	int size;
	int* arr;
	int result;
	int result_recursive;
	int key;

	std::cout << "size = ";
	std::cin >> size;

	std::cout << "key = ";
	std::cin >> key;


	arr = (int*)new int[size];


	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}

	result = binSearch(arr, size, key);
	result_recursive = binerySearchRecursive(arr, 0, size - 1, key);

	std::cout << "index is ";
	std::cout << result<<std::endl;

	std::cout << "index is ";
	std::cout << result_recursive << std::endl;

}


int binSearch(int* arr, int size, int key)
{ 
	int first = 0;
	int last = size - 1;
	int mid;

	while (first <= last)
	{
		mid = (first + last) / 2;
		if (arr[mid] < key)
		{
			first = mid + 1;
		}
		else if (arr[mid] > key)
		{
			last = mid - 1;
		}
		else {
			return mid;
		}
	}
}

int binerySearchRecursive(int* arr, int first, int last, int key)
{
	if (last < first) return -1;
	int mid;
	mid = (first + last) / 2;

	if (arr[mid] < key)
	{
		return  binerySearchRecursive(arr, mid + 1, last, key);
	}
	else if (arr[mid] > key)
	{
		return  binerySearchRecursive(arr, first, mid - 1, key);
	}
	else {
		return mid;
	}
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
