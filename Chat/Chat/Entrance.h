#pragma once
#include <iostream>



class Entrance
{
private:

	std::string _loginScan;
	std::string _passwordScan;
	bool _access = false;
	int _index{};

public:

	Entrance() = default;
	 ~Entrance() = default;

	 void setSLogin(std::string a)
	{
		 _loginScan = a;
	}
	 void setSPassword(std::string a)
	{
		 _passwordScan = a;
	}
	 void setAccess(bool a)
	{
		 _access = a;
	}
	 void setIndex(int a)
	{
		_index = a;
	}

	 std::string getSLogin()
	{
		return _loginScan;
	}
	 std::string getSPassword()
	{
		return _passwordScan;
	}
	 bool getAccess()
	{
		return _access;
	}
	 int getIndex()
	{
		return _index;
	}




	 bool entranceLogin(std::vector<User>& other)
	{

		 int a = 1;
		while (true)
		{
			switch (a)
			{
			case 1:

				std::cout << "Введите логин: " << std::endl;
				std::cin >> _loginScan;

				for (int i = 0; i < other.size(); i++)
				{
					if (other[i].getLogin() == _loginScan)
					{
						_index = i;
						return true;
					}
				}
				std::cout << "Такого пользователя не существует(\n Хотите продолжить введите (1), если хотите выйти (0)."<< std::endl;
				std::cin >> a;
				continue;
			case 0:
				return false;
			default:
				std::cout << "Введите 1 или 0! " << std::endl;
				std::cin >> a;
				continue;
			}
		} 
	}

	 bool entrancePassword(std::vector<User>& other)
	{
		 int attempts = 6;
		for (int i = 0; i < 6; i++)
		{
			std::cout << "Введите пароль: " << std::endl;
			std::cin >> _passwordScan;

			if (other[_index].getPassword() == _passwordScan)
			{
				return true;
			}

			std::cout << "Неверный пароль! Попыток оталось:" << --attempts << std::endl;
		}
			std::cout << "Попытки закончились!" << std::endl;
			return false;
	};
};