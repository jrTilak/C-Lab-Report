// [Desc: Reads and prints ASCII value of a character]
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("ASCII value of the entered character is: %d\n", ch);

    return 0;
}
