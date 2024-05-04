#pragma once
#include <string>

using namespace std;

class Pay {
private:
	string name;
	double salary;
	int bonus;
public:
	Pay();
	Pay(string, double, int);
	Pay(const Pay&);
	~Pay();
	string getName();
	void setName(string);
	double getSalary();
	void setSalary(double);
	int getBonus();
	void setBonus(int);
	void print();
};