#pragma once
#include <iostream>
#include <vector>
#include "User.h"


void entrance(std::string loginScan, std::string passwordScan, std::vector<User>& other)
{

	short int b;
	for (int i = 0; i < other.size(); i++)
	{
		if (other.size() == 0)
		{
			std::cout << "������������� ��� ���(" << std::endl;
			exit2 = false;
			break;
		}
		std::cout << "������� �����: " << std::endl;
		std::cin >> loginScan;

		if (other[i].getLogin() == loginScan)
		{
			std::cout << "������� ������: " << std::endl;
			std::cin >> passwordScan;

		}
		if (i == other.size())
		{
			std::cout << "������ ������������ �� ����������( \n1)���� ������ �����\n2)���� ������ ����������" << std::endl;
			std::cin >> b;
			if (b == 1) { break; }
			if (b > 2 || b < 1)
			{
				for (; b == 1 || b == 2;)
				{
					std::cout << "������� 1 ��� 2" << std::endl;
					std::cin >> b;
				}
			}
		}
		if (vectorUser.size() == 0)
		{
			std::cout << "������������� ��� ���(" << std::endl;
			exit2 = false;
			break;
		}
}

