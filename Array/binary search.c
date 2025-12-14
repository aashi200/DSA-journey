#include <stdio.h>

int main() {
    int n, i, key;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements in sorted order: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int low = 0;
    int high = n - 1;
    int mid;
    int found = -1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            found = mid;
            break;
        }
        else if (key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if (found != -1)
        printf("Element found at index %d\n", found);
    else
        printf("Element not found\n");

    return 0;
}
