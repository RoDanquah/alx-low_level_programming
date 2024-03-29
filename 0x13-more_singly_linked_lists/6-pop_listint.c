/*
 * File: 6-pop_listint.c
 */

#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked listint_t list.
 *
 * @head: A pointer to the address of the head of the listint_t list.
 *
 * Return: The head node's data (n).
 *         OR 0 - if the linked list is empty.
 *
 */

int pop_listint(listint_t **head)

{
	listint_t *tmp;

	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
