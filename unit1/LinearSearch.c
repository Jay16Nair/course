#include <stdio.h>

int main() {
    int i, j, n, key, index;
    printf("Enter Number of Elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter an element to be found: ");
    scanf("%d", &key);
    index = -1; // Initialize index to -1, indicating element not found
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;
            break; // Once the element is found, no need to continue the loop
        }
    }
    if (index != -1) {
        printf("Element is present at index %d\n", index);
    } else {
        printf("Element not found\n");
    }
    return 0;
}
