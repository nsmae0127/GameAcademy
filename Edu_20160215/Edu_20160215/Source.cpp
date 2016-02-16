#include <iostream>
using namespace std;

void TerracedStar();		// 계단식 별 출력
void RevTerracedStar();		// 역계단식 별 출력
void SymTerracedStar();		// 대칭 별 출력
void PyramidStar();			// 피라미드 별 출력
void RevPyramidStar();		// 역피라미드 별 출력
void MultiplicationTable();	// 구구단 출력
void DivideMultiTable();	// 구구단 3단씩 나눠 출력
void TerracedMultiTable();	// 구구단 계단식 출력
void SelectMenu(int menu);

int main()
{
	int menu;

	cout << "<2016년 2월 15일 학습>\n" << endl;
	cout << "1.계단식 별" << endl << "2.역계단식 별" << endl << "3.대칭 별" << endl
		<< "4.피라미드 별" << endl << "5.역피라미드 별" << endl
		<< "6.구구단" << endl << "7.가로형 구구단" << endl << "8.계단식 구구단" << endl << endl;
	cout << "무엇을 출력할까요? ";
	cin >> menu;

	SelectMenu(menu);

	return 0;
}

void SelectMenu(int menu)
{
	switch (menu)
	{
	case 1:
		TerracedStar();
		break;
	case 2:
		RevTerracedStar();
		break;
	case 3:
		SymTerracedStar();
		break;
	case 4:
		PyramidStar();
		break;
	case 5:
		RevPyramidStar();
		break;
	case 6:
		MultiplicationTable();
		break;
	case 7:
		DivideMultiTable();
		break;
	case 8:
		TerracedMultiTable();
		break;
	default:
		break;
	}
}

void TerracedStar()
{
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

void RevTerracedStar() 
{
	for (int i = 0; i < 5; i++) {
		for (int j = 5; i < j; j--) {
			cout << "*";
		}
		cout << endl;
	}
}

void SymTerracedStar()
{
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4 - i; j++) {
			cout << " ";
		}
		for (int j = 0; j < i + 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

void PyramidStar()
{
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4 - i; j++) {
			cout << " ";
		}
		for (int j = 0; j < (2 * i) + 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

void RevPyramidStar()
{
	for (int i = 4; i >= 0; i--) {
		for (int j = 0; j < 4 - i; j++) {
			cout << " ";
		}

		for (int j = 0; j < (2 * i) + 1; j++) {
			cout << "*";
		}

		cout << endl;
	}
}

void MultiplicationTable()
{
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << endl;
	}
}

void DivideMultiTable()
{
	for (int i = 1; i < 10; i += 3) {
		for (int j = 1; j < 10; j++) {
			for (int k = i; k < i + 3; k++) {
				cout << k << " * " << j << " = " << k * j << "\t";
			}
			cout << endl;
		}
		cout << endl;
	}
}

void TerracedMultiTable()
{
	int n = 1;
	for (int i = 1; n <= 10; i++) {
		for (int j = 1; j < 10; j++) {
			for (int k = 0; k < i; k++) {
				cout << n + k << " * " << j << " = " << (n + k) * j << "\t";
			}
			cout << endl;
		}
		n = n + i;
		cout << endl;
	}
}
