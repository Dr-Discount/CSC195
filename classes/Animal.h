#pragma once  
#include <string>  
#include <iostream>  
#include "Animal.h"

enum class AnimalType {  
   CAT,  
   DOG,  
   Bird  
};  

class Animal {  
public:  
   AnimalType type = AnimalType::Bird;
   std::string name;  
   std::string lifespan; 

   virtual void Read(std::ostream& ostream, std::istream& istream);  
   virtual void Write(std::ostream& ostream);  
   AnimalType GetType() const { return type; }
   std::string GetName() const { return name; }

};