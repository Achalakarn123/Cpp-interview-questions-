#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid;
    mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    int arr[8] = {2, 3, 4, 5, 6, 9,99, 91};
    int key = 9;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << binarySearch(arr, size, key);
    return 0;
}