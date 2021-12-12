#pragma once

#include <iostream>
#include <string>

using namespace std;

class Employee
{
protected:
	int m_id{ 0 };
	string m_name;
	string m_email;
	string m_phone;

public:
	//constructor
	Employee() {};

	Employee(int id, string name)
		: m_id{ id }, m_name{ name }
	{}
	//
	virtual void show();

	virtual void input();

	//gettesr, setters

};

