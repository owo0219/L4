#include<stdio.h>
#include<string.h>

int ah(char *str)
{
    int i;

    if(str[0]=='+')
    {

        for(i=1;i<strlen(str);i++)
        {
            if((i%2)==0)
                str[i]+=2;
            else
                str[i]+=1;
        }

    }
    else if(str[0]=='-')
    {
        for(i=1;i<strlen(str);i++)
        {
            if((i%2)==0)
                str[i]-=2;
            else
                str[i]-=1;
        }

    }



    printf("%s\n",str);
}

int main() {
    char s[100];
    scanf("%s",&s);
    ah(s);
}
