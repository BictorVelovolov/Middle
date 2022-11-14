#ifndef MIDDLE_H_INCLUDED
#define MIDDLE_H_INCLUDED

void itc_num_print(int a); //Печатает число
int itc_len_num(long long a); //Печатает количество разрядов в числе
int itc_sum_num(long long a); //Печатает сумму цифр числа
int itc_max_num(long long a); //Макс. цифра в числе
long long itc_multi_num(long long a); //Произведение цифр в числе
int itc_min_num(long long a); //минимальная цифра
int itc_rev_num(long long a); //отзеркаливает число
int itc_null_count(long long a); //Счёт нулей
bool itc_mirror_num(long long a); //Чётное/нечётное число
long long itc_bin_num(long long a); //перевод числа в двоичку
int itc_mirror_count(long long a);
int itc_second_max_num(long long a);
int itc_second_simple_max_num(long long a);
long long itc_oct_num(long long a);
int itc_rev_bin_num(long long a);
int itc_rev_oct_num(long long a);

#endif // MIDDLE_H_INCLUDED
