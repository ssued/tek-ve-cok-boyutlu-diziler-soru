#include <stdio.h>
#include <stdlib.h>

//�ok Boyutlu Soru 31: D��ar�dan al�nan matrisin ana k��egen elemanlar�n� kar��l�kl� yer de�i�tirip ekrana yazd�ran kod.

int main()
{
	int n, i, j, temp;
	printf("Matris(n*n) eleman sayisi(n) giriniz: ");
	scanf("%d", &n);
	int a[n][n];
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Matris icin eleman giriniz==>  a[%d][%d]=", i+1, j+1);
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("\nSizin girdiginiz matris: \n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	
	printf("\n");
	
	for(i=0; i<n/2; i++)
	{
		temp=a[i][i];
		a[i][i]=a[n-i-1][n-i-1];
		a[n-i-1][n-i-1]=temp;
	}
	
	printf("Ana kosegenine gore elemanlari degismis matris: \n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	
	return 0;
}
