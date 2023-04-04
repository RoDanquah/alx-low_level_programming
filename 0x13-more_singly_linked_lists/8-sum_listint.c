/*
 * File: 8-sum_listint.c
 */

#include "lists.h"

/**
 * sum_listint - Sums all the data (n) of a linked listint_t list.
 *
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The sum of all the data (n),
 *         OR 0 - if the list is empty.
 */

int sum_listint(listint_t *head)

{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
