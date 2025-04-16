#include <stdio.h>

int main(void)
{
    int n = 8;
    int arr[n];

    arr[4] = 100;
    arr[0] = 43;

    printf("arr idx 4 = %d\n", arr[4]);
    printf("arr idx 0 = %d\n", arr[0]);

    return 0;
}
