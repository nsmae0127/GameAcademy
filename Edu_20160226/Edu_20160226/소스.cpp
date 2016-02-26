#include <iostream>
#include "rt.h"

using namespace std;

int main()
{
	rt a(10, 10, 5, 6);
	
	cout << "넓이:" << a.size() << endl;

	if (a.intersect(11, 12))
		cout << "충돌" << endl;
	else
		cout << "충돌안함" << endl;

	rt b(5, 5, 10, 10);

	if (a.crash(b))
		cout << "충돌" << endl;
	else
		cout << "충돌안함" << endl;

	return 0;
}