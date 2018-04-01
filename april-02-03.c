#include<stdio.h>
int main()
{
    char sing_ch;

    printf("Input a character : ");
    scanf("%c",&sing_ch);

    if ((sing_ch >= "a" && sing_ch <= "z") || (sing_ch >= "A" && sing_ch <= "Z"))
    {
        printf("This is an Alphabet!");
    }
    else if (sing_ch >= "0" && sing_ch <= "9")
    {
        printf("This is Digit!");
    }
    else
    {
        printf("This is special character!");
    }
    return 0;
}
