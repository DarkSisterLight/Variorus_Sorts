#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
    Сортировка пузырьком.

    \param[out] dest отсортированный массив
    \param[in] array исходный массив
    \param[in] size размер массива
*/
int* bubble_sort(int* array, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (array[j] > array[j + 1]) {
				int t = array[j];
				array[j] = array[j + 1];
				array[j + 1] = t;
			}
		}
	}
	return array;
}

/**
    Сортировка вставками.

    \param[out] dest отсортированный массив
    \param[in] array исходный массив
    \param[in] size размер массива
*/
int* insert_sort(int* src) {
    return 0;
}

/**
    Сортировка слиянием.

    \param[out] dest отсортированный массив
    \param[in] array исходный массив
    \param[in] size размер массива
*/
int* merge_sort(int* src) {
    return 0;
}

/**
    Быстрая сортировка.

    \param[out] dest отсортированный массив
    \param[in] array исходный массив
    \param[in] size размер массива
*/
int* quick_sort(int* src) {
    return 0;
}

int* random_array(int* array, int size, int num) {
	for (int i = 0; i < size; i++) {
		array[i] = rand() % num;
	}
	return array;
}

void print_array(int* array, int size) {
	printf("[");
	for (int i = 0; i < size; i++) {
		printf("%d", array[i]);
		if (i < size - 1) {
			printf(",");
		}
	}
	printf("]\n");
}

int main(void) {
	puts("Программа демонстрации алгоритмов сортировки");

	srand(time(NULL));

	int array_size = 50;
	int src[array_size] = { };
	int random_radix = 100;

	random_array(src, array_size, random_radix);

	printf("Исходный массив: ");
	print_array(src, array_size);

	bubble_sort(src, array_size);

	printf("Отсортированный массив: ");
	print_array(src, array_size);

	printf("Статистика:\n");
	printf("...\n");

	printf("Выводы:\n");
	printf("...\n");

	return EXIT_SUCCESS;
}
