#include <stdio.h>
#include <string.h>
int main()
{
    char n[100];
    int m;
    scanf("%s %d", n, &m);
    
    while(m)
    {
        int temp = n[strlen(n)-1];
        for (int i = strlen(n)-1; i > 0; i--)
        {
            n[i] = n[i-1];
        }
        n[0] = temp;
        m--;
    }

    for (int j = 0; j < strlen(n); j++)
    {
        printf("%c", n[j]);
    }
    printf("\n");
    return 0;
}