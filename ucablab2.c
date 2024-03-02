#include <stdio.h>
#define TONS 35273.92

int main()
{

    double ounces, metric; // DOUBLE helps in storing high-precision sorts of floating-point
    int boxes = TONS / ounces + 1; // same as  x = x + 1;

    printf("Enter the weight of the cereal package in ounces: ");
    scanf("%lf", &ounces);

    metric = ounces / TONS + 1;
    printf("Weight of cereal package in metric tons: %.6f\n", metric);
    printf("Number of boxes for metric ton of cereal: %d\n", boxes);

    return 0;

}

