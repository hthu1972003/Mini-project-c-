#pragma once

#include "Employee.h"
class Testter :public Employee
{
protected:
	string m_testcode;

public:
	Testter() {};
	Testter(int id, string name) :Employee{ id, name }
	{};
	void show() override;
	void input() override;
};




