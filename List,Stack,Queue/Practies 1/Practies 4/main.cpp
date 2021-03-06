//예제 4 : 다양한 반복자에서 이동하기

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
	cout << "가장 최근 우승자 :" << *it << endl;
	
	it += 8;

	cout << "8년 전 우승자 :" << *it << endl;

	advance(it, -3);
	cout << "그후 3년 뒤 우승자 : " << *it << endl;


	forward_list<string> fwd(vec.begin(), vec.end());
	auto it1 = fwd.begin();
	cout << "가장 최근 우승자: " << *it1 << endl;

	advance(it1, 5);
	cout<<"5년 전 우승자 : "<<*it1<<endl;


	return 0;
}