#include <iostream>
using namespace std;
struct Person
{
	char name[32];
	int id;
};

int Square(int& i)
{
	i = i * i;
	return i;
}

int Double(int* i)
{
	*i = *i * 2;
	return *i;
}

int main()
{
	int num = 5;
	int& refNum = num;
	cout << "Original num: " << num << endl;
	refNum = 7;
	cout << "Changed num: " << num << endl;
	cout << "original number changed " << endl;
	cout << " " << endl;


	cout << "Address of original num: " << &num << endl;
	cout << "Address of reference num: " << &refNum << endl;
	cout << "The are the same " << endl;
	cout << " " << endl;

	Square(num);
	cout <<  num << endl;
	cout << " " << endl;
	
	int* pointer = nullptr;
	pointer = &num;
	cout << "Pointer: " << pointer << endl;
	cout << "Value of pointer: " << *pointer << endl;
	cout << "Address same as num " << endl;
	cout << " " << endl;

	Double(pointer);
	cout << "Pointer: " << pointer << endl;
	cout << "Value of pointer: " << *pointer << endl;
	cout << "The Value did change " << endl;
}
