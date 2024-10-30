#include <stdio.h>
#include "sorting.h"
#include "searching.h"
#include "graph.h"
#include "utils.h"

int main() {
    // Example usage of sorting
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printArray(arr, n);

    // Example usage of searching
    int index = binarySearch(arr, n, 5);
    printf("Element found at index: %d\n", index);

    return 0;
}
