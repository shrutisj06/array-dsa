#include<stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 3, 5};
    int arr2[] = {1, 3, 7, 8, 9};
    int n1 = 5;
    int n2 = 5;
    int i=0, j=0;


    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            printf("%d ", arr1[i]);
            i++;
        } else if (arr2[j] < arr1[i]) {
            printf("%d ", arr2[j]);
            j++;
        } else {
            printf("%d ", arr2[j]);
            i++;
            j++;
        }
    }


    while (i < n1) {
        printf("%d ", arr1[i]);
        i++;
    }
    while (j < n2) {
        printf("%d ", arr2[j]);
        j++;
    }

    return 0;
}
