#include <iostream>
#include <string>

using namespace std;

class Car;
class Person {
private:
    int age;
    string name;
public: 
    Person(string name) {
        this->name = name;
    }
   
    friend void info_car(Car& car, Person& person);

};

class Car {
private:
    string name;
public: 
    Car(string name) {
        this->name = name;
    }
    
    friend void info_car(Car& car, Person& person);
};

void info_car(Car& car, Person& person) {
    cout << "Человек с именем: " << person.name << " имеет машину " << car.name << endl;
}

int main()
{
    setlocale(LC_ALL, "RU");
    
    Car bmw("BMW");
    Person john("John");
    info_car(bmw, john); 

    return 0;
}

