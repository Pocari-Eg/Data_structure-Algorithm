#include"singly_ll.h"
using namespace std;
int main()
{
	singly_ll sll = { 1,2,3 };
	sll.push_front(0);

	cout << "ù ��° ����Ʈ : ";
	for (auto i : sll)
		cout << i << " ";
	cout << endl;

	auto sll2 = sll;
	sll2.push_front(-1);
	cout << "ù ��° ����Ʈ�� ������ �� �� �տ� -1�� �߰� : ";
	for (auto i : sll2)
		cout << i << ' ';
	cout << endl;

	cout << "���� ���� �� ù ��° ����Ʈ : ";

	for (auto i : sll)
		cout << i << ' ';
	cout << endl;
}