#include <stdio.h>

int maxDepth(char *s)
{
    int max = 0, count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '(')
        {
            count++;
            if (count > max)
                max = count;
        }
        else if (s[i] == ')')
            count--;
    }
    return max;
}

int main()
{
    char s[100];
    scanf("%s", s);
    printf("%d\n", maxDepth(s));
    return 0;
}