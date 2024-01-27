#include <stdio.h>

int isDuplicate(int arr[], int currentIndex, int value) {
    for (int i = 0; i < currentIndex; ++i) {
        if (arr[i] == value) {
            return 1;  // It's a duplicate
        }
    }
    return 0;  // It's not a duplicate
}

int main() {
    int uniqueValues[25];
    int currentIndex = 0;
    int inputValue;

    while (currentIndex < 25) {
        printf("Enter a number between 10 and 100: ");
        scanf("%d", &inputValue);

        // Validate input
        if (inputValue < 10 || inputValue > 100) {
            printf("\nInvalid input. Enter a number between 10 and 100.\n");
            continue;
        }

        // Check for duplicates
        if (!isDuplicate(uniqueValues, currentIndex, inputValue)) {
            uniqueValues[currentIndex] = inputValue;
            ++currentIndex;
        }
    }

    // Display unique values
    printf("\nUnique values entered:\n");
    for (int i = 0; i < currentIndex; ++i) {
        printf("%d ", uniqueValues[i]);
    }

    return 0;
}
