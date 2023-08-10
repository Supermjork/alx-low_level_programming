#include <unistd.h>
int _putchar(int);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *str);
void rev_string(char *str);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *array, int n);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *array, int n);
char *string_toupper(char *str);
char *cap_string(char *str);
int new_word(char c);
char *upper(char *c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *str, char c);
unsigned int _strspn(char *str, char *accept);
char *_strpbrk(char *s, char *accept);
int compare(char *str0, char *str1);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *str);
int factorial(int n);
int _pow_recursion(int base, int pwr);
int _sqrt_recurstion(int n);
int sqrt_test(int n, int t_case);
int is_prime_number(int n);
int prime_test(int n, int t_case);
int numchecker(char *s);
char *create_array(unsigned int n, char c);
char *_strdup(char *str);
char *str_concat(char *str0, char *str1);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
void *malloc_checked(unsigned int b);
