#include <stdio.h>
int main()
{
    int i, j, o;

    printf("홀수를 입력하세요.");
    scanf_s("%d", &o);
//dsd
    if (o % 2 == 1) {
        for (i = 0; i < o; i++)
        {
            for (j = 0; j < i; j++)
                printf(" ");
            for (j = i; j < o; j++)
                printf("*");
            printf("\n");
        }
    }
    else {
        printf("입력 오류.");
    }
    return 0;
}
