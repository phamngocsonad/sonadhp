#include <stdio.h>
int main()          // đếm số lần xuất hiện của các ký tự
{
    int i = 0, count[26] = {0};
    char c = '\0';
    printf("Please enter a line of text: \n");
    c = getchar();
    while (c != '\n' && c >= 0)
    {
        if (c <= 'z' && c >= 'a')
            ++count[c - 'a'];
        if (c <= 'Z' && c >= 'A')
            ++count[c - 'A'];
        c = getchar();
    }
for (i = 0; i < 26; ++i)
{
    if (count[i] > 0)
        printf("The letter '%c' appears %d time(s).\n", 'a' + i, count[i]);
}
return 0;
}