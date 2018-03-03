// Lesson_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

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
//3 Реализовать функцию поиска суммы значений списка
int ListSum(Node *head)
{
	int sum = 0;

	while (head) {
		sum += head->value; //перемещение по списку
		head = head->next;
	}
	return sum;
}
//1 Реализовать функцию вывода в терминал всех значений списка

void printList(Node *head)
{
	while (head) {
		printf("%d\n", head->value); //перемещение по списку
		head = head->next;
	}
}



//2 Реализовать функцию поиска максимального(и минимального) значения в списке
typedef struct SearchResult
{
	int min;
	int max;
} SearchResult;
SearchResult Min_Max(Node *head)
{
	SearchResult result;
	int min = 1000;
	int max = 0;
	while (head->next)
	{
		if (head->value > max)
		{
			max = head->value;
		}
		if (head->value < min)
		{
			min = head->value;
		}
		head = head->next;
	}
	result.max = max;
	result.min = min;

	return result;
}

int main()
{
	Node *head = NULL;

	push(&head, 1);
	push(&head, 2);
	push(&head, 6);

	printList(head);
	
	
	printf("Sum: %d\n", ListSum(head));

	SearchResult result = Min_Max(head);
	printf("Max: %d\n", result.max);
	printf("Min: %d\n", result.min);

	return 0;
}
