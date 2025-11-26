

#include <stdio.h>

int main()
{
    int num;
    int count =1;
    scanf("%d", &num);
    for(int i=1; i<=num; i++){
        for(int j=1; j<=num; j++){
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }

    return 0;
}