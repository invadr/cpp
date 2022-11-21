#include <iostream>
#include "Cat.h"

using namespace std;

void Cat::speak()
{
	cout << "WOOF!\n";
}

void Cat::jump()
{
	cout << "Jumping to top of Bookcase" << endl;
}

void Cat::setName(string name) 
{
	this->name = name;
}

void Cat::setAge(int age) 
{
	this->age = age;
}

int Cat::getAge()
{
	return age;
}

string Cat::getName()
{
	return name;
}