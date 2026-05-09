#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int isprime;
    if(n<2){
        isprime=1;
    }
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            isprime=0;
        }
    }
    if(isprime==0){
        printf("Not a prime");
    }
    else{
        printf("Prime");
    }
    
}