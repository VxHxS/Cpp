#include <iostream>
#

using namespace std;


template <class T, class T2>
class Arrays {
private:
	int len;
	T* arr;
public: 
	Arrays(T* a, T2 len) {
		this->len = len;
		arr = new T[len];
		for (int i = 0; i < len; i++)
			*(arr + i) = *(a + i);
	}

	void get() {
		for (int i = 0; i < len; i++)
			cout << *(arr + i) << " ";

		cout << endl;

	}

	~Arrays() {
		delete[] arr;
	}
};

int main()
{
	setlocale(LC_ALL, "RU");

	int arr1[] = { 3, 6, 3 };
	Arrays<int, int> obj1(arr1, 3);
	obj1.get();

	float arr2[] = { 3.5f, 6.2f, 3.001f };
	Arrays<float, int> obj2(arr2, 3);
	obj1.get();

	return 0;
}

