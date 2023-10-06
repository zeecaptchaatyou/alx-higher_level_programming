#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it.
 * @list: head node
 * Return: 1 if there is a cycle else 0.
*/
int check_cycle(listint_t *list)
{
listint_t *list2 = list, *list3 = list;

while (list3 != NULL && list3->next != NULL)
{
list2 = list2->next;
list3 = list3->next->next;

if (list2 == list3)
return (1); /*y'all been moving in circles, lmao*/
}
return (0);
}

/*guyssss, this took me 45 minutes to figure outtttt 😭😭😭😭*/

/*
 * so glad it wasn't an interview like Mr Barbier asked us to imagine it
 * was, my ass would've failed!
*/
