#include <stdio.h>

int main() {
    int num, buttons, thread;
    float cloth, y, z;

    cloth = 4.5;
    buttons = 12;
    thread = 20;

    printf("Input number of shirts: ");
    scanf("%d",&num);

    printf("%.1f yards of cloth\n", cloth*num); // first group
    printf("%d buttons\n", buttons*num); // second group
    printf("%d yards of thread\n", thread*num); // third group

    return 0;
}

