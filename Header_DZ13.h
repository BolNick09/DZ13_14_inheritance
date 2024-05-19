#pragma once

#include <string>


namespace DZ13
{
	enum Position
	{
		DEVELOPER = 1,
		DESIGNER,
		BOSS
	};


	class Employee
	{
	protected:
		std::string name;
		int salary;
		Position position;
	public:
		Employee(const std::string& name, int salary, Position position) : name(name), salary(salary), position(position) {}

		void print();
	};

	class Developer : public Employee
	{
	public:
		Developer(const std::string& name) : Employee(name, 120000, Position::DEVELOPER) {}
	};

	class Designer : public Employee
	{
	public:
		Designer(const std::string& name) : Employee(name, 115000, Position::DESIGNER) {}
	};

	class Boss : public Employee
	{
	public:
		Boss(const std::string& name) : Employee(name, 420000, Position::BOSS) {}
	};
}

