//���� 4 : �پ��� �ݺ��ڿ��� �̵��ϱ�

#include<iostream>
#include<forward_list>
#include<vector>
using namespace std;
int main()
{

	vector<string> vec = {
		"Lewis Hamilton", "Lewis Hamilton","Nico Roseberg",
		"Sebastian Vettel", "Lewis Hamilton","Sebastian Vettel",
		"Sebastian Vettel","Sebastian Vettel","Fernando Alonso"
	};

	auto it = vec.begin();
	cout << "���� �ֱ� ����� :" << *it << endl;
	
	it += 8;

	cout << "8�� �� ����� :" << *it << endl;

	advance(it, -3);
	cout << "���� 3�� �� ����� : " << *it << endl;


	forward_list<string> fwd(vec.begin(), vec.end());
	auto it1 = fwd.begin();
	cout << "���� �ֱ� �����: " << *it1 << endl;

	advance(it1, 5);
	cout<<"5�� �� ����� : "<<*it1<<endl;


	return 0;
}