#include <iostream>
#include "rt.h"

using namespace std;

int main()
{
	rt a(10, 10, 5, 6);
	
	cout << "����:" << a.size() << endl;

	if (a.intersect(11, 12))
		cout << "�浹" << endl;
	else
		cout << "�浹����" << endl;

	rt b(5, 5, 10, 10);

	if (a.crash(b))
		cout << "�浹" << endl;
	else
		cout << "�浹����" << endl;

	return 0;
}