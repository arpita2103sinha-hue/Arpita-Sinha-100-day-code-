//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/

#include <stdio.h>
void main(){
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0'){
        char ch = str[i];
        // Toggle case
        if(ch >= 'a' && ch <= 'z'){
            str[i] = ch - ('a' - 'A'); // Convert to uppercase
        } else if(ch >= 'A' && ch <= 'Z'){
            str[i] = ch + ('a' - 'A'); // Convert to lowercase
        }
        i++;
    }
    printf("Toggled case string: %s", str);
}
