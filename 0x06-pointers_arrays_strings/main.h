#ifndef MAIN_H
#define MAIN_H

/* function prototypes */
int _putchar(char c);

/* task 0 */
char *_strcat(char *dest, char *src);

/* task 1 */
char *_strncat(char *dest, char *src, int n);

/* task 2 */
char *_strncpy(char *dest, char *src, int n);

/* task 3 */
int _strcmp(char *s1, char *s2);

/* task 4 */
void reverse_array(int *a, int n);

/* task 5 */
char *string_toupper(char *str);

/* task 6 */
char *cap_string(char *);

/* task 7 */
char *leet(char *);

/* task 8 */
char *rot13(char *);

void print_number(int n);

char *infinite_add(char *n1, char *n2, char *r, int size_r);

void print_buffer(char *b, int size);

#endif /* MAIN_H */