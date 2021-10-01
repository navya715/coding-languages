#include <stdio.h>
#include<math.h>

int main()
{
    long int o;
    int d=0,i=0;
    printf("enter the octal number: ",o);
    scanf("%ld",&o);
    while(1)
    {
        d+=o%10*pow(8,i++);
        o/=10;
    }
    printf("The equivalent decimal number  is %d",d);
    return 0;
}
