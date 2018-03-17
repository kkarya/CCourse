#include "stdafx.h"
#include <stdlib.h>
#include <time.h>


typedef struct Node {
	int value;
	struct Node *next;
} Node;

void push(Node **head, int data) {
	Node *tmp = (Node*)malloc(sizeof(Node));
	tmp->value = data;
	tmp->next = (*head);
	(*head) = tmp;
}

int pop(Node **head) {
	Node* prev = NULL;
	int val;
	if (head == NULL) {
		exit(-1);
	}
	prev = (*head);
	val = prev->value;
	(*head) = (*head)->next;
	free(prev);
	return val;
}

Node* getNth(Node* head, int n) {
	int counter = 0;
	while (counter < n && head) {
		head = head->next;
		counter++;
	}
	return head;
}

Node* getLast(Node *head) {
	if (head == NULL) {
		return NULL;
	}
	while (head->next) {
		head = head->next;
	}
	return head;
}

void pushBack(Node *head, int value) {
	Node *last = getLast(head);
	Node *tmp = (Node*)malloc(sizeof(Node));
	tmp->value = value;
	tmp->next = NULL;
	last->next = tmp;
}

Node* getLastButOne(Node* head) {
	if (head == NULL) {
		exit(-2);
	}
	if (head->next == NULL) {
		return NULL;
	}
	while (head->next->next) {
		head = head->next;
	}
	return head;
}

void popBack(Node **head) {
	Node *lastbn = NULL;
	//Получили NULL
	if (!head) {
		exit(-1);
	}
	//Список пуст
	if (!(*head)) {
		exit(-1);
	}
	lastbn = getLastButOne(*head);
	//Если в списке один элемент
	if (lastbn == NULL) {
		free(*head);
		*head = NULL;
	}
	else {
		free(lastbn->next);
		lastbn->next = NULL;
	}
}

void insert(Node *head, unsigned n, int val) {
	unsigned i = 0;
	Node *tmp = NULL;
	//Находим нужный элемент. Если вышли за пределы списка, то выходим из цикла,
	//ошибка выбрасываться не будет, произойдёт вставка в конец
	while (i < n && head->next) {
		head = head->next;
		i++;
	}
	tmp = (Node*)malloc(sizeof(Node));
	tmp->value = val;
	//Если это не последний элемент, то next перекидываем на следующий узел
	if (head->next) {
		tmp->next = head->next;
		//иначе на NULL
	}
	else {
		tmp->next = NULL;
	}
	head->next = tmp;
}

int deleteNth(Node **head, int n) {
	if (n == 0) {
		return pop(head);
	}
	else {
		Node *prev = getNth(*head, n - 1);
		Node *elm = prev->next;
		int val = elm->value;

		prev->next = elm->next;
		free(elm);
		return val;
	}
}

void deleteList(Node **head) {
	Node* prev = NULL;
	while ((*head)->next) {
		prev = (*head);
		(*head) = (*head)->next;
		free(prev);
	}
	free(*head);
}

void merge(Node *a, Node *b, Node **c) {
	Node tmp;
	*c = NULL;
	if (a == NULL) {
		*c = b;
		return;
	}
	if (b == NULL) {
		*c = a;
		return;
	}
	if (a->value < b->value) {
		*c = a;
		a = a->next;
	}
	else {
		*c = b;
		b = b->next;
	}
	tmp.next = *c;
	while (a && b) {
		if (a->value < b->value) {
			(*c)->next = a;
			a = a->next;
		}
		else {
			(*c)->next = b;
			b = b->next;
		}
		(*c) = (*c)->next;
	}
	if (a) {
		while (a) {
			(*c)->next = a;
			(*c) = (*c)->next;
			a = a->next;
		}
	}
	if (b) {
		while (b) {
			(*c)->next = b;
			(*c) = (*c)->next;
			b = b->next;
		}
	}
	*c = tmp.next;
}

void split(Node *src, Node **low, Node **high) {
	Node *fast = NULL;
	Node *slow = NULL;

	if (src == NULL || src->next == NULL) {
		(*low) = src;
		(*high) = NULL;
		return;
	}

	slow = src;
	fast = src->next;

	while (fast != NULL) {
		fast = fast->next;
		if (fast != NULL) {
			fast = fast->next;
			slow = slow->next;
		}
	}

	(*low) = src;
	(*high) = slow->next;
	slow->next = NULL;
}

void mergeSort(Node **head) 
{

	Node *low = NULL;
	Node *high = NULL;
	if ((*head == NULL) || ((*head)->next == NULL)) 
	{
		return;
	}
	split(*head, &low, &high);
	mergeSort(&low);
	mergeSort(&high);
	merge(low, high, head);
}

void printList(Node *head)
{

	while (head != NULL)
	{
		printf("Value: %d\n", head->value);
		head = head->next;
	}
}

int main()
{
	Node *head = NULL;

	push(&head, 1);
	push(&head, 2);
	push(&head, 1);
	push(&head, 6);
	pushBack(head, 1);
	pushBack(head, 2);
	pushBack(head, 1);
	pushBack(head, 6);


	FILE *file;

	int id = 0;
	int value = 0;
	char string[200];



	errno_t err = fopen_s(&file, "C:\\Users\\uc2\\Desktop\\files\\short_transactions.txt", "r");
	if (err)
		printf_s("The file cannot open \n");
	else
	{
		while (fscanf_s(file, "%d;%d;%200s", &id, &value, string, 200) != EOF)
		{
			//отсорт порядок
			printf_s("Value: %d\n", value);
			Node *new_node = (Node*)malloc(sizeof(Node));
			new_node->value = value;
			new_node->next = NULL;
			merge(new_node, head, &head);

			//начало списка
			push(&head, value);

		}
	}

	// Где определяется значение переменной size?

	//сравнить время вып ф-ции
	clock_t time_begin = clock();
	mergeSort(&head);
	clock_t time_end = clock();
	printf("Time: %.2fs\n", (double)(time_end - time_begin) / CLOCKS_PER_SEC);


	time_begin = clock();
	printList(head);
	time_end = clock();
	printf("Time: %.2fs\n", (double)(time_end - time_begin) / CLOCKS_PER_SEC);



	return 0;
}

