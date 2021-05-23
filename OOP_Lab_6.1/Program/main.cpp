#include <iostream>
#include <cmath>
#include <array>
#include "Array.h"

using namespace std;

Array* convert(int* arr, int size)
{
    Array* tmp = new Array(size);
    for (size_t i = 0; i < size; i++)
        (*tmp)[i] = arr[i];
    return tmp;
}

void create(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % (100 + 1) - 50;
    }
}

void print(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

double sum(int* arr, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += abs(arr[i]);
    }
    return sum;
}

double avg(int* arr, int n) {
    int count = 0;
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += abs(arr[i]);
        count++;
    }
    return sum / count;
}

void replace(int* arr, int n) {
    int tmpIndex = 0;
    double avgTmp = avg(arr, n);
    for (int i = 0; i < n; i++) {
        if (tmpIndex % 3 == 0 && arr[i] > 0) {
            arr[i] = avgTmp;
        }
        if (arr[i] > 0) tmpIndex++;
    }
}

int main() {
    int n;
    cout << "n = ";
    cin >> n;
    int arr[100];
    create(arr, n);
    print(arr, n);
    arr[n] = sum(arr, n);
    arr[n + 1] = avg(arr, n);
    replace(arr, n);
    print(arr, n + 2);
    Array* arrm = convert(arr, n+2);
    cout << *arrm << endl;
    delete arrm;
    return 0;
}