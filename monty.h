typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void m_push(stack_t **head, unsigned int number);
void m_pall(stack_t **head, unsigned int number);
void m_pint(stack_t **head, unsigned int number);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stack(stack_t *head);
void m_pop(stack_t **head, unsigned int counter);
void m_swap(stack_t **head, unsigned int counter);
void m_add(stack_t **head, unsigned int counter);
void m_nop(stack_t **head, unsigned int counter);
void m_sub(stack_t **head, unsigned int counter);
void m_div(stack_t **head, unsigned int counter);
void m_mul(stack_t **head, unsigned int counter);
void m_mod(stack_t **head, unsigned int counter);
void m_pchar(stack_t **head, unsigned int counter);
void m_pstr(stack_t **head, unsigned int counter);
void m_rotl(stack_t **head, unsigned int counter);
void m_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void add_node(stack_t **head, int n);
void add_queue(stack_t **head, int n);
void m_queue(stack_t **head, unsigned int counter);
void m_stack(stack_t **head, unsigned int counter);

#endif
