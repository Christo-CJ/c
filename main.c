#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void funct(char *p)
{
if(*p)
{
    funct(p+1);
printf("%c",*p);

}
}
int main()
{
char s[20];
printf("string");
scanf("%s",s);
printf("%s",s);
printf("\n");
for(int i=0;s[i];i++)
{
    printf("%c",s[i]);
}
printf("\n");
           
int i=0,j=0;

for(i=0;s[i];i++)
{
        for(j=i+1;s[j];j++)
        {
            
            if(s[i]==s[j])
            {
                for(int k=j;s[k];k++)
                {
                    s[k]=s[k+1];
                }
                j--;
            }
            
    }

}

printf("%s",s);

}

