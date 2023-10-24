#include "lists.h"

/**
 * reverse - reverses the second half of the list
 * @h_r: head of the second half
 */
void reverse(listint_t **h_r)
{
listint_t *prev, *current, *next;

prev = NULL;
current = *h_r;

while (current != NULL)
{
next = current->next;
current->next = prev;
prev = current;
current = next;
}

*h_r = prev;
}

/**
 * compare - compares each int of the list
 * @h1: head of the first half
 * @h2: head of the second half
 * Return: 0 if they aren't equal, else 1
 */
int compare(listint_t *h1, listint_t *h2)
{
listint_t *temp1, *temp2;

    temp1 = h1;
    temp2 = h2;

while (temp1 != NULL && temp2 != NULL)
{
if (temp1->n == temp2->n)
{
temp1 = temp1->next;
temp2 = temp2->next; }
else
{
return (0); }}

if (temp1 == NULL && temp2 == NULL)
return (1);


return (0);
}

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: head node's pointer
 * Return: 0 if it is not a palindrome else 1
 */
int is_palindrome(listint_t **head)
{
listint_t *slow, *fast, *prev_slow;
listint_t *scn_half, *middle;
int isp;

slow = fast = prev_slow = *head;
middle = NULL;
isp = 1;

if (*head != NULL && (*head)->next != NULL)
{
while (fast != NULL && fast->next != NULL)
{
fast = fast->next->next;
prev_slow = slow;
slow = slow->next;
}

if (fast != NULL)
{
middle = slow;
slow = slow->next;
}

scn_half = slow;
prev_slow->next = NULL;
reverse(&scn_half);
isp = compare(*head, scn_half);

if (middle != NULL)
{
prev_slow->next = middle;
middle->next = scn_half;
}
else
{
prev_slow->next = scn_half;
}}

return (isp);
}
