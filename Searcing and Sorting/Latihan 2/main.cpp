#include<stdio.h>
#include<conio.h>
#include<string.h>

struct name             //custom data tipe
{
    char a[10];

}b [10];

int main()
{
    int N,i,j;
    int c=0;
    char name[10];

    printf("how many names : ");
    scanf("%d", &N); fflush(stdin);
    for( i=0;i<N;i++)
    {
        printf("Enter %d name :", i+1);
        gets(b[i].a);
    }

    printf("\n\nEntered name list :");
    for(i=0;i<N;i++)
    {
            printf("\n%s",b[i].a);
    }

    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;i++)
        {
            if((strcmp(b[i].a,b[j].a))>0)
        {
            char temp[10];
            strcpy(temp,b[i].a);
            strcpy(b[i].a,b[j].a);
            strcpy(b[j].a,temp);
        }
    }

}

printf("\n\nSorted name list :");
for(i=0;i<N;i++)
{
        printf("\n%s",b[i].a);
}

printf("\n\nEnter name to search : ");
gets(name);
for(i=0;i<N;i++)
{
    if((strcmp(b[i].a,name))==0)
        c++;
}
if (c==0)
{
    printf("%s not found .",name);
}
else
{
    printf("%s remains %d time .",name,c);
}
getch();
}
