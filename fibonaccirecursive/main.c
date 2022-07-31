#include <stdio.h>
#include <stdlib.h>

int f(int n)
{
    if(n == 0 || n == 1)
        return n;
    else
        return (f(n-1)+f(n-2));

}

int main(void)
{
    int x, i;

    printf("Bir sayi giriniz: ");
    scanf("%d", &x);
    for(i=1; i<=x; i++)
    {
        printf("Sayi %d: %d\n", i, f(i));

    }

    return 0;
}
