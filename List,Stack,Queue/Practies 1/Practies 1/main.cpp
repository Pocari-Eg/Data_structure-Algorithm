//���� 1 : ���� ũ�� �迭 �����ϱ�
#include"dynamic_array.h"

int main()
{
	int nStudents;
	std::cout << "1�� �л� ���� �Է��ϼ��� :";
	std::cin >> nStudents;

	dynamic_array<student> Class1(nStudents);
	for (int i = 0; i < nStudents; i++)
	{
		std::string name;
		int standard;

		std::cout << i + 1 << "��° �л��� �̸��� ���̸� �Է��ϼ��� : ";
		std::cin >> name >> standard;
		Class1[i] = student{ name, standard };
	}

	try {

		Class1.at(nStudents) = student{ "john",8 };
	}
	catch(...){
		std::cout << "���� �߻�!" << std::endl;

	}


	auto Class2 = Class1;
	std::cout << "1���� �����Ͽ� 2�� ���� : " << Class2.to_string() << std::endl;

	auto Class3 = Class1+Class2;
	std::cout << "1�ݰ� 2���� ���� 3�� ���� : " << Class3.to_string() << std::endl;

	return 0;
}