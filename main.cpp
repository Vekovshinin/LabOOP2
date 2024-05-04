#include <iostream>
#include <string>
#include <cmath>
#include "Pay.h"

using namespace std;

Pay make_pay() {
	string name;
	double salary;
	int bonus;
	cout << "������� ���: ";
	getline(cin, name);
	cout << "������� �����: ";
	cin >> salary;
	cout << "������� ������ � ��������� �� ������: ";
	cin >> bonus;
	Pay pay(name, salary, bonus);
	return pay;

}

int main() {
	system("chcp 1251 > null");
	Pay p1;
	p1.print();
	Pay p2("���������� ���� ����������", 250000, 30);
	p2.print();
	Pay p3;
	p3.setName("���� ���");
	p3.setSalary(30000000);
	p3.setBonus(200);
	cout << "���: " << p3.getName() << "��������: " << p3.getSalary() << "�����: " << p3.getBonus() << endl;
	Pay p4 = make_pay();
	p4.print();
}