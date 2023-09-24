#include "monty.h"
/**
 * f_pstr - this prints the string and it starts at the top of the stack
 * followed by a new line
 * @head: head of stack
 * @counter: counts number of lines
 * Return: no return
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
