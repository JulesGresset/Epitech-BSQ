/*
** EPITECH PROJECT, 2021
** B-CPE-110-PAR-1-4-BSQ-jules.gresset
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

double my_getnbr(char *nb);

int my_is_prime(int nb);

void my_putchar(char c);

int my_put_nbr(int nb);

int my_putstr(char const *str);

int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src);

char *my_strncpy(char *dest, char const *src, int nb);

char *my_revstr(char *str);

int my_strcmp(char const *s1, char const *s2);

int my_strncmp(char const *s1, char const *s2, int n);

char *my_strcat(char *dest, char const *src);

char *my_strncat(char *dest, char const *src, int nb);

char *my_revstr(char *str);

char *my_strdup(char *s1);

char **my_str_to_word_array(char const *str);

int my_strtol(char *str_ptr, char **endptr);

void my_printf(char *str, ...);

int my_put_cap_hex(int nb);

int my_put_float(double nbr);

int my_put_hex(int nb);

int my_put_oct(int nb);

#endif /* !MY_H_ */
