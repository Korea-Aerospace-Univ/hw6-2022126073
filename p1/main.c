#include <stdio.h>

int main(void)
{
    char arr[10];
    char *p= nullptr, *q= nullptr, maxchar= '\0';
    int maxcount= 0;
    
    for(p = arr; p < arr +10; p++){
        scanf("%c", p);
    }
    for(p = arr; p < arr +10; p++){
        int count=0;
        for(q= arr; q < arr +10; q++){
        if(*p == *q) count++;
        }
        if (count>maxcount){
            maxcount = count;
            maxchar = *p;
        }
    }
    printf("%c %d\n", maxchar, maxcount);
}
