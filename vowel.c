#include<stdio.h>
int main()
{
char c[5];
scanf("%c",c);
if(c=='a'||c=='e'||c=='o'||c=='i'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
{
printf("Vowel");
}
else
{
printf("Consonant");
}
return 0;
}
