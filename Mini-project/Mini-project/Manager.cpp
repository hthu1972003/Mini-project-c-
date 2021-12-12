#include "Manager.h"

void Manager::input()
{
	Employee::input();
	cout << "enter year: ";
	cin >> m_year;
	cout << "enter month: ";
	cin >> m_month;

}

void Manager::show()
{
	Employee::show();
	cout << "I am Manager, I have been working" << endl;

}