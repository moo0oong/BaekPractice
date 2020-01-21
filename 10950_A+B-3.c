#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t); 
    int a, b;
    for (int i = 0; i < t; i++) { 
        scanf("%d %d", &a, &b);  //scanf에서 개행이 있으면 한번 더 입력하게된다. 왜 그런지 고민해보자.
        printf("%d\n", a + b); 
    }
    return 0;
}
