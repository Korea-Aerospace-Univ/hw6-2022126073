#include <stdio.h>

int main(void)
{
    int arr1[20], arr2[20];
    int *p, *pa, *pb, N;

    scanf("%d", &N);

    for (p = arr1; p < arr1 + N; p++) {
        scanf("%d", p);
    }

    for (p = arr2; p < arr2 + N; p++) {
        scanf("%d", p);
    }

    pa = arr1;         
    pb = arr2 + N - 1;  

    for (int i = 0; i < N; i++) {
        printf(" %d", *pa + *pb);
        pa++;
        pb--;
    }              
    printf("\n");  

    return 0;
}
