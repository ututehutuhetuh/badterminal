#include <iostream>
#include "./conio.h"
#include <cstdlib>
#include <string.h>
int main() {
    char buffer[100];

    for(int i = 0; i < sizeof(buffer); i++ ) {
        buffer[i] = getch();

        // backspace
        if(buffer[i] == 127) {
            system("clear");

            buffer[i - 2] = 0;
            i -= 2;

            for(int j = 0; j < strlen(buffer); j++) {
                printf("*");
            }
        }
        // if the input was enter
        else if(buffer[i] == 10) {
            buffer[i] = 0;                  // delete the white space

            i = sizeof(buffer);
        }
        else {
            printf("*");
        }
    }

    printf("you typed: %s", buffer); // I didn't add \n because I want to see if the buffer newline still there or not.

    return 0;
}
