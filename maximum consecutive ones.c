#include<stdio.h>

void main() {
    int arr[] = {1, 1, 1, 3, 4, 2, 2, 1, 1, 1, 1, 1, 1, 1};
    int n = 14;
    int count = 0;
    int max_count = 0;

    for(int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            count++;
            if (count > max_count) {
                max_count = count;
            }
        } else {
            count = 0;
        }
    }

    printf("The maximum consecutive ones are %d", max_count);
}
