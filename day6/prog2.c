//2.program for strings without using string library

#include<stdio.h>
#include<string.h>
void length (char c[],char d[]); 
void concat(char x[],char y[] );
void copy(char k[], char l[] );
void compare(char m[],char n[]);
void reverse(char r[]);

int main()
{
char c[100];
char d[100];
char h[100];
int i,j;
printf("enter the string\n");
scanf("%s%s",c,d);
length(c,d);
concat(c,d);
printf("string concatenate= %s\n",c);
copy(h,d);
printf("string copy= %s\n",h);
compare(c,d);
reverse(c);
return 0;
}
void length (char c[],char d[])
{
int i,j,length1=0,length2=0;
for(i=0;c[i]!='\0';i++)      
{
length1++;
}

for(j=0;d[j]!='\0';j++)      
{
length2++;
} 

printf("length of string 1 is %d\n",length1);
printf("length of string 2 is %d\n",length2);

}

void concat(char x[],char y[] )
{
int i,j;
i=strlen(x);
for(j=0;y[j]!='\0';j++)         
{
x[i]=y[j];
i++;
}
x[i]='\0';
}

void copy(char k[], char l[] )
{
int i,j;
for(j=0;l[j]!='\0';j++)  
{
k[j]=l[j];
}
k[j]='\0';

}



void compare(char m[],char n[])
{
int i;
while (m[i]==n[i]&&m[i]!=0)
i++;
if(m[i]>n[i])
{
printf("comparision of two strings: m>n\n");
}
else if(m[i]<m[i])
{
printf("comparision of two strings: m<n\n");
}
else
{
printf("comparision of  two strings : m=n\n");
}
}

void reverse(char r[])
{
int l,i;
l=strlen(r);
printf("reversed string\t");
for(i=l-1;i>=0;i--)
{
printf("%c",r[i]);
}
printf("\n");
}





















