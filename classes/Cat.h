#pragma once

class Cat
{
private:
	string name;
	int age;
public:
	Cat(string name, int age): name(name), age(age) {};
	void speak();
	void jump();
	int getAge();
	string getName();
	void setAge(int age);
	void setName(string name);
};

