
// simple push and pop for reverse ;

#include<stdio.h>
#include<stdlib.h>


# define n 7 
int top =-1;
int stack [n];
int x;

 void push()
{  
 het:
  if(top==n-1)
    {
        printf("stack overflow\n");

    }


else 
{
    
    printf("enter the number ");

    scanf("%d",&x);

    top ++;
   
    stack[top]=x;
   
   goto het;

}
}

void reverse()
{
  patel : if (top==-1)
 {
    printf("stack is empty\n");
 }
 else 
{
 printf("reverse of input element is : %d \n ",stack[top]);

 top--;

 goto patel;
}


}
void display()
{

    printf("element are :  \n");
for(int i=0;i<=n-1;i++)
{
    printf("%d\n", stack[i] );
 
 }

} 

int main()
{

 push();

 display();

 reverse();
 

    return 0;
}   