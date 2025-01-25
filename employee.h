#pragma once
using namespace System;
ref class employee
{
public:
	String^ name;
	String^ position;
	String^ salary;
	String^ bonus;

	String^ setsalary(String^ sal) {
		return sal;
	}
	String^ setsalary(String^ sal, String^ bonus) {
		double s = Convert::ToDouble(sal);
		double b = Convert::ToDouble(bonus);
		double salary = s + b;
		String^ c = Convert::ToString(salary);
		return c;
	}
};

