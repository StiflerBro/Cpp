// Here is a C++ solution that converts the given array to a reduced form where all elements are in range 0 to N-1


#include <iostream>
#include <algorithm>
using namespace std;

void convertArray(int arr[], int n)
{
    // Find the minimum element in the array
    int min_element = *min_element(arr, arr+n);

    // Subtract the minimum element from all elements
    for (int i = 0; i < n; i++)
        arr[i] -= min_element;

    // Find the maximum element in the array
    int max_element = *max_element(arr, arr+n);

    // Divide all elements by the maximum element
    for (int i = 0; i < n; i++)
        arr[i] /= max_element;
}

/*
This function takes in an array, arr, and its size, n, as input.
It first finds the minimum element in the array using the min_element() function from the <algorithm> library.
Then it subtracts the minimum element from all elements of the array.
Then it finds the maximum element in the array using the max_element() function from the <algorithm> library.
Then it divides all elements of the array by the maximum element.
It modifies the given array.
*/
