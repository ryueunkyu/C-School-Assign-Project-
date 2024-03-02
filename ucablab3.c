#include <stdio.h>
#define GALLON 450

int main() {
    int door, window;
    float length, width, room;

    room = 7.5;

    printf("Input number of doors: "); // first group
    scanf("%d", &door);
    printf("Input number of windows: "); // second group
    scanf("%d", &window);
    printf("Input length of the room: "); // third group
    scanf("%f", &length);
    printf("Input width of the room: "); // fourth group
    scanf("%f", &width);

    float wall = 2 * (length + width) * room;
    float doors = door * 18;
    float windows = window * 9;
    float wallneeded = doors - walls - window;
    float gallons = wallneeded / GALLON;

    printf("%f Gallons of paint are needed to paint\n", gallons);

    return 0;
}
