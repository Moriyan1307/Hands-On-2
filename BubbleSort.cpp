#include <iostream>
#include <cstdlib> // Added for rand()
#include <chrono>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

int main() {

     auto start = std::chrono::high_resolution_clock::now();

    const int N = 1000000;
    int arr[N];

    // Filling the array with random numbers
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 1000; // Generates random numbers between 0 and 999
    }

    std::cout << "Original array: ";
    printArray(arr, N);

    bubbleSort(arr, N);

    std::cout << "Sorted array: ";
    printArray(arr, N);

    auto end = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

    std::cout << "Execution time: " << duration << " ms" << std::endl;

    return 0;
}
