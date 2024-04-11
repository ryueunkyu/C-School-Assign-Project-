#include <stdio.h>

int main() {
    int numIntegers;
    int total = 0, largest, smallest, positive = 0, negative = 0, countNegative = 0, countBetween50and100 = 0;

    do {
        printf("How many integers do you want to input? (must be at least 5): ");
        scanf("%d", &numIntegers);
        if (numIntegers < 5) {
            printf("Invalid number\n");
        }
    } while (numIntegers < 5);

    printf("Please input %d integers:\n", numIntegers);
    
    // Initialize largest and smallest with the first input
    scanf("%d", &largest);
    smallest = largest;

    for (int i = 0; i < numIntegers; ++i) {
        int num;
        scanf("%d", &num);

        total += num;

        if (num > largest) {
            largest = num;
        }
        if (num < smallest) {
            smallest = num;
        }

        // Check positive and negative numbers
        if (num > 0) {
            positive += num;
        } else if (num < 0) {
            negative += num;
            countNegative++;
        }

        // Check numbers between 50 and 100
        if (num >= 50 && num <= 100) {
            countBetween50and100++;
        }
    }

    printf("The total is: %d\n", total);
    printf("Largest is: %d Smallest is: %d\n", largest, smallest);
    printf("Total of positive integers: %d\n", positive);
    printf("Total of negative integers: %d\n", negative);
    printf("How many negative integers: %d\n", countNegative);
    printf("How many integers between 50 and 100: %d\n", countBetween50and100);

    return 0;
}
