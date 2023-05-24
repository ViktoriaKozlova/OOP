#pragma once
#include "Person.h"

class Offical : public Person
{
protected: 
	string organization;
	string specialty;
	string position;
	int salary;
	
public:
	int experience;
	Offical();
	Offical(string surname, string name, string middlename, string bithday, string sex, string city
		, string organization, string specialty, string position, int salary, int experience);
	Offical(const Offical& offical);
	void Setorganization(string organization);
	void Setspecialty(string specialty);
	void Setposition(string positio);
	void Setsalary(int salary);
	void Setexperience(int experience);
	string Getorganization();
	string Getspecialty();
	string Getposition();
	int Getsalary();
	int Getexperience();
	friend void objclass(Offical& offical);
	Offical& operator()(string surname, string name, string middlename, string bithday, string sex, string city
		, string organization, string specialty, string position, int salary, int experience);
	Offical& operator =(Offical& offical);
	friend ostream& operator<<(ostream& os, const Offical& offical);
	friend istream& operator>>(istream& is, Offical& offical);
	void info()override;
	virtual ~Offical();
};