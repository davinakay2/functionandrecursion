#include <stdio.h>
#include <string.h>
int henry()
{
    char n[100], m[100];
    scanf("%s", n);
    int len = strlen(n);
    int temp = 0;
    char current;
    for (int i = 0; i < len; i++)
    {
        if ((n[i] < '0') || (n[i] > '9'))
        {
            current = n[i];
            m[temp++] = current;
        }
    }
    m[temp] = '\0';
    for (int i = 0; i < len; i++)
    {
        printf("%c", m[i]);
    }
    printf("\n");
    return 0;
}
int main()
{
    henry();
    return 0;
}