#include<stdio.h>
#include<string.h>

int main() {
    int n,m=0,k,j;
    int a[10]={0,0,0,0,0,0,0,0,0,0};
        printf("(1)PUSH\n(2)POP\n(3)LIST\n(4)QUIT\n");
    while(1)
    {
        printf("�п�J�ﶵ:");
        scanf("%d",&n);

        if(n==1){
            printf("push���=");
            scanf("%d",&k);
            a[m]=k;
            m++;
        }
        else if(n==2){
            printf("pop���=");
            printf("%d\n",a[m-1]);
        }
        else if(n==3){
            for(int i=0;i<=9;i++){
                printf("%d\t",a[i]);
            }
            printf("\n");
        }
        else break;
    }
}
