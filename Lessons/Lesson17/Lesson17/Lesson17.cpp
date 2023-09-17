#include <iostream>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
		setlocale(LC_ALL, "RU");

		string str1 = "Hello";
		string str2 = "World";

		str1.append(str2);
		str1.pop_back();
		str1.push_back('!');
		str1.resize(5);
		
		cout << str1 << " - "  << str1.length() << endl;

		cout << pow(2, 3) << endl;
		cout << abs(-3) << endl;
		cout << cos(1) << endl;
		cout << cos(1) << endl;
		cout << sqrt(16) << endl;
		cout << ceil(1.78f) << endl;
		cout << floor(1.99f) << endl;
		cout << round(1.45f) << " или " << round(1.55f) << endl;

		return 0;
}
