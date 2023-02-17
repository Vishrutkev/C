/***************************************
* 23W - Lab01 *
* Author: Kevadiya, Vishrut *
* EECS/Prism username: vishrutk *
* Yorku Student #: 219155290 *
* Email: vishrutk@my.yorku.ca*
****************************************/



#include <stdio.h>

int main() {
    int c, i;
    char arr[11] = {0};

    while((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            arr[c - '0']++;
        } else {
            arr[10]++;
        }
    }

    for (i = 0; i < 10; i++) {
        printf("%d: %d\n", i, arr[i]);
    }

    printf("X: %d\n", arr[10]);

    return 0;
}

