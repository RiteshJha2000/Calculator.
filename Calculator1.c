#include<stdio.h>

int main()
{
    printf("Calculator\n");
    
    int x,y, choice;
    while(1)
    {
    printf("\n\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Division");
    printf("\n4.Multiplication");
    printf("\n5.Square");
    printf("\n6.Cube");
    printf("\n7.exit");
    
    printf("\n\nEnter your choice");
    scanf("%d", &choice);
    switch(choice)
    {
    
    case 1:
    
    printf("Enter two numbers");
    scanf("%d %d",&x,&y);
    printf("Sum is %d",x+y);
    break;
    
    case 2:
    
    printf("Enter two numbers");
    scanf("%d %d",&x,&y);
    printf("Answer is %d",x-y);
    break;
    
    case 3:
    
    printf("Enter two numbers");
    scanf("%d %d",&x,&y);
    printf("Answer is %d",x/y);
    break;
    
    case 4:
    
    printf("Enter two numbers");
    scanf("%d %d",&x,&y);
    printf("Answer is %d",x*y);
    break;
    
    case 5:
    
    printf("Enter a number");
    scanf("%d",&x);
    printf("Square is %d",x*x);
    break;
    
    case 6:
    
    printf("Enter a number");
    scanf("%d",&x);
    printf("cube is %d",x*x*x);
    break;
    
    case 7:
    
    exit(0);
    break;
     
    default:
     
    printf("Invalid choice");
    }}
    
    return 0;
}