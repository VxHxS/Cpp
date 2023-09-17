#include <iostream>
#include <string>

using namespace std;

class Building {
private:
	int year;
	string type;
public: 
	void set_data(int y, string t) {
		year = y;
		type = t;
	}
	
	void get_info() {
		cout << "Type: " << type << ". year: " << year << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "RU");

	Building school;
	/*school.type = "Школа";
	school.year = 2000;*/
	school.set_data(2000, "Школа");
	school.get_info();

	Building house;
	/*school.type = "Дом";
	school.year = 2010;*/
	house.set_data(2010, "Дом");
	house.get_info();

	return 0;
}

