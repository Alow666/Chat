#include <iostream>
#include <vector>

#include "User.h"
#include "Functions.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	short int a,b;
	std::string loginScan;
	std::string passwordScan;
	bool exit = true, exit2 = true;
	std::cout << "����� ���������� � ���!" << std::endl;
	std:: vector <User> vectorUser;

	while (exit)
	{
		std::cout << "1)����� � ������� \n2)���������������� ������� \n3)�����" << std::endl;
		std::cin >> a;

		switch (a)
		{
		case 1:
			while (exit2)
			{
				
				
				
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


