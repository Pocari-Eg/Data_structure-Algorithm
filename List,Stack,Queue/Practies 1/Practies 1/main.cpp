//예제 1 : 동적 크기 배열 구현하기
#include"dynamic_array.h"

int main()
{
	int nStudents;
	std::cout << "1반 학생 수를 입력하세요 :";
	std::cin >> nStudents;

	dynamic_array<student> Class1(nStudents);
	for (int i = 0; i < nStudents; i++)
	{
		std::string name;
		int standard;

		std::cout << i + 1 << "번째 학생의 이름과 나이를 입력하세요 : ";
		std::cin >> name >> standard;
		Class1[i] = student{ name, standard };
	}

	try {

		Class1.at(nStudents) = student{ "john",8 };
	}
	catch(...){
		std::cout << "예외 발생!" << std::endl;

	}


	auto Class2 = Class1;
	std::cout << "1반을 복사하여 2반 생성 : " << Class2.to_string() << std::endl;

	auto Class3 = Class1+Class2;
	std::cout << "1반과 2반을 합쳐 3반 생성 : " << Class3.to_string() << std::endl;

	return 0;
}