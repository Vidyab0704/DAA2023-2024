#include <iostream>

int countZeros(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int middle = (left + right) / 2;
        if (arr[middle] == 1) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return size - left;
}

int main() {
    int arr[] = {1, 1,1,0, 0, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int numZeros = countZeros(arr, size);
    std::cout << "Number of zeros: " << numZeros << std::endl;

    return 0;
}
