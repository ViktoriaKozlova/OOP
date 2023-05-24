#include "Offical.h"

Offical::Offical()
{
}
Offical::Offical(string surname, string name, string middlename, string bithday, string sex, string city
	, string organization, string specialty, string position, int salary, int experience)
{
	Setsurname(surname);
	Setname(name);
	Setmiddlename(middlename);
	Setbithday(bithday);
	Setsex(sex);
	Setcity(city);
	Setorganization(organization);
	Setspecialty(specialty);
	Setposition(position);
	Setsalary(salary);
	Setexperience(experience);

}
Offical::Offical(const Offical& offical)
{
	surname = offical.surname;
	name = offical.name;
	midllename = offical.midllename;
	bithday = offical.bithday;
	sex = offical.sex;
	city = offical.city;
organization = offical.organization;
specialty = offical.specialty;
position = offical.position;
salary = offical.salary;
experience = offical.experience;

}
void Offical::Setorganization(string organization)
{
	this->organization = organization;
}
void Offical::Setspecialty(string specialty)
{
	this->specialty = specialty;
}
void Offical::Setposition(string positio)
{
	this->position = position;
}
void  Offical::Setsalary(int salary)
{
	this->salary = salary;
}
void Offical::Setexperience(int experience)
{
this->experience = experience;
}
string Offical::Getorganization()
{
cout << "organization: " << organization << endl;
return organization;
}
string Offical::Getspecialty()
{
	cout << "	specialty : " << specialty << endl;
	return specialty;
};
string Offical::Getposition()
{
	cout << "	position : " << position << endl;
	return position;
}
int Offical::Getsalary()
{	
	cout << "	salary : " << salary << endl;
	return salary;
}
int Offical::Getexperience()
{
		cout << "	experience : " << experience << endl;
		return experience;
}
void  objclass(Offical& offical)
{
	cout << "Class Offical: " << endl;
	offical.Getsurname();
	offical.Getname();
	offical.Getmiddlename();
	offical.Getbithday();
	offical.Getsex();
	offical.Getcity();
	offical.Getorganization();
	offical.Getposition();
	offical.Getspecialty();
	offical.Getsalary();
	offical.Getexperience();
}
Offical& Offical:: operator()(string surname, string name, string middlename, string bithday, string sex, string city
	, string organization, string specialty, string position, int salary, int experience)
{
	this->Setsurname(surname);
	this->Setname(name);
	this->Setmiddlename(middlename);
	this->Setbithday(bithday);
	this->Setsex(sex);
	this->Setcity(city);
	this->Setorganization(organization);
	this->Setspecialty(specialty);
	this->Setposition(position);
	this->Setsalary(salary);
	this->Setexperience(experience);
	return *this;
}
Offical& Offical:: operator =(Offical& offical)
{
	surname = offical.surname;
	name = offical.name;
	midllename = offical.midllename;
	bithday = offical.bithday;
	sex = offical.sex;
	city = offical.city;
	organization = offical.organization;
	specialty = offical.specialty;
	position = offical.position;
	salary = offical.salary;
	experience = offical.experience;
	return *this;
}
ostream& operator<<(ostream& os, const Offical& offical)
{
	cout << "surname : " << offical.surname << endl;
	cout << "name : " << offical.name << endl;
	cout << "midllename : " << offical.midllename << endl;;
	cout << "bithday : " << offical.bithday << endl;
	cout << "sex : " << offical.sex << endl;;
	cout << "city : " << offical.city << endl;
	cout << "organization: " <<  offical.organization<< endl;
	cout << "specialty : " <<  offical.specialty<< endl;
	cout << "position : " <<  offical.position<< endl;
cout << "salary : " << offical.salary<< endl;
cout << "experience : " <<  offical.experience<< endl;
	
	return os;
 }
 istream& operator>>(istream& is, Offical& offical)
 {
	 cout << "surname : " << endl;
	 cin >> offical.surname;
	 cout << "name : " << endl;
	 cin >> offical.name;
	 cout << "midllename : " << endl;
	 cin >> offical.midllename;
	 cout << "bithday : " << endl;
	 cin >> offical.bithday;
	 cout << "sex : " << endl;
	 cin >> offical.sex;
	 cout << "city : " << endl;
	 cin >> offical.city;
	 cout << "organization: " << endl;
	 cin >> offical.organization;
	 cout << "specialty : " <<  endl;
	 cin >> offical.specialty;
	 cout << "position : " <<  endl;
	 cin >> offical.position;
	 cout << "salary : " <<  endl;
	 cin >> offical.salary;
	 cout << "experience : " << endl;
	 cin >> offical.experience;

	 return is;
}

void Offical::info()
{
	Getorganization();
}
Offical:: ~Offical()
{
	cout << "≈кзмепл€р класу Offical знищено" << endl;
}