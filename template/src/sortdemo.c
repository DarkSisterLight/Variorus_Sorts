#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "bubble_sort.h"
#include "quick_sort.h"
#include "shaker_sort.h"
#include "utils.h"

/**
    Сортировка вставками.

    \param[out] dest отсортированный массив
    \param[in] array исходный массив
    \param[in] size размер массива
*/
int* insert_sort(int* src, int size) {
    return 0;
}

/**
    Сортировка слиянием.

    \param[out] dest отсортированный массив
    \param[in] array исходный массив
    \param[in] size размер массива
*/
int* merge_sort(int *src, int size) {
    return 0;
}

void count_swaps(void (*swap_function)(int *i, int *j), int *a, int *b, int *count) {
	swap_function(a, b);
}

int main(void) {
	//int swap_counts[4] = { 0, 0, 0, 0 };
	//void (*ptr_swap2)(int* i, int* j) = swap2;
	//f1(ptr_swap2);
	//ptr_swap2(&a[0], &a[1]);
	//swap2(&a[0], &a[1]);

	//return EXIT_SUCCESS;

	puts("Программа демонстрации алгоритмов сортировки");
	puts("--------------------------------------------");

	srand(time(NULL));

	int array_size = 50;
	int src[array_size];
	int random_radix = 100;

	random_array(src, array_size, random_radix);

	printf("Исходный массив: ");
	print_array(src, array_size);
	puts("--------------------------------------------");

	printf("--= Сортировка пузырьком =--\n");
	int src1[array_size];
	memcpy(src1, src, array_size * sizeof(int));
	bubble_sort(src1, array_size);

	printf("Отсортированный массив: ");
	print_array(src1, array_size);

	puts("--------------------------------------------");

	printf("--= Шейкерная сортировка =--\n");
	int src2[array_size];
	memcpy(src2, src, array_size * sizeof(int));
	shaker_sort(src2, array_size);

	printf("Отсортированный массив: ");
	print_array(src2, array_size);

	puts("--------------------------------------------");

	printf("--= Быстрая сортировка =--\n");
	int src3[array_size];
	memcpy(src3, src, array_size * sizeof(int));
	quick_sort(src3, array_size);

	printf("Отсортированный массив: ");
	print_array(src3, array_size);

	puts("--------------------------------------------");

	printf("--= Сортировка слиянием =--\n");
	int src4[array_size];
	memcpy(src4, src, array_size * sizeof(int));
	merge_sort(src4, array_size);

	printf("Отсортированный массив: ");
	print_array(src4, array_size);

	puts("--------------------------------------------");

	printf("--= Сортировка вставками =--\n");
	int src5[array_size];
	memcpy(src5, src, array_size * sizeof(int));
	insert_sort(src5, array_size);

	printf("Отсортированный массив: ");
	print_array(src5, array_size);

	puts("--------------------------------------------");

	printf("Статистика:\n");
	printf("...\n");

	printf("Выводы:\n");
	printf("...\n");

	return EXIT_SUCCESS;
}
