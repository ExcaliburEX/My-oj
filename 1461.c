#include<stdio.h>
#include<string.h>
int time(char a)
{
int back;
   switch(a)
{
case 'a':
case 'd':
case 'g':
case 'j':
case 'm':
case 'p':
case 't':
case 'w':
case ' ':
back=1; break;
case 'b':
case 'e':
case 'h':
case 'k':
case 'n':
case 'q':
case 'u':
case 'x':
back=2; break;
case 'c':
case 'f':
case 'i':
case 'l':
case 'o':
case 'r':
   case 'v':
   case 'y':
   back=3; break;
   case 's':
   case 'z':
   back=4; break;
    } 
return back;
} 
int main()
{
	int i;
char a[1001]; 
int ans=0;
gets(a);
int str=strlen(a);
for (i=0; i<str; i++)
{
ans+=time(a[i]);
}
printf("%d",ans);
return 0;
}
