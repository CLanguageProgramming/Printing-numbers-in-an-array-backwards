//With For loop
#include <stdio.h>
int main()
{
    int a[100];
    int get;
    int i=0;
    
    printf("Enter the number of number you want to enter:- ");
    scanf("%d", &get);
    //printf("Number entered is %d\n", get);
    while(i<get)
    {
        printf("enter a number:- ");
        scanf("%d", &a[i]);
       // printf("You have entered %d\n",a[i]);
        getchar();
        i++;
    }
    printf("i == %d\n", i);
    //i==get
    //correct down here👇
    printf("Numbers entered are:- ");
    for(int i = get- 1;i>=0;i--)
    {
        //printf("entered loop");
        //break;
        printf("%d,", a[i]);
    }
}
