#include<stdio.h>
main()
{
    int  a = 1;
    int num[100], i = 0, count = 0, j = 0;
    while (a = 1) {
        printf("Enter number : ");
        scanf("%d", &num[i]);
        if (num[i] == 0) {
            break;
        }
        i++; count++;
    }
    for (j = 0; j <= count; j++) {
        printf("%d ", num[j]);
    }
}