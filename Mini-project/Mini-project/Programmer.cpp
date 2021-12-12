#include "Programmer.h"

void Programmer::show()
{
	Employee::show();
	cout << "I am programmer,I write code ... " << endl;

}

void Programmer::input()
{
	Employee::input();
	cout << "enter programinglanguage: ";
	getline(cin, m_programinglanguage);
}