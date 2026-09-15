#include <stdio.h>

int main()
{
    int score;

    printf("\n점수를 입력하세요 (0~100) : ");
    scanf("%d", &score);

    switch (score / 10) {
        case 10:
        case 9:
            printf("학점: A\n");
            break;
        case 8: 
            printf("학점: B\n");
            break;
        case 7: 
            printf("학점: C\n");
            break;
        case 6:  
            printf("학점: D\n");
            break;
        default:
            printf("학점: F\n");
            break;
    }

    return 0;
}
