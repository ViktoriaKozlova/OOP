#include "Person.h"
#include "Offical.h"
#include "Organization.h"


int main()
{
	SetConsoleCP(1251); SetConsoleOutputCP(1251);
	Person person;
	Person person1("Ivanov", "Ivan", "Ivanovich", "01.01.2002", "m", "Kyiv");
	Person person2(person);
	Person person3;
	Offical offical;
	Offical offical1("Ivanov", "Ivan", "Ivanovich", "01.01.2002", "m", "Kyiv", "Nure", "122", "student", 0, 3);
	Offical offical2(offical);
	Offical offical3;
	Person* p = new Offical("Ivanov", "Ivan", "Ivanovich", "01.01.2002", "m", "Lviv", "Nure", "122", "student", 0, 0);
	Organization<Offical> array(4);

	auto it = Organization<Offical>::iterator(array.begin());
	auto it1 = Organization<Offical>::iterator(array.begin());
	auto it2 = Organization<Offical>::iterator(array.end());
	Organization<Offical> array2(array);
	auto it3 = Organization<Offical>::iterator(array2.begin());
	int a;
	bool While = true;
	cout << "1 - клас Person" << endl;
	cout << "2 - клас Offical" << endl;
	cout << "3 - механізм пізнього зв'язування" << endl;
	cout << "4 - робота з масивом" << endl;
	cout << "5 - вихід" << endl;
	while (While) {
		cin >> a;
		switch (a)
		{
		case 1:
			cin >> person;
			cout << person;
			cout << endl << endl;	
			cout << endl << endl;
			objclass(person1);
			person2 = person1;
			objclass(person2);
			cout << endl << endl;
			person3("Ivanov", "Ivan", "Ivanovich", "01.01.2002", "m", "Lviv");
			cout << person3;
			person3.info();
			cout << endl << endl;
			person3 = person1;
			cout << person3;
			cout << endl << endl;
			cout << "1 - клас Person" << endl;
			cout << "2 - клас Offical" << endl;
			cout << "3 - механізм пізнього зв'язування" << endl;
			cout << "4 - робота з масивом" << endl;
			cout << "5 - вихід" << endl;
			break;
		case 2:
			
			cin >> offical;
			cout << offical;
			cout << endl << endl;
			objclass(offical1);
			cout << endl << endl;	
			offical2 = offical1;
			objclass(offical2);
			cout << endl << endl;	
			offical3("Ivanov", "Ivan", "Ivanovich", "01.01.2002", "m", "Lviv", "Nure", "122", "student", 0, 4);
			cout << offical3;
			offical3.info();
			offical3 = offical1;
			cout << offical3;
			cout << endl << endl;
			cout << "1 - клас Person" << endl;
			cout << "2 - клас Offical" << endl;
			cout << "3 - механізм пізнього зв'язування" << endl;
			cout << "4 - робота з масивом" << endl;
			cout << "5 - вихід" << endl;
			break;
		case 3:
			p->info();
			delete p;
			cout << endl << endl;
			cout << endl << endl;
			cout << "1 - клас Person" << endl;
			cout << "2 - клас Offical" << endl;
			cout << "3 - механізм пізнього зв'язування" << endl;
			cout << "4 - робота з масивом" << endl;
			cout << "5 - вихід" << endl;
			break;
		case 4:
			array[0] = offical;
			array[1] = offical1;
			array[2] = offical2;
			array[3] = offical3;
			cout << "Array: " << endl;
			cout << "array: " << it + 1;
			cout << endl << endl;
			cout << "2: " << it1 + 1;
			cout << endl << endl;
			cout << "1: " << it2 - 2;
			cout << endl << endl;
			cout << "2: " << it3 + 1 << endl;
			array.count_person(1);
			cout << endl << endl;
			cout << "1 - клас Person" << endl;
			cout << "2 - клас Offical" << endl;
			cout << "3 - механізм пізнього зв'язування" << endl;
			cout << "4 - робота з масивом" << endl;
			cout << "5 - вихід" << endl;
			break;
		case 5:
			While = false;
			break;
		default:
			cout << "error\n";
			While = false;
			break;
		}
	}
	return 0;





}