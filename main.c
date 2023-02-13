#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ROOT sqrt(b*b-4*a*c)

int main() {
    float a,b,c,x1,x2,realpart,imagpart;
    printf("enter the coefficient a,b and c");
    scanf("%f%f%f",&a,&b,&c);



    //condition for real and different roots
    if(ROOT>0){
        x1=(-b+ROOT)/(2*a);
        x2=(-b-ROOT)/(2*a);
        printf("x1=%.2f and x2=%.2f",x1,x2);
    }
    //condition for real and equal roots
    else if(ROOT==0){
        x1=x2=-b/(2*a);
        printf("x1=x2=&.2f;",x1);
    }
    //if roots are not real
    else{
        realpart=-b/(2*a);
        imagpart=ROOT/(2*a);
        printf("x1=%.2f+%.2f and x2=%.2f-%.2f",realpart,imagpart,realpart,imagpart);

        return 0;
    }











}
