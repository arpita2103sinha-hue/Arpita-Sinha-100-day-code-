#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum TrafficLight signal;

    printf("Enter traffic signal (0 = RED, 1 = YELLOW, 2 = GREEN): ");
    scanf("%d", &signal);

    switch (signal) {
        case RED:
            printf("Stop\n");
            break;

        case YELLOW:
            printf("Wait\n");
            break;

        case GREEN:
            printf("Go\n");
            break;

        default:
            printf("Invalid signal!\n");
    }

    return 0;
}

