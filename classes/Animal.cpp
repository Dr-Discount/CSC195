#include "Animal.h"

void Animal::Read(std::ostream& ostream, std::istream& istream)
{
	ostream << "Enter name: ";
	istream >> name;
	ostream << "Enter lifespan: ";
	istream >> lifespan;
}
void Animal::Write(std::ostream& ostream)
{
	ostream << "Name: " << name << "\n";
	ostream << "Lifespan: " << lifespan << "\n";
}
