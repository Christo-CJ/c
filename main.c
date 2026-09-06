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


int integer(int num)
{
printf("%d",num);
num=num+10;
return num;
}
int * array(int *a)
{
    for(int i=0;i<5;i++)
printf("%d",a[i]);
a[4]=8;
return a;
}

char * string(char *s)
{char *q;
    q=s;
    while(*q)
    {
        printf("%c",*q);
        q=q+1;
    }
    
    return s;
}

int * bubble_sort_array(int *a,int ele)
{
    for(int i=0;i<ele-1;i++)
    {
        for(int j=0;j<ele-1-i;j++)
        {
            if(a[j]<a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
return a;
}

int * selection_sort_array(int * a,int ele)
{
    for(int i=0;i<ele-1;i++)
    {
        for(int j=i;j<ele-1;j++)
        {
            if(a[i]>a[j+1])
            {
                int t=a[i];
                a[i]=a[j+1];
                a[j+1]=t;
            }
        }

    }
    return a;
}

void string_reverse(char *s)
{
char *q=s;

while(*q)
q++;

q--;

while(s<q)
{
    char ch=*s;
    *s=*q;
    *q=ch;
    s++;
    q--;
}

//return s;
}

void string_reverse_p2p(char * p ,char * q)
{
while(p<q)
{
    char ch= *p;
    *p=*q;
    *q=ch;
    p++;
    q--;
}

}

char * charachter_search(char * s,char ch)
{
    while(*s)
    {
        if(*s==ch)
        {
            return s;
        }
        s++;
    }
    return 0;
}

void sentence_word_reorder(char *s)
{
string_reverse(s);
printf("%s",s);
char *p,*q;
p=s;
while(q=charachter_search(p,' '))
{
string_reverse_p2p(p,q-1);
p=q+1;
}
string_reverse(p);

}
int main()
{

int num=20;
int ret=integer(num);
printf("%d",ret);
printf("\n");
int arr[5]={1,2,3,4,5};

int *b = array(arr);
for(int i=0;i<5;i++)
printf("%d",b[i]);
printf("\n");
char s[5]="abcde";
char * str = string(s);
printf("%s",str);

printf("\n");
printf("bubble:");
int sort[5]={7,8,1,8,2};
int ele = sizeof(sort)/sizeof(sort[0]);
int *d = bubble_sort_array(sort,ele);

for(int i=0;i<5;i++)
{
printf("%d",d[i]);
}

printf("\n");
printf("selection sort:");
int ssort[5]={9,5,6,3,9};
int ele1=sizeof(ssort)/sizeof(ssort[0]);
int *e =selection_sort_array(ssort,ele1);

for(int i=0;i<ele;i++)
{
    printf("%d",e[i]);
}

printf("\n");
/*
char string[]="christo";
string_reverse_p2p(string+2,string+4);

printf("%s",string);

printf("\n");

char string[]="christo";
string_reverse(string);

printf("%s",string);

printf("\n");

char * re=charachter_search(string,'h');
if(ret ==0)
printf("not found\n");
else
printf("found return address %d",re);
printf("\n");
*/
char sentence[]="hi how are you";
printf("first sentence %s",sentence);
sentence_word_reorder(sentence);
printf("\n");

printf("after sentence %s",sentence);

}

