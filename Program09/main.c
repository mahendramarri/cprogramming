#include <stdio.h>

int main()
{

    int i, j, n, a = 1;

    printf("Enter the number of rows of Floyd's triangle to print : ");
    scanf("%d", &n);

    printf("\nFLOYD'S TRIANGLE : \n");

    for(i = 1; i <= n; i++){

        for(j = 1; j <= i; j++){
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }


    return 0;
}
