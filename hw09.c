#include <stdio.h>

int main(void) {
    int ch;
    char buffer[1024]; 
    int index = 0;

    printf("input> ");
    while (1) {
        ch = getchar();

        if (ch == '\n') {
            break; 
        }

        if ('A' <= ch && ch <= 'Z') {
            ch += 32; 
        }

       
        buffer[index++] = ch;
    }

    buffer[index] = '\0'; 

    printf("output> %s\n", buffer); 
    return 0;
}
