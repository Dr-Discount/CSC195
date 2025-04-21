#pragma once  
#include <string>  
#include <iostream>  
#include <vector>  
#include "Animal.h"

class Database {  
public:  
std::vector<Animal*> objects;  

~Database(); // Destructor  
void Create(AnimalType type);
void DisplayAll();  
void Display(const std::string& name);  
void Display(AnimalType type);  
};