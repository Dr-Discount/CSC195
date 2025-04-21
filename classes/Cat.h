#pragma once
#include "Animal.h"

class Cat : public Animal {
public:
	Cat() {
		__super::type = AnimalType::CAT;
	}
	int hoursSleptPerDay = 17;
	void Read(std::ostream& ostream, std::istream& istream) override;
	void Write(std::ostream& ostream) override;
};
