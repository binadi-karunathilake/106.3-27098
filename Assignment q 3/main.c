#include <stdio.h>
int RBinarySearch(int arr[], int l, int h, int key) {
    if (l == h) {
        if (arr[l] == key)
            return l;
        else
            return -1;
    } else {
        int mid = (l + h) / 2;

        if (key == arr[mid]) {
            return mid;
        } else if (key < arr[mid]) {
            return RBinarySearch(arr, l, mid - 1, key);
        } else {
            return RBinarySearch(arr, mid + 1, h, key);
        }
    }
}
void main()
{
int arr[] = {2, 8, 9, 11, 15, 45, 58, 78, 99};
int n = sizeof(arr) / sizeof(arr[0]);
int key = 2;
int index = RBinarySearch(arr, 0, n - 1, key);
if (index != -1)
{
printf("Element %d found at index %d.\n", key, index);
} else {
printf("Element %d not found in the array.\n", key);
}
return 0;
}
