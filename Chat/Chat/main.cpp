#include <iostream>
#include <vector>

#include "User.h"
#include "Funkc.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	short int a;
	std::string loginScan;
	std::string paswordScan;
	bool exit = true;
	std::cout << "����� ���������� � ���!" << std::endl;
	std:: vector <User> vectorUser;

	while (exit)
	{
		std::cout << "1)����� � ������� \n2)���������������� ������� \n3)�����" << std::endl;
		std::cin >> a;

		switch (a)
		{
		case 1:
			while (true)
			{
				std::cout << "������� �����: " << std::endl;
				std::cin >> loginScan;
				for (int i = 0; i < vectorUser.size(); i++)
				{
					if (vectorUser[i].getLogin() == loginScan)
					{
						std::cout << "������� ������: " << std::endl;
						std::cin >> paswordScan;
					}
				}
			}
		case 2:
			vectorUser.push_back(User());
			std::cout << "������ �� ������ ����� � �������." << std::endl;
			continue;
		case 3:
			std::cout << "�� ������ �������!" << std::endl;
			exit = false;
			break;
		default:
			std::cout << "�������� ��� �� �� ������ !" << std::endl;
			break;
		}
	}

}