#include <stdio.h>
#include <stdlib.h>
int x = 2;
int y;
int main()
{
y = ++x * ++x;
printf("%d",y);
}
