#pragma once
#include <iostream>

void f();

class Student {
public:
	Student() {}
	Student(std::string name) {
		m_name = name
	}

	void Write();

	std::string m_name;
};