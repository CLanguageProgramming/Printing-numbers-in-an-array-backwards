//2. Accept elements of the array and display in reverse order.
#include <stdio.h>
int main()
{
    int a[100];
    int get;
    
    printf("Enter the number of number you want to enter:- ");
    scanf("%d", &get);
    printf("Number entered is %d\n", get);
    int i=0;
    while(i<get)
    {
        printf("enter a number:- ");
        scanf("%d", &a[i]);
        printf("You have entered %d\n",a[i]);
        getchar();
        i++;
    }
    //correct down here👇
    printf("Numbers entered are:- ");
    while(i>=0)
    {
        printf("%d\t", a[i]);
    }
}
