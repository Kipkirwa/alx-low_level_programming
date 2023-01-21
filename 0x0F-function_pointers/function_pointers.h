#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);/*prototype _putchar*/
void print_name(char *name, void (*f)(char *));/*prototype function that prints a name.*/
void array_iterator(int *array, size_t size, void (*action)(int));/*prototype function that executes a function*/
int int_index(int *array, int size, int (*cmp)(int));/*prototype  function that searches for an integer.*/

#endif
