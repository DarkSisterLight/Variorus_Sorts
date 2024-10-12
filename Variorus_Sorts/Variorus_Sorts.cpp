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
	case 4:
		puts("Выбрана Isertion Sort");
		for (int i = 1; i < arr_size; i++) {
			for (int j = i; j > 0 && array[j - 1] > array[j]; j--) {
				swap(array[j - 1], array[j]);
			}
		}
		break;
	case 5:
		puts("Выбрана Merge Sort");
		int mid = arr_size / 2; // находим середину сортируемой последовательности
		if (arr_size % 2 == 1)
			mid++;
		int h = 1; // шаг
		// выделяем память под формируемую последовательность
		int* c = (int*)malloc(arr_size * sizeof(int));
		int step;
		while (h < arr_size)
		{
			step = h;
			int i = 0;   // индекс первого пути
			int j = mid; // индекс второго пути
			int k = 0;   // индекс элемента в результирующей последовательности
			while (step <= mid)
			{
				while ((i < step) && (j < arr_size) && (j < (mid + step)))
				{ // пока не дошли до конца пути
				  // заполняем следующий элемент формируемой последовательности
				  // меньшим из двух просматриваемых
					if (array[i] < array[j])
					{
						c[k] = array[i];
						i++; k++;
					}
					else {
						c[k] = array[j];
						j++; k++;
					}
				}
				while (i < step)
				{ // переписываем оставшиеся элементы первого пути (если второй кончился раньше)
					c[k] = array[i];
					i++; k++;
				}
				while ((j < (mid + step)) && (j < arr_size))
				{  // переписываем оставшиеся элементы второго пути (если первый кончился раньше)
					c[k] = array[j];
					j++; k++;
				}
				step = step + h; // переходим к следующему этапу
			}
			h = h * 2;
			// Переносим упорядоченную последовательность (промежуточный вариант) в исходный массив
			for (i = 0; i < arr_size; i++)
				array[i] = c[i];
		}
		break;
	case 6:
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