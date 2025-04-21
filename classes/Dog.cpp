#include "Dog.h"

void Dog::Read(std::ostream& ostream, std::istream& istream)
{	
	Animal::Read(ostream, istream);
	ostream << "Enter mood: ";
	istream >> mood;
}
void Dog::Write(std::ostream& ostream)
{
	Animal::Write(ostream);
	ostream << "Mood: " << mood << "\n";
	ostream << " \n";
}