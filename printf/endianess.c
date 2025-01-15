#include <stdio.h>
#include <stdint.h>

int main(void) {
    unsigned int x = 0xABCD;       
    unsigned int y = 0xABCD1234;    

    // Create a pointer of type uint8_t that points to the address of the variable x
    // The pointer x2 can be used to read the bytes of the variable x
    uint8_t *x2 = (uint8_t *)&x;

    // Print the values of x and y in hexadecimal format
    printf("x = %x\ny = %x\n\n", x, y);

    // Print the first two bytes of the variable x using the pointer x2
    // *x2 is the first byte, and *(x2 + 1) is the second byte
    printf("x2 = %x%x\n", *x2, *(x2 + 1));

    // Print all four bytes of the variable y
    // We use casting to uint8_t* to read the bytes one by one
    printf("y2 = %x%x%x%x\n",
            *(uint8_t *)&y,          // First byte of y
            *((uint8_t *)&y + 1),    // Second byte of y
            *((uint8_t *)&y + 2),    // Third byte of y
            *((uint8_t *)&y + 3)     // Fourth byte of y
          );

    return 0;
}