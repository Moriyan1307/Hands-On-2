#include <iostream>
#include <algorithm> // Added for std::swap
#include <random>    // Added for std::random_device, std::mt19937, and std::uniform_int_distribution
#include <chrono>

// Function to sort an array using insertion sort
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements of arr[0..i-1],
        // that are greater than key, 
        // to one position ahead of their
        // current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// A utility function to print an array of size n
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
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

    insertionSort(arr, N);

    std::cout << "Sorted array: ";
    printArray(arr, N);

	 auto end = std::chrono::high_resolution_clock::now();

     auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

	std::cout << "Execution time: " << duration << " ms" << std::endl;

    return 0;
}
