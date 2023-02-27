#include <stdio.h>
#include <unistd.h>
#include<stdlib.h>
int p=0b0;
int main ()  
{ 
    while (1)  
    {  
         p=~p;  
         sleep(0.1);
         printf("%d",p);
           
         
    }  
}  