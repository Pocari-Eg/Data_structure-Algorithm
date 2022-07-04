#pragma once
#include<string>
#include<iostream>
#include<forward_list>

struct citizen
{

	std::string name;
	int age;
};

std::ostream& operator<<(std::ostream& os, const citizen& c)
{
	return (os << "[" << c.name << ", " << c.age << "]");
}