#include <iostream>

using namespace std;

void GcdLcd();
void StackPoint();
void QueuePoint();

int main()
{
	QueuePoint();

	return 0;
}

void QueuePoint()
{
	int a[10];
	int front = -1, rear = -1;
	int menu;

	while (1) {
		cout << "1.입력 2.출력 3.종료" << endl;
		cout << "무엇을 하시겠습니까? ";
		cin >> menu;

		switch (menu)
		{
		case 1:
			cout << "정수를 입력하세요: ";
			cin >> a[++front];
			break;
		case 2:
			cout << "출력할 정수는: " << a[++rear] << "입니다." << endl;
			break;
		case 3:
			// 스택 내용 출력
			cout << "스택의 데이터는 ";
			if (front > -1) {
				for (int i = rear + 1; i <= front; i++) {
					cout << a[i] << " ";
				}
				cout << "입니다." << endl;
			}
			else {
				cout << "비었습니다." << endl;
			}
			exit(1);
		default:
			break;
		}

		cout << endl;
	}

}

void StackPoint()
{
	int a[10];
	int pos = -1;
	int menu;

	while (1) {
		cout << "1.입력 2.출력 3.종료" << endl;
		cout << "무엇을 하시겠습니까? ";
		cin >> menu;

		switch (menu)
		{
		case 1:
			cout << "정수를 입력하세요: ";
			cin >> a[pos + 1];
			pos++;
			break;
		case 2:
			cout << "출력할 정수는: " << a[pos] << "입니다." << endl;
			pos--;
			break;
		case 3:
			// 스택 내용 출력
			cout << "스택의 데이터는 ";
			if (pos > -1) {
				for (int i = 0; i <= pos; i++) {
					cout << a[i] << " ";
				}
				cout << "입니다." << endl;
			}
			else {
				cout << "비었습니다." << endl;
			}
			exit(1);
		default:
			break;
		}

		cout << endl;
	}
}

void GcdLcd()
{
	int num1, num2;
	int temp, temp1 = 0, temp2 = 0;

	cout << "두 수를 입력하세요. ";
	cin >> num1 >> num2;

	if (num1 > num2) {
		temp = num2;
		num2 = num1;
		num1 = temp;
	}

	// 최대 공약수
	// 두 수의 공통된 약수 중 제일 큰 수
	for (int i = 1; i < num1; i++) {
		if (num1 % i == 0 && num2 % i == 0) {	// 약수
			temp1 = i;
		}
	}

	cout << "최대공약수: " << temp1 << endl;

	// 최소 공배수
	// 두 수를 곱한다음 최대 공약수를 나눈다
	temp2 = (num1 * num2) / temp1;

	cout << "최소공배수: " << temp2 << endl;
}