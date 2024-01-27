#include <stdio.h>

int findCheapestProductIndex(float prices[], int n) {
    if (n <= 0) {
        // Handle invalid input
        return -1;
    }

    int cheapestIndex = 0; // Assume the first product is the cheapest initially

    for (int i = 1; i < n; ++i) {
        if (prices[i] < prices[cheapestIndex]) {
            cheapestIndex = i; // Update the index if a cheaper product is found
        }
    }

    return cheapestIndex;
}

int main() {
    int n;

    // Get the number of products
    printf("Enter the number of products: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of products. Exiting program.\n");
        return 1;
    }

    float prices[n];

    // Get the prices of each product
    for (int i = 0; i < n; ++i) {
        printf("Enter the price of product %d: $", i + 1);
        scanf("%f", &prices[i]);
    }

    // Find the index of the cheapest product
    int cheapestIndex = findCheapestProductIndex(prices, n);

    // Display the result
    printf("The best deal is on product %d with index %d with a price of $%.2f.\n", cheapestIndex + 1,cheapestIndex, prices[cheapestIndex]);

    return 0;
}

