#include <stdio.h>
  
int main(void){
        float l, h, p;
        printf("What is the length: \n");
        scanf("%f", &l);
        printf("What is the height: \n");
        scanf("%f", &h);
        p = (2*l)+(2*h);
        printf("Perimeter: %.2f \n", p);
}
