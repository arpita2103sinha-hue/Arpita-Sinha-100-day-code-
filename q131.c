#include <stdio.h>

enum Days {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    enum Days day;

    for (day = SUNDAY; day <= SATURDAY; day++) {
        printf("%d ", day);   

       
        switch (day) {
            case SUNDAY:    printf("SUNDAY\n"); break;
            case MONDAY:    printf("MONDAY\n"); break;
            case TUESDAY:   printf("TUESDAY\n"); break;
            case WEDNESDAY: printf("WEDNESDAY\n"); break;
            case THURSDAY:  printf("THURSDAY\n"); break;
            case FRIDAY:    printf("FRIDAY\n"); break;
            case SATURDAY:  printf("SATURDAY\n"); break;
        }
    }

    return 0;
}

