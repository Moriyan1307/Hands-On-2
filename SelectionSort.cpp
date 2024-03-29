#include <iostream>
#include <algorithm> // Added for std::swap
#include <random>    // Added for std::random_device, std::mt19937, and std::uniform_int_distribution
#include <chrono>



// Function for Selection sort
void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    // One by one move boundary of
    // unsorted subarray
    for (i = 0; i < n - 1; i++) {

        // Find the minimum element in
        // unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        // Swap the found minimum element
        // with the first element
        if (min_idx != i)
            std::swap(arr[min_idx], arr[i]);
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    auto start = std::chrono::high_resolution_clock::now();


    const int N = 1000000;  // Various number of input
    int arr[N];

    // Filling the array with random numbers
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 1000; // Generates random numbers between 0 and 999
    }

    std::cout << "Original array: ";
    printArray(arr, N);

    // Function Call
    selectionSort(arr, N);

    std::cout << "Sorted array: ";
    printArray(arr, N);

    auto end = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

    std::cout << "Execution time: " << duration << " ms" << std::endl;



    return 0;
}
