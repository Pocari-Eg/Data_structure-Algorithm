//예제 3 : 연결 리스트에서 remove_if()를 이용한 조건부 원소 삭제

#include"Citizen.h"
int main()
{
	std::forward_list<citizen> citizens = {
		{"kim",22},{"Lee",25},{"Park",18}, {"Jin",16}
	};

	auto citizen_copy = citizens;

	std::cout << "전체 시민들 : ";
	for (const auto& c : citizens)
		std::cout << c << " ";

	std::cout << std::endl;

	citizens.remove_if([](const citizen& c) {

		return (c.age < 19);

		});
	std::cout <<"투표권이 있는 시민들 : ";
	for (const auto& c : citizens)
		std::cout << c << " ";

	std::cout << std::endl;


	citizen_copy.remove_if([](const citizen& c) {
		return (c.age != 18);
		});

	std::cout << "내년에 투표권이 생기는 시민들 : ";
	for(const auto &c : citizen_copy)
		std::cout << c << " ";

	std::cout << std::endl;
}