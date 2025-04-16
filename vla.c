#include <stdio.h>

int main() {
    int a = 5, b = 3, c = 2, result;

    __asm__ __volatile__ (
        "movl %1, %%eax;"   // eax = a
        "imull %2, %%eax;"  // eax = eax * b
        "addl %3, %%eax;"   // eax = eax + c
        "movl %%eax, %0;"   // result = eax
        : "=r"(result)      // output operand
        : "r"(a), "r"(b), "r"(c)  // input operands
        : "%eax"            // clobbered register
    );

    printf("Result: %d\n", result); // (5 * 3) + 2 = 17

    return 0;
}
