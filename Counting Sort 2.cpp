#include <iostream>
using namespace std;

void countingSort_R(int* array, int size);
void countingSort_NR(int* array, int size);

void countingSort_NR(int* array, int size) {
    int* sorted_array = new int[size];

    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (array[j] < array[i]) {
                count++;
            }
        }
        sorted_array[count] = array[i];
    }

    for (int i = 0; i < size; i++) {
        array[i] = sorted_array[i];
        cout << array[i] << " ";
    }

    delete[] sorted_array;
}

void countingSort_R(int* array, int size) {

    int* sorted_array = new int[size];

    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (array[j] < array[i]) {
                count++;
            }
            else if (array[j] == array[i] && j < i) {
                count++;
            }
        }
        sorted_array[count] = array[i];
    }

    for (int i = 0; i < size; i++) {
        cout << sorted_array[i] << " ";
    }

    delete[] sorted_array;
}


int main()
{
    //int numbers[] = { 40, 15, 9, 92, 66, 22, -21, -2, 1, 37 };
    //int numbers[] = { 40, 15, 2, 92, 6, 22, -21, -2, 6, 2 };
    int numbers[] = { 4,3,2,1,2 };
    int size = sizeof(numbers) / sizeof(numbers[0]);

    //countingSort_NR(numbers,size);
    countingSort_R(numbers, size);

    return 0;
}
