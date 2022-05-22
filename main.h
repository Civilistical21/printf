#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

void _puts(char *str);
int _switch(char c, va_list arg);
int print_base16_upper_lower(va_list arg, char *representation);

int print_sign(va_list arg, int base);
char *convert_to(char representation[], unsigned int num, int base);
int function_manager(char c, va_list arg);int loop_format(va_list arg, const char *string);
int call_function_manager(char aux, va_list arg);
int check_percent(int *flag, char aux);
int _strlen(char *s);
int _printf(const char *format, ...);
int print_ptr(va_list arg);
int print_rot13(va_list arg);
int print_rev(va_list arg);
int print_string(va_list arg);
int print_unsign(va_list arg, int base);
int _putchar(char c);
#endif/*(MAIN_H)*/
