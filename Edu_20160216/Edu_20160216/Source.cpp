#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void GcdLcd();
void StackPoint();
void QueuePoint();

#define BOMB 1

int main()
{
	int bomb[10][10] = {0, }, player[10][10] = {0, };
	int playerX, playerY, bombX, bombY;
	int resultX = 0, resultY = 0;

	// �õ尪 ����
	srand((unsigned int)time(NULL));

	// ��ǥ x, y �� ����
	bombX = rand() % 10;
	bombY = rand() % 10;

	bomb[bombX][bombY] = BOMB;

	cout << bombX << " " << bombY << endl;

	while (1) {
		
		// ����ڷκ��� ��ǥ �Է� ����
		cout << "��ǥ�� �Է��ϼ���: ";
		cin >> playerX >> playerY;
		
		if (playerX == bombX && playerY == bombY)
			player[playerX][playerY] = BOMB;

		// �Է���ǥ�� ��ź��ǥ�� ��
		if (bomb[bombX][bombY] == player[playerX][playerY]) {	// ��ǥ�� ��ġ�� ���
			cout << "�����մϴ�. ��ź�� �����Ͽ����ϴ�." << endl;
			return 0;
		}
		else {	// ��ǥ�� ����ġ�� ��� ��ǥ���� ���� ����
			
			// ����� x ���� ũ��
			if (bombX <= playerX) 
				resultX = playerX - bombX;
			else
				resultX = bombX - playerX;
			
			// ����� y ���� ũ��
			if (bombY <= playerY)
				resultY = playerY - bombY;
			else
				resultY = bombY - playerY;

			switch (resultX + resultY)
			{
			case 1:
				cout << "������" << endl;
				break;
			case 2:
				cout << "�����" << endl;
				break;
			case 3:
				cout << "����" << endl;
				break;
			case 4:
				cout << "���" << endl;
				break;
			case 5:
				cout << "��" << endl;
				break;
			default:
				break;
			}
		}
	}

	return 0;
}

void QueuePoint()
{
	int a[10];
	int front = -1, rear = -1;
	int menu;

	while (1) {
		cout << "1.�Է� 2.��� 3.����" << endl;
		cout << "������ �Ͻðڽ��ϱ�? ";
		cin >> menu;

		switch (menu)
		{
		case 1:
			cout << "������ �Է��ϼ���: ";
			cin >> a[++front];
			break;
		case 2:
			cout << "����� ������: " << a[++rear] << "�Դϴ�." << endl;
			break;
		case 3:
			// ���� ���� ���
			cout << "������ �����ʹ� ";
			if (front > -1) {
				for (int i = rear + 1; i <= front; i++) {
					cout << a[i] << " ";
				}
				cout << "�Դϴ�." << endl;
			}
			else {
				cout << "������ϴ�." << endl;
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
		cout << "1.�Է� 2.��� 3.����" << endl;
		cout << "������ �Ͻðڽ��ϱ�? ";
		cin >> menu;

		switch (menu)
		{
		case 1:
			cout << "������ �Է��ϼ���: ";
			cin >> a[pos + 1];
			pos++;
			break;
		case 2:
			cout << "����� ������: " << a[pos] << "�Դϴ�." << endl;
			pos--;
			break;
		case 3:
			// ���� ���� ���
			cout << "������ �����ʹ� ";
			if (pos > -1) {
				for (int i = 0; i <= pos; i++) {
					cout << a[i] << " ";
				}
				cout << "�Դϴ�." << endl;
			}
			else {
				cout << "������ϴ�." << endl;
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

	cout << "�� ���� �Է��ϼ���. ";
	cin >> num1 >> num2;

	if (num1 > num2) {
		temp = num2;
		num2 = num1;
		num1 = temp;
	}

	// �ִ� �����
	// �� ���� ����� ��� �� ���� ū ��
	for (int i = 1; i < num1; i++) {
		if (num1 % i == 0 && num2 % i == 0) {	// ���
			temp1 = i;
		}
	}

	cout << "�ִ�����: " << temp1 << endl;

	// �ּ� �����
	// �� ���� ���Ѵ��� �ִ� ������� ������
	temp2 = (num1 * num2) / temp1;

	cout << "�ּҰ����: " << temp2 << endl;
}