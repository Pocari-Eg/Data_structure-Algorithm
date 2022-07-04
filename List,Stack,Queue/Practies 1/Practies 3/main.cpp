//���� 3 : ���� ����Ʈ���� remove_if()�� �̿��� ���Ǻ� ���� ����

#include"Citizen.h"
int main()
{
	std::forward_list<citizen> citizens = {
		{"kim",22},{"Lee",25},{"Park",18}, {"Jin",16}
	};

	auto citizen_copy = citizens;

	std::cout << "��ü �ùε� : ";
	for (const auto& c : citizens)
		std::cout << c << " ";

	std::cout << std::endl;

	citizens.remove_if([](const citizen& c) {

		return (c.age < 19);

		});
	std::cout <<"��ǥ���� �ִ� �ùε� : ";
	for (const auto& c : citizens)
		std::cout << c << " ";

	std::cout << std::endl;


	citizen_copy.remove_if([](const citizen& c) {
		return (c.age != 18);
		});

	std::cout << "���⿡ ��ǥ���� ����� �ùε� : ";
	for(const auto &c : citizen_copy)
		std::cout << c << " ";

	std::cout << std::endl;
}