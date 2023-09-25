#include <stdio.h>
int main()
{
    int i = 0, vec[10];
    for (i = 0; i < 10; i++)
    {
        vec[i] = (i + 1) * (i + 1);
    }
    for (i = 0; i < 10; i++)
    {
        printf("%i ", vec[i]);
    }
}