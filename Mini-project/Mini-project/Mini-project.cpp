#include <iostream>
#include <string>
#include "Employee.h"
#include "Programmer.h"
#include "Testter.h"
#include <vector>
#include "Manager.h"
#include <fstream>
#include "Utils.h"


using namespace std;

void showMenu() {
    cout << "-----------------------Menu----------------------" << '\n';
    cout << "1. Add employee" << '\n';
    cout << "2. Edit employee" << '\n';
    cout << "3. Remove employee" << '\n';
    cout << "4. Sort employee by name" << '\n';
    cout << "5. Show all employees" << '\n';
    cout << "0. Exit" << '\n';
    cout << "--------------------------------------------------" << '\n';
    cout << "Please choose: ";
}

void showAll(vector<Employee*> list) {
    for (auto e : list) {
        e->show();
    }
}


int main()
{
    /*Employee* e{ new Employee() };*/

  /* e->input();
   e->show();*/

   /*   Employee* p{ new Programmer() };
      Employee* t{ new Testter() };
      Employee* m{ new Manager() };*/
      /*
      p->input();

      p->show();
      Employee* t{ new Testter() };
      t->input();
      t->show();*/

      /*   vector<int> numbers{ 1, 2, 3, 4, 5 };
         cout << numbers[0] << '\n';
         cout << numbers.at(1) << endl;
         numbers.push_back(100);
         cout << numbers.at(5);
      */

      /* vector<Employee*> list{};*/


       /*list.push_back(p);
       list.push_back(t);
       list.push_back(m);
       for (int i = 0; i < list.size(); i++) {
           list.at(i)->input();
       }
       for (Employee* e : list) {
           e->show();
       }*/


    vector<Employee*> list{};
    ifstream filein{ "input.txt" };
    //doc du lieu tu file.
    string line;
    while (getline(filein, line)) {
        auto vec = Utils::split(line, ",");

        if (vec.at(0) == "1") {
            list.push_back(new Programmer(stoi(vec.at(1)), vec.at(2)));
        }
        else if (vec.at(0) == "2") {
            list.push_back(new Testter(stoi(vec.at(1)), vec.at(2)));
        }
        else if (vec.at(0) == "3") {
            list.push_back(new Manager(stoi(vec.at(1)), vec.at(2)));
        }
    }

    //
    /*for (Employee* e : list) {
        e->show();
    }*/

    int choose;
    bool exit{ false };

    showMenu();
    while (true) {

        cin >> choose;
        switch (choose)
        {
        case 1:
            cout << "Add employee" << '\n';
            break;
        case 2:
            cout << "Edit employee" << '\n';
            break;
        case 3:
            cout << "Remove employee" << '\n';
            break;
        case 4:
            cout << "Sort by name" << '\n';
            break;
        case 5:
            cout << "Show all employees" << '\n';
            showAll(list);
            break;
        case 0:
            cout << "Exit" << '\n';
            exit = true;
            break;
        }
        if (exit) {
            break;
        }
        showMenu();
    }


}
/*
quản lí nhân viên
- có danh sách các nhân viên
- xem, sửa thông tin của các nhân viên
- thêm, xóa nhân viên
- sắp xếp tìm kiếm nhân viên(tên, lương,...)
*/

/*
-- nhân viên: Programming, Tester, Manager, ... => Base class Employee
-- list (array) -> vector<Employee*>
-- giao diện: Consonle, Menu
*/

/*
-- Employee: id, name, email, phone,...// doWork()
-- Subclass: Programmer, Tester, Manager (public: Employe)
*/

//30/11/2021 : getters , testter, subclass

//tester : category (database, network....)

//manager : year , yoe...