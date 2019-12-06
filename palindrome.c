#include<stdio.h>

int main()
{	
	int temp,r,sum=0;
	int p=1221;
	temp=p;    
    	while(p>0)    
   	{    
    		r=p%10;    
    		sum=(sum*10)+r;    
    		p=p/10;    
    	}    
    	if(temp==sum)    
    		printf("1221 is palindrome number ");    
    	else    
    		printf("1221 is not palindrome number");   
    
	return 0;
}
