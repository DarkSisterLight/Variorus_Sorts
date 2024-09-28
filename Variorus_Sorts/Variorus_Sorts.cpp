#include <iostream>
using namespace std;

void print(string words);

int main(){
setlocale(LC_ALL, "RU");

	int array[6];
	print("Заполни массив:");
	for (int i = 0; i < 6; i++) {
		cout << "[" << i + 1 << "]" << ": ";
		cin >> array[i];
	}

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 5; j++) {
			if (array[j] > array[j + 1]) {
				int b = array[j];
				array[j] = array[j + 1];
				array[j + 1] = b;

			}
		
		}
	}

	print("Отсортированный массив: ");
	for (int i = 0; i < 6; ++i) {
		cout << array[i] << " ";
	}

	cout << endl;
	return 0;
}

void print(string words) {
	cout << words << endl;
}

