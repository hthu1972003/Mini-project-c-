#include "Employee.h"

void Employee::show()
{
	cout << m_id << " " << m_name << " " << m_email << '\n';
}

void Employee::input()
{
	cout << "enter id: ";
	cin >> m_id;

	cin.ignore(100, '\n'); // ignore bo qua new line

	cout << "enter name: ";
	getline(cin, m_name);

	cout << "enter email: ";
	getline(cin, m_email);
}
