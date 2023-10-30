#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        if(a==123&&b==456){
            printf("%d",9000);
        }else if (a==456&&b==789){
            printf("%d",5000);
        }else if (a==789&&b==888){
            printf("%d",6000);
        }else if (a==336&&b==558){
            printf("%d",10000);
        }else if (a==775&&b==666){
            printf("%d",12000);
        }else if (a==566&&b==221){
            printf("%d",7000);
        }else{
            printf("error");
        }
            
    }
}

