#include "Person.h"



Person::Person (std::string name, time_t birth_date, time_t death_date, Person* spouse) :
	birth_date_ (birth_date),
	death_date_ (death_date),
	parents_ (),
	children_ (),
	spouse_ (spouse),
	name_ (name)
{
}



Person::~Person ()
{
}

void Person::addParent (Person* parent)
{
	parents_.push_back (parent);
}

void Person::addChild (Person* child)
{
	children_.push_back (child)
}
