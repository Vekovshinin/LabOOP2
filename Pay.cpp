#include "Pay.h"
#include <iostream>
#include <string>
using namespace std;
Pay::Pay() {
	name = "noname";
	salary = 0;
	bonus = 0;
	cout << endl << "Конструктор по умолчанию для объекта" << this << endl;
}

Pay::Pay(string name = "noname", double salary = 0, int bonus = 0) {
	this->name = name;
	this->salary = salary;
	this->bonus = bonus;
	cout << endl << "Конструктор с параметрами для объекта" << this << endl;
}

Pay::Pay(const Pay& other) {
	this->name = other.name;
	this->salary = other.salary;
	this->bonus = other.bonus;
	cout << endl << "Конструктор копирования для объекта" << this << endl;
}

Pay::~Pay() {
	cout << endl << "Деструктор для объекта" << this << endl;
}

string Pay::getName() { return this->name; }
void Pay::setName(string name) { this->name = name; }
double Pay::getSalary() { return this->salary; }
void Pay::setSalary(double salary) { this->salary; }
int Pay::getBonus() { return this->bonus; }
void Pay::setBonus(int bonus) { this->bonus; }

void Pay::print() {
	cout << endl << "ФИО: " << this->name << endl << "запрлата: " << this->salary << endl << "бонус: " << this->bonus;
}
