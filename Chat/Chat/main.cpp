#include <iostream>
#include "User.h"
#include "Funkc.h"

static int id{};

int main()
{
	setlocale(LC_ALL, "Rus");
	short int a;
	std::cout << "����� ���������� � ���!" << std::endl;

	while (true)
	{
		std::cout << "1)����� � ������� \n2)���������������� ������� \n3)�����" << std::endl;
		std::cin >> a;

		switch (a)
		{
		case 1:


		case 2:

			std::cout << "������ �� ������ ����� � �������." << std::endl;
			continue;
		default:
			break;
		}
	}

}