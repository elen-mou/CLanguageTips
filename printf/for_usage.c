#include <stdio.h>

int main(void) {
    int i = 0;
    for (int j = 0; j < 5; j++)
        i++;
    printf("%d\n", i);
    return 0;
}

// Output: 5

// Explanation: 
// The for loop runs 5 times, incrementing i by 1 each time.

// Wrong usage of for loop
// #include <stdio.h>

// int main(void) {
//     int i = 0;
//     for (int j = 0; j < 5; j++)
//         i = i++;
//     printf("%d\n", i);
//     return 0;
// }