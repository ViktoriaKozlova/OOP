#pragma once
#include <iostream>
#include <fstream>
#include "Offical.h"
using namespace std;
template <typename Offical>
class Organization
{
	Offical* arr;
	int n1;
public:
	class iterator;

	Organization(int n) : n1(n)
	{
		arr = new Offical[n];
	}
	
	Offical& operator[](const int& n)
	{
		if (n > 0 && n < n1)
		{
			return arr[n];
		}
		return arr[0];
	}
	iterator begin() 
	{
		return arr;
	}
	iterator end()
	{
		return arr + n1;
	}

	void count_person( int n)
	{
		int count = 0;
		for (int i = 0; i < n1; i++)
		{
if (arr[i].experience >= n)
		{
			count++;
		}
		}
		

		cout << "count: " << count << endl;
	}
	
	friend ostream& operator<<(ostream& os, const Organization<Offical>& n);
	class iterator 
	{
		Offical* pn;
	public:
		iterator(Offical* first) : pn(first)
		{}
		Offical& operator +(int n)
		{
			return *(pn + n);
		}
		Offical& operator-(int n)
		{
			return *(pn - n);
		}

		Offical& operator++(int)
		{
			return *pn++;
		}
		Offical& operator--(int)
		{
			return *pn--;
		}
		Offical& operator++()
		{
			return *++pn;
		}
		Offical& operator--()
		{
			return *--pn;
		}
		bool operator !=(const iterator& it)
		{
			return pn != it.pn;
		}
		bool operator ==(const iterator& it)
		{
			return pn == it.pn;
		}
		Offical& operator*()
		{
			return *pn;
		}
	};
};
template <typename Offical>
ostream& operator <<(ostream& os, const Organization<Offical>& n)
{
	os << Organization<Offical>::array[n];
	return os;
}