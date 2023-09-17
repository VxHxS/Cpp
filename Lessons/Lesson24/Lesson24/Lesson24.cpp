#include <iostream>
#include <string>

using namespace std;

template <typename T, typename T2>
void print_arr(T* arr, int len) {
	for (T2 i = 0; i < len; i++)
		cout << *(arr + i) << " ";

	cout << endl;
}




int main()
{
	setlocale(LC_ALL, "RU");

	int arr1[] = {5, 6, 3, 2, 0, -4};
	print_arr<int, int>(arr1, 6);

	float arr2[] = { 5.34f, 6.01f, 3.23f };
	print_arr<float, int>(arr2, 3);

	return 0;
}

