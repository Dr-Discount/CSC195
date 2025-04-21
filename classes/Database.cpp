#include "Database.h"  
#include "Cat.h" 
#include "Dog.h"  

void Database::Create(AnimalType type) {
Animal* obj = nullptr;  
switch (type)  
{  
case AnimalType::CAT:  
	obj = new Cat();  
	break;  
case AnimalType::DOG:  
	obj = new Dog();  
	break;  
default:  
	std::cout << "Unknown animal type.\n";  
	return;  
}  
obj->Read(std::cout, std::cin);  
objects.push_back(obj);  
}  

void Database::DisplayAll() {
	for (Animal* obj : objects) {
		obj->Write(std::cout);
	}
}

void Database::Display(const std::string& name)
{
	for (Animal* obj : objects)
	{
		if (obj->GetName() == name)
		{
			obj->Write(std::cout);
		}
	}
}

void Database::Display(AnimalType type)
{
	for (Animal* obj : objects)
	{
		if (obj->GetType() == type)
		{
			obj->Write(std::cout);
		}
	}
}

Database::~Database() {  
	for (Animal* obj : objects)  {  
		delete obj;  
	}  
}

