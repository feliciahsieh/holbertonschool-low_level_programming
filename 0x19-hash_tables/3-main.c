#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);

	printf("1: %d:\n", hash_table_set(ht, "betty", "holberton"));

	printf("2: %d:\n", hash_table_set(ht, "hetairas", "myhetairas"));
	printf("3: %d:\n", hash_table_set(ht, "mentioner", "mymentionaeer"));

	printf("4: %d:\n", hash_table_set(ht, "heliotropes", "myhelio"));
	printf("5: %d:\n", hash_table_set(ht, "neurospora", "myneurospora"));

	printf("6: %d:\n", hash_table_set(ht, "depravement", "mydepravement"));
	printf("7: %d:\n", hash_table_set(ht, "serafins", "myserfins"));

	printf("8: %d:\n", hash_table_set(ht, "stylist", "mystylist"));
	printf("9: %d:\n", hash_table_set(ht, "subgenera", "mysubgera"));

	printf("10: %d:\n", hash_table_set(ht, "joyful", "myjoyful"));
	printf("11: %d:\n", hash_table_set(ht, "synaphea", "mysynaphea"));

	printf("12: %d:\n", hash_table_set(ht, "redescribed", "myredescribed"));
	printf("13: %d:\n", hash_table_set(ht, "urites", "myurites"));

	printf("14: %d:\n", hash_table_set(ht, "dram", "mydram"));
	printf("15: %d:\n", hash_table_set(ht, "vivency", "myvivency"));

	printf("16: %d:\n", hash_table_set(ht, "", "abc"));

	printf("17: %d:\n", hash_table_set(ht, "abc", ""));

	printf("18: %d:\n", hash_table_set(ht, "", ""));

	printf("18: %d:\n", hash_table_set(NULL, "a", "b"));

	return (EXIT_SUCCESS);
}
