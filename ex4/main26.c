#include <stdio.h>
int multi(int i, int j) {
    if (j == 1) {
        printf("%d*%d=%d\t", i, j, i*j);
        return 0;
    }else {
        multi(i, j-1);
        printf("%d*%d=%d\t", i, j, i*j);
    }
}
void table (int i) {
    if (i > 9) return;
    else{ 
        multi(i, 9);
        table(i + 1);
    }
}
int main() {
    table(1);
    return 0;
}
