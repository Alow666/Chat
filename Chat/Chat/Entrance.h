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

				std::cout << "������� �����: " << std::endl;
				std::cin >> _loginScan;

				for (int i = 0; i < other.size(); i++)
				{
					if (other[i].getLogin() == _loginScan)
					{
						_index = i;
						return true;
					}
				}
				std::cout << "������ ������������ �� ����������(\n ������ ���������� ������� (1), ���� ������ ����� (0)."<< std::endl;
				std::cin >> a;
				continue;
			case 0:
				return false;
			default:
				std::cout << "������� 1 ��� 0! " << std::endl;
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
			std::cout << "������� ������: " << std::endl;
			std::cin >> _passwordScan;

			if (other[_index].getPassword() == _passwordScan)
			{
				return true;
			}

			std::cout << "�������� ������! ������� �������:" << --attempts << std::endl;
		}
			std::cout << "������� �����������!" << std::endl;
			return false;
	};
};