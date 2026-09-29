#include <stdio.h>

int main(void)
{
    int score;
    int count[11] = {0};

    while (1)
    {
        scanf("%d", &score);

        if (score == 0)
            break;

        switch (score / 10)
        {
        case 1:
            count[1]++;
            break;
        case 2:
            count[2]++;
            break;
        case 3:
            count[3]++;
            break;
        case 4:
            count[4]++;
            break;
        case 5:
            count[5]++;
            break;
        case 6:
            count[6]++;
            break;
        case 7:
            count[7]++;
            break;
        case 8:
            count[8]++;
            break;
        case 9:
            count[9]++;
            break;
        case 10:
            count[10]++;
            break;
        }
    }
    for (int i = 10; i >= 1; i--)
    {
        if (count[i] > 0)
        {
            printf("%d: %d\n", i, count[i]);
        }
    }
    return 0;
}