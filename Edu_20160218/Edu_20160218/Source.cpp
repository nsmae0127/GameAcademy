#include <iostream>

using namespace std;

struct Node {
	int data;
	Node *next;
};

struct LinkedList {
	Node *head;
	Node *tail;
};

void InitializeNode(LinkedList *list);
void InsertNode(LinkedList *list, int data);
void DeleteNode(LinkedList *list, int data);
void PrintNode(LinkedList* list);

int main()
{
	LinkedList *list = new LinkedList;

	// �ʱ�ȭ
	InitializeNode(list);

	int menu;

	while (1) {
		// �޴� ����
		cout << "1.�߰� 2.���� 3.��� 4.����" << endl;
		cout << "�޴�����: "; cin >> menu;

		switch (menu)
		{
		case 1:
			int input;

			cout << "�߰��� �����Է�: "; cin >> input;

			InsertNode(list, input);

			break;
		case 2:
			cout << "������ �����Է�: "; cin >> input;

			DeleteNode(list, input);

			break;
		case 3:
			PrintNode(list);

			break;
		case 4:
			cout << "���α׷��� �����մϴ�." << endl;
			return 0;
		default:
			break;
		}
	}

	return 0;
}

void InitializeNode(LinkedList *list)
{
	list->head = NULL;
	list->tail = NULL;
}

void InsertNode(LinkedList *list, int data)
{
	Node *newnode = new Node;

	newnode->data = data;
	newnode->next = NULL;

	if (list->head == NULL)
		list->head = newnode;
	else
		list->tail->next = newnode;

	list->tail = newnode;
}

void DeleteNode(LinkedList *list, int data)
{
	Node *deletenode = new Node;

	deletenode = list->head;

	if (deletenode->next == NULL) {
		delete deletenode;
		list->head = NULL;
	}
	else {
		Node *previusnode = new Node;

		while (deletenode != NULL) {
			if (data == deletenode->data)
				break;
			previusnode = deletenode;
			deletenode = deletenode->next;
		}

		previusnode->next = deletenode->next;
		delete deletenode;
	}
}

void PrintNode(LinkedList *list)
{
	Node *temp = new Node;

	temp = list->head;

	if (temp == NULL)
		cout << "������ �������� �ʽ��ϴ�." << endl;
	else {
		cout << "�Էµ� ����: ";
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}
}