#include <stdio.h>

int main() {
    int a[5] = {5, 3, 1, 4, 2};
    int key, j;

    // 삽입 정렬
    for (int i = 1; i < 5; i++) {
        key = a[i]; // 기준값 저장
        
        // key보다 큰 값을 오른쪽으로 밀기
        for (j = i - 1; j >= 0 && a[j] > key; j--) {
            a[j + 1] = a[j];
        }
        a[j + 1] = key; // 적절한 위치에 삽입
    }

    // 출력
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}