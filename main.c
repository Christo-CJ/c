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

void binary_number(int num)
{
    int pos;
    for(int pos=31;pos>=0;pos--)
    {
      int r=num>>pos&1;
      printf("%d",r);
    }
}

void binary_reverse(int num)
{
    int m,n;
    for(int i=31,j=0;i>j;i--,j++)
    {
        m=num>>i&1;
        n=num>>j&1;

        if(m!=n)
        {
            num=num^1<<i;
            num=num^1<<j;
        }
    }
    for(int pos=31;pos>=0;pos--)
    {
        printf("%d",num>>pos&1);
    }
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

printf("\n");

int num1=256;
binary_number(num1);
printf("\n");
binary_reverse(num1);

//array multiplication

int r1=0,r2=0,c1=0,c2=0;
printf("\n");
printf("row1\n");
scanf("%d",&r1);
printf("col1\n");
scanf("%d",&c1);
printf("row2\n");
scanf("%d",&r2);
printf("col2\n");
scanf("%d",&c2);
if(c1!=r2)
{printf("not possible multiplication");
return 0;
}

int mat1[r1][c1], mat2[r2][c2], mat3[r1][c2];


    printf("matrix1\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("%d",mat1[i][j]);
        }
        printf("\n");
    }


        printf("\nmatrix2\n");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }

    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d",mat2[i][j]);
        }
        printf("\n");
    }


    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {mat3[i][j]=0;
            for(int k=0;k<r2;k++)
            {
                mat3[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d",mat3[i][j]);
        }
        printf("\n");
    }


    printf("malloc\n");
    int **p;
    int a1,b1;
    printf("a1\n");
    scanf("%d ",&a1);
    printf("b1\n");
    scanf("%d",&b1);
    p=malloc(a1*sizeof(int*));

    for(int i=0;i<a1;i++)
    {
        p[i]=malloc(b1*sizeof(int));
    }
printf("enter:");
    for(int i=0;i<a1;i++)
    {
        for(int j=0;j<b1;j++)
        {
            scanf("%d",&p[i][j]);
        }
    }

    for(int i=0;i<a1;i++)
    {
        for(int j=0;j<b1;j++)
        {
            printf("%d",p[i][j]);
        }printf("\n");
    }

}

