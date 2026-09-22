#include<stdio.h>

int main()
{
    int arr[3][4];
    int base, i, j;

    printf("Enter row index: ");
    scanf("%d", &i);

    printf("Enter column index: ");
    scanf("%d", &j);

    base = (int)&arr[0][0];

    printf("Base address = %d\n", base);
    printf("Actual address = %d\n", (int)&arr[i][j]);
    printf("Theoretical address = %d\n",
           base + ((i * 4) + j) * sizeof(int));

    return 0;
}
