#include <stdio.h>

int main() {
    int i, j, key, n, start, end, mid, found = -1;
    printf("Enter Number of Elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int temp;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Enter an element to be found: ");
    scanf("%d", &key);
    start = 0;
    end = n - 1;
    while (start <= end) {
        mid = (start + end) / 2;
        if (arr[mid] == key) {
            printf("%d is found at %d index", key, mid);
            found = 1;
            break;
        } else if (arr[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    if (found == -1) {
        printf("Element not present");
    }
    return 0;
}
