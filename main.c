#include <stdio.h>

int main(void) {
    int x;

    // 数値を入力する
    scanf("%d", &x);

    // 0 以上 10 未満の判定
    if (0 <= x && x < 10) {
        printf("OK\n");
    } else {
        printf("NG\n");
    }

    return 0;
}
