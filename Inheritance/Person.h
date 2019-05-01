#pragma once
#include <vector>
#include <string>
#include <ctime>

class Person
{
public:
	Person (std::string name, bool dead, float finances = 0.0, Person* spouse = nullptr);
	~Person ();

	std::vector <Person*> parents_, children_;
	Person* spouse_;
	std::string name_;

	float finances_;
	bool dead_;
};

