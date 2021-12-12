#pragma once


#include "Employee.h"
#include <string>
class Programmer : public Employee
{
private:
	string m_programinglanguage;

public:
	Programmer() {};
	Programmer(int id, string name) :Employee{ id, name }
	{};
	virtual void show();
	virtual void input();
};

