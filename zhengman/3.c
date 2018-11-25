#include<stdio.h>
int main()
{
	int i;
	char c[30];
	scanf("%s",&c);
    for(i=0;i<=29;i++)
    {
		if(('a'<=c[i])&&(c[i]<='z')||('A'<=c[i])&&(c[i]<='Z'))
		
			if(('v'<=c[i])&&(c[i]<='z')||('V'<=c[i])&&(c[i]<='Z'))
				c[i]-=21;
			else
				c[i]+=5;
			
	}
       printf("%s\n",c);

return 0;
}
