#include <stdio.h>
#include <math.h>

//�ok Boyutlu Soru 38: Klavyeden girilen sat�r say�s�na g�re Pascal ��genindeki ilgili sat�r say�s�ndaki elemanlar�n toplam�.

int main()
{
	int n, sonuc;
	printf("Pascal ucgenindeki eleman toplami istediginiz satiri giriniz: ");
	scanf("%d", &n);
	
	sonuc=pow(2, n-1);
	printf("%d. satirdaki elemanlarin toplami: %d", n, sonuc);
	
	return 0;
}
