#include "Cat.h"

void Cat::Read(std::ostream& ostream, std::istream& istream)
{
	Animal::Read(ostream, istream);
	ostream << "Enter hours slept per day: ";
	istream >> hoursSleptPerDay;
}

void Cat::Write(std::ostream& ostream)
{
	Animal::Write(ostream);
	ostream << "Hours slept per day: " << hoursSleptPerDay << "\n";
	ostream << " \n";
}
