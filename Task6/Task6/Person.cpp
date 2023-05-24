#include "Person.h"


Person::Person()
{
	
};
Person::Person(string surname, string name, string middlename, string bithday, string sex, string city)
{
	Setsurname(surname);
	Setname(name);
	Setmiddlename(middlename);
	Setbithday(bithday);
	Setsex(sex);
	Setcity(city);

};
Person::Person(const Person& person)
{
	surname = person.surname;
	name = person.name;
	midllename = person.midllename;
	bithday = person.bithday;
	sex = person.sex;
	city = person.city;
};
void Person::Person::Setsurname(string surname)
{
	this->surname = surname;

};
void Person::Setname(string name)
{
	this->name = name;
};
void Person::Setmiddlename(string midllename) 
{	
	this->midllename = midllename;	
};
void Person::Setbithday(string bithday)
{
	this->bithday = bithday;
};
void Person::Setsex(string sex) 
{
	this->sex = sex;
};
void Person::Setcity(string city)
{
	this->city = city;
};
string Person::Getsurname()
{
	cout << "surname : " << surname << endl;
	return surname;
};
string Person::Getname()
{
	cout << "name : " << name << endl;
	return name;
};
string Person::Getmiddlename()
{
	cout << "midllename : " << midllename << endl;
	return midllename;
};
string Person::Getbithday()
{
	cout << "bithday : " << bithday << endl;
	return bithday;	
};
string Person::Getsex()
{
	cout << "sex : " << sex << endl;;
	return sex;
};
string Person::Getcity()
{
	cout << "city : " << city << endl;
	return city;
};


void objclass(Person& p)
{
	cout << "Class Person: " << endl;
	p.Getsurname();
	p.Getname();
	p.Getmiddlename();
	p.Getbithday();
	p.Getsex();
	p.Getcity();
};
Person& Person::operator()(string surname, string name, string middlename, string bithasy, string sex, string city)
{
	this->Setsurname(surname);
	this->Setname(name);
	this->Setmiddlename(middlename);
	this->Setbithday(bithday);
	this->Setsex(sex);
	this->Setcity(city);
	return *this;
};
Person& Person::operator =(Person& person)
	{
	surname = person.surname;
	name = person.name;
	midllename = person.midllename;
	bithday = person.bithday;
	sex = person.sex;
	city = person.city;
	return *this;
	};
ostream& operator<<(ostream& os, const Person& person)
{
	cout << "surname : " << person.surname << endl;
		cout <<"name : " << person.name << endl;
		cout << "midllename : " << person.midllename << endl;;
		cout << "bithday : " << person.bithday << endl;
		cout << "sex : " << person.sex << endl;;
		cout << "city : " << person.city << endl;
		return os;
};
istream& operator>>(istream& is, Person& person)
	{
	cout << "surname : "  << endl;
	cin>> person.surname;
	cout << "name : " << endl;
	cin >> person.name;
	cout << "midllename : " << endl;
	cin >> person.midllename;
	cout << "bithday : " << endl;
	cin >> person.bithday;
	cout << "sex : " << endl;
	cin >> person.sex;
	cout << "city : " << endl;
	cin >> person.city;
	return is;
	};

 void Person::info()
{
	 Getsurname();
};
 Person::~Person()
 {
	 cout << "Екзмепляр класу Персона знищено" << endl;
 };