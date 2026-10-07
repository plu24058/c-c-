#include <stdio.h>

int main() {
    int a[5] = {5, 3, 1, 4, 2};
    int temp;

    // 선택 정렬
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            // 앞의 값보다 뒤의 값이 더 작으면 바로 교환
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // 출력
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}