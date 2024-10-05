#include <iostream>
#include <stdio.h>
using namespace std;

const int arr_size = 6;

int main(){
setlocale(LC_ALL, "RU");

	short x;
	bool sort_or_not = true;
	int array[arr_size] = {}, right = arr_size, left = 1, min_elem;

	puts("Заполни массив:");
	for (int i = 0; i < arr_size; i++) {
		cout << "[" << i + 1 << "]" << ": ";
		cin >> array[i];
	}

	puts("Выбери сортировку: ");
	cin >> x;

	switch (x) {
	case 1:
		puts("Выбрана Bubble Sort");
		for (int i = 0; i < arr_size; i++) {
			for (int j = 0; j < arr_size - 1; j++) {
				if (array[j] > array[j + 1]) {
				swap(array[j], array[j + 1]);
				}
			}
		}
		break;
	case 2:
		puts("Выбрана Sheyker Sort");
		do {
			sort_or_not = true;
			for (int i = left; i <= right; i++) {
				if (array[i - 1] > array[i]) {
				swap(array[i - 1], array[i]);
				sort_or_not = false;
				}
			}
			right--;
			for (int i = right; i >= left; i--) {
				if (array[i] < array[i - 1]) {
				swap(array[i], array[i - 1]);
				sort_or_not = false;
				}
			}
			left++;
		} while (sort_or_not == false);
		break;
	case 3:
		puts("Выбрана Selection Sort");
		for (int i = 0; i < arr_size; i++) {
			min_elem = i;
			for (int j = i + 1; j < arr_size; j++) {
				if (array[j] < array[min_elem]) {
				min_elem = j;
				}

			}
			swap(array[i], array[min_elem]);
		}
		break;
	default:
		puts("У меня такой сортировки нет.");
		break;
	}

	for (int i = 0; i < arr_size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;

	return 0;
}