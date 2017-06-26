0x12. C - More singly linked lists
This is the README.md file for this project

Requirements
Compiled on Ubuntu 14.04 LTS using gcc 4.8.4 (C90)
Uses Compile flags -Wall -Werror -Wextra and -pedantic -g
Code follows Betty style format (betty-style.pl and betty-doc.pl)
No global variables were used
All files have 5 functions or less per file
The only C standard library functions allowed are malloc, free and exit
The header file is called lists.h and is Include Guarded

Function Prototypes:

size_t print_listint(const listint_t *h)
-prints all nodes of a listint_t list

size_t listint_len(const listint_t *h)
-returns the number of elements in a linked listint_t list

listint_t *add_nodeint(listint_t **head, const int n)
-adds a new node at the beginning of a listint_t list

listint_t *add_nodeint_end(listint_t **head, const int n)
-adds a new node at the end of a listint_t list

void free_listint(listint_t *head);
-frees a listint_t list

void free_listint2(listint_t **head)
-frees a listint_t list and set head to NULL

int pop_listint(listint_t **head)
-deletes the head node of a listint_t linked list and returns the head node's data (n)

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
-returns the nth node of a listint_t linked list

int sum_listint(listint_t *head)
-returns the sum of all the data (n) of a listint_t linked list

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
-inserts a new node at a given position

int delete_nodeint_at_index(listint_t **head, unsigned int index)
-deletes the node at index index of a listint_t linked list. Return 1 if success or 0

Data Structure used:
struct listint_s - singly linked list

typedef struct listint_s
{
    int n; (data payload)
    struct listint_s *next; (pointer to next node)
} listint_t;
