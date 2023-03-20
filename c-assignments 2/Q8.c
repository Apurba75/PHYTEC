/*C Program to Check Whether a Character is a Vowel or Consonant*/

#include<stdio.h>
int main()
{
    char al;
    printf("Enter an alphabet: ",al);
    scanf("%c",&al);
    if(al=='a' || al=='e' || al=='i' || al=='o' || al=='u')
    {
        printf("%c is a vowel.",al);
    }
    else
    {
        printf("%c is a consonant.",al);
    }
    return 0;
}