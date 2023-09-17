#include <iostream>
#include <string>

using namespace std;

class Building {
private:
	int year;
	string type;

public:
	Building(int y, string t) {
		this->set_data(y, t);
	}

	Building(int y) {
		this->year = y;
		cout << "Данные установлены" << endl;
	}

	Building() {
		
	}
	
	void set_data(int year, string type) {
		this->year = year;
		this->type = type;
	}

	void get_info() {
		cout << "Type: " << this->type << ". year: " << year << endl;
	}

	~Building() {
		cout << "Delete object" << endl;
}
};



int main()
{
	setlocale(LC_ALL, "RU");

	Building school(2000, "Школа");
	school.get_info();

	Building house(2010);
	house.get_info();

	return 0;
}

