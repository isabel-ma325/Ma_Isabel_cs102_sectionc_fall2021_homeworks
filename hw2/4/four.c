#include <stdio.h>
  
int main(){
        int c, q, d, n, p;
        printf("number of cents: \n");
        scanf("%d", &c);
        q = c/25;
        d= ((c%25)/10);
        n= (((c%25)%10)/5);
        p= ((((c%25)%10)%5));

        printf("%d", q);
        printf(" quarters, %d", d);
        printf(" dimes, %d", n);
        printf(" nickles, %d", p);
        printf(" pennies\n");
}

