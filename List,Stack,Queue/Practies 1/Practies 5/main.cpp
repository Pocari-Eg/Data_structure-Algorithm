#include"singly_ll.h"
using namespace std;
int main()
{
	singly_ll sll = { 1,2,3 };
	sll.push_front(0);

	cout << "첫 번째 리스트 : ";
	for (auto i : sll)
		cout << i << " ";
	cout << endl;

	auto sll2 = sll;
	sll2.push_front(-1);
	cout << "첫 번째 리스트를 복사한 후 맨 앞에 -1를 추가 : ";
	for (auto i : sll2)
		cout << i << ' ';
	cout << endl;

	cout << "깊은 복사 후 첫 번째 리스트 : ";

	for (auto i : sll)
		cout << i << ' ';
	cout << endl;
}