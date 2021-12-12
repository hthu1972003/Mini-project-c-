#pragma once
#include "Employee.h"


class Manager :public Employee
{
protected:
	string m_year;
	string m_month;

public:
	Manager() {};
	Manager(int id, string name) :Employee{ id, name } {};
	void input() override;
	void show() override;

};


