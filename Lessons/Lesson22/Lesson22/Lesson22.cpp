#include <iostream>
#include <string>

using namespace std;

class Person;

class Dog {
private:
	int health = 100;
public: 
	friend class Person;
};

class Person {
public:

	void Damage(Dog& dog) {
		dog.health -= 20;
		cout << "Health of animal: " << dog.health << endl;
	}

	void Heal(Dog& dog) {
	dog.health += 10;
	cout << "Health of animal: " << dog.health << endl;
	}


	void Kill(Dog& dog) {
	dog.health = 0;
	cout << "Health of animal: " << dog.health << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "RU");

	Dog skuby;
	Person alex;
	alex.Damage(skuby);
	alex.Damage(skuby);
	alex.Heal(skuby);
	alex.Heal(skuby);	
	alex.Heal(skuby);
	alex.Kill(skuby);

	return 0;
}

