#pragma once
#include <iostream>


class User
{
public:

	User();

	void getInfoUser();
	

	~User() = default;

private:

	std::string _pasword;
	std::string _login;
	std::string _name;
	std::string _surname;

};

