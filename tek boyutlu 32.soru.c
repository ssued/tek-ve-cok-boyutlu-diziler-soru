#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char cumle[100];
	int i=0,j=0;
	
	printf("bir cumle giriniz:\n");
	gets(cumle);
	
	while(cumle[i]!='\0')
	{
		if(cumle[i]==','||cumle[i]==';'||cumle[i]==':'||cumle[i]==' ')
			cumle[i]='*';
		
	
		i++;
		
	}
	printf("\ncumlenin yeni hali: %s",cumle);
	
	return 0;
}
