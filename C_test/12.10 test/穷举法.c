#include <stdio.h>
int main(){
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
		{
			for(c=1;c<=5;c++)
			{
				for(d=1;d<=5;d++){
					
					for(e=1;e<=5;e++)
					{
						if(   (b==2 || a==3)
							&&(b==2 || e==4)
							&&(c==1 || d==2)
							&&(c==5 || d==3)
							&&(e==4 || a==1))
						{
							if(a*b*c*d*e==120)
							{
								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
							}							
						}
					}
				}
			}
		}
	}
	return 0;
}

