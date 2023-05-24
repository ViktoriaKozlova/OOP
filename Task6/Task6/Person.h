#pragma once
#include <iostream>
#include <Windows.h>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;

class Person
{
protected:
	string surname;
	string name;
	string midllename;
	string bithday;
	string sex; 
	string city;
public: 
	Person();
	Person(string surname, string name, string middlename, string bithday, string sex, string city);
	Person(const Person& person);
	void Setsurname(string surname);
	void Setname(string name);
	void Setmiddlename(string midllename);
	void Setbithday(string bithday);
	void Setsex(string sex);
	void Setcity(string city);
	string Getsurname();
	string Getname();
	string Getmiddlename();
	string Getbithday();
	string Getsex();
	string Getcity();
	friend void objclass(Person& person);
	Person& operator()(string surname, string name, string middlename, string bithday, string sex, string city);
	Person& operator =(Person& person);
	friend ostream& operator<<(ostream& os, const Person& pperson);
	friend istream& operator>>(istream& is, Person& person);
	virtual void info();
	virtual ~Person();

};