#include <stdio.h>
#include<stdlib.h>

void update(int *a,int *b) {
    // Complete this function 

    if(*a>*b){
    *b = *a-*b;
    *a = *a -*b +*a;
}
    else {
    *b = *b-*a;
    *a = *a + *b + *a;
    }
   //printf("%d\n%d",a,b);
}

int main() {
    int a, b;
    //int *pa = &a, *pb = &b;
    
    scanf("%d\n%d", &a, &b);
    update(&a, &b);
    printf("%d\n%d", a, b);

    return 0;
}

