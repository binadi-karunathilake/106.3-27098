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

void main() {
    int arr[50],n,i,k;

    printf("\nEnter the n value: ");//n value is the number of elements you want to include in the array you are giving
    scanf("%d",&n);

    printf("\nEnter the %d sorted elements: ",n);//enter your elements in the ascending order
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("\nEnter the searching element: ");
    scanf("%d",&k);

    {i=RBinarySearch(arr,0,n-1,k);

    if(i!=1)
        printf("\n Element found at %d",i);
    else
       printf("\nElement is not found at index %d");
    }

}
