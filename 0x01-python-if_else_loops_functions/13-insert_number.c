#include "lists.h"

/**
 * insert_node - yeah, read it's name 🙄🙄
 * @head: head node
 * @number: number to be added
 * Return: address of the new node or NULL, if the function fails
*/
listint_t *insert_node(listint_t **head, int number)
{
listint_t *current, *endcurrent, *new;
size_t n = 0, i = 0;

if (*head == NULL)
return (NULL);

current = *head, endcurrent = *head;

/*loop to calculate number of nodes in the list*/
while (current != NULL)
n++, current = current->next;

current = *head;
new = (listint_t *)malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

/*loop to update the head pointer's duplicate(current) to the middle node*/
while (i < (n / 2))
current = current->next, i++;

i = 0;
/*loop to update the head pointer duplicate(end current) to point to the*/
/*next node after the middle node, it's like tying two ends of a rope*/
while (i < ((n / 2) + 1))
endcurrent = endcurrent->next, i++;

/*finally adding everything together: a points to b's beginning pointer*/
/*and b's end poiner points to c's beginning pointer*/
current->next = new;
new->n = number;
new->next = endcurrent;
/*ignore the excessive comments please....I'm saving them for my future self*/
/*gimme two days and I won't rememer shit about this...I hate my brain*/
return (new);
}
