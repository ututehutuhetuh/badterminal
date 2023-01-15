#include <iostream>
#include "./conio.h"

int main() {
    char buffer[100];

    for(int i = 0; i < sizeof(buffer); i++ ) {
        buffer[i] = getch();

        // if the input was enter
        if(buffer[i] == 10) {
            buffer[i] = 0;                  // delete the white space

            i = sizeof(buffer);
        }
    }

    printf("you typed: %s", buffer); // I didn't add \n because I want to see if the buffer newline still there or not.

    return 0;
}
