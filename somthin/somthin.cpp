#include "Point.h"
#include <iostream>
#include <vector>

using names_t = std::vector<std::string>;

namespace math {
	template<typename T1, typename T2>
	
	T1 max(T1 a, T2 b) {
		if (a > b) 		
			return a;
		else
			return b;
	}
}

void print(const names_t* names) {
	for (std::string name : *names) {
		std::cout << name << std::endl;
	}
}

int main() {
	Math::ipoint_t p1(23, 34);
	Math::ipoint_t p2(12, 10);
	Math::ipoint_t p3 = p1 - p2;
	
	std::cout << p1.getX() << " " << p1.getY() << std::endl;
	std::cout << p2.getX() << " " << p2.getY() << std::endl;
	std::cout << p3.getX() << " " << p3.getY() << std::endl;

	std::cout << math::max(6, 13) << std::endl;
	names_t names = { "John", "Doe", "Jane" };
	print(&names);
}
