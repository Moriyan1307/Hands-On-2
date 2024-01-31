# CSE 5311 Hands-on Assignment

Here, I have implemented three sorting algorithms: Bubble Sort, Insertion Sort, and Selection Sort. The input data for each algorithm is generated randomly every time the program is executed. The elements in the arrays are randomly generated for the specified input size. By changing the variable for the array size (denoted as 'n'), you can easily modify the input size. Additionally, each algorithm measures its own execution time.

The code has been designed to dynamically adapt to different input sizes, offering flexibility for performance analysis. Specifically, the program utilizes random data for input, ensuring a diverse and dynamic testing environment. Furthermore, each sorting algorithm autonomously records its execution time, providing valuable insights into their respective efficiencies.

Feel free to adjust the array size variable to analyze the algorithms' performance under various input conditions.

# Selection Sort Algorithm

Selection Sort is a simple sorting algorithm that works by repeatedly selecting the minimum element from the unsorted part of the array and putting it at the beginning.

## Algorithm Steps:

1. **Initialization:**
   - Set `i` to 0 (the index of the first element).
   - The entire array is considered unsorted.

2. **Selection and Swap:**
   - For each iteration:
     - Find the minimum element in the unsorted subarray (`arr[i..n-1]`).
     - Swap the minimum element with the first element in the unsorted subarray (`arr[i]`).

3. **Move Boundary:**
   - Move the boundary between the sorted and unsorted subarrays one position to the right (`i++`).

4. **Repeat:**
   - Repeat steps 2-3 until the entire array is sorted (`i == n-1`).

## Correctness Argument:

- **Initialization:**
  - At the beginning, the entire array is unsorted (`i = 0`), and the sorted subarray is empty.

- **Maintenance:**
  - At the end of each iteration, the minimum element is correctly placed in the sorted subarray.
  - The invariant is maintained: `arr[0..i]` is sorted, and `arr[i+1..n-1]` is unsorted.

- **Termination:**
  - The algorithm terminates when the entire array is sorted (`i == n-1`).
  - The sorted subarray spans the entire array, and the unsorted subarray is empty.

- **Overall:**
  - The algorithm consistently selects the minimum element and correctly builds a sorted array.

This argument, combined with the algorithm steps, demonstrates the correctness of Selection Sort.
