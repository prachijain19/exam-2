#include<stdio.h>
void main()
{
    int num;
    char ch;
    printf("enter the value: ");
    scanf("%d",&num);
    ch=num>=90
         ?'A' :
         num>=80
        ?'B':
        num>=70
        ?'C': 
        num>=60
        ?'D':
        num>=50
        ?'E': ' ';

    switch(ch)
    {
    case 'A':
    printf("well done");
        break;        
    }                            
    switch(ch)
    {
    case 'B':
    printf("good job");
    break;        
    }                            
    switch(ch)
    {
    case 'C':
    printf("nice");
        break;        
    }                            
    switch(ch)
    {
    case 'D':
    printf("good");
    break;        
}  
    printf("\n%c",ch);
}