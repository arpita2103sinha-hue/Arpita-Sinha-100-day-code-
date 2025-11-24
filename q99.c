#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    char dd[3], mm[3], yyyy[5];

    printf("Enter date (dd/04/yyyy): ");
    gets(date);

    strncpy(dd, date, 2);
    dd[2] = '\0';

    strncpy(mm, date + 3, 2);
    mm[2] = '\0';

    strncpy(yyyy, date + 6, 4);
    yyyy[4] = '\0';

   
    char monthName[4];

    if (strcmp(mm, "01") == 0) strcpy(monthName, "Jan");
    else if (strcmp(mm, "02") == 0) strcpy(monthName, "Feb");
    else if (strcmp(mm, "03") == 0) strcpy(monthName, "Mar");
    else if (strcmp(mm, "04") == 0) strcpy(monthName, "Apr");
    else if (strcmp(mm, "05") == 0) strcpy(monthName, "May");
    else if (strcmp(mm, "06") == 0) strcpy(monthName, "Jun");
    else if (strcmp(mm, "07") == 0) strcpy(monthName, "Jul");
    else if (strcmp(mm, "08") == 0) strcpy(monthName, "Aug");
    else if (strcmp(mm, "09") == 0) strcpy(monthName, "Sep");
    else if (strcmp(mm, "10") == 0) strcpy(monthName, "Oct");
    else if (strcmp(mm, "11") == 0) strcpy(monthName, "Nov");
    else if (strcmp(mm, "12") == 0) strcpy(monthName, "Dec");

   
    printf("%s-%s-%s", dd, monthName, yyyy);

    return 0;
}

