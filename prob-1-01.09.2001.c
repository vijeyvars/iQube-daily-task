
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,l;
    int count=0;
    printf("enter the full sentence");
    gets(str);
    printf("\n %s",str);
    l=strlen(str);
    for(j=l-1;str[j]!=' ';j--)
        {
            count+=1;
        }


    printf("\n the length of last word of sentence is:%d",count);
    return 0;
}
