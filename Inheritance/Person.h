#pragma once
#include <vector>
#include <string>
#include <ctime>

class Person
{
public:
	Person (std::string name, time_t birth_date, time_t death_date, Person* spouse = nullptr);
	~Person ();

	void addParent (Person* parent);
	void addChild (Person* child);

protected:
	time_t birth_date_, death_date_;
	std::vector <Person*> parents_, children_;
	Person* spouse_;
	std::string name_;
};

