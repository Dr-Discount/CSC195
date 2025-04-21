#pragma once  
#include "Animal.h"

class Dog : public Animal {  
public:  
	Dog() {
		__super::type = AnimalType::DOG;
	}
	std::string mood = "Happy";
	void Read(std::ostream& ostream, std::istream& istream) override;
	void Write(std::ostream& ostream) override;
};