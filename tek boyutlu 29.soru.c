#include <stdio.h>
#include <string.h>

int main()
{
    char cumle[1000];
    char en_uzun_kelime[50];
    char en_kisa_kelime[50];
    char kelime[50];
    int i, j, en_uzun_kelime_uzunlugu, en_kisa_kelime_uzunlugu;

    printf("Cumleyi giriniz: ");
    gets(cumle);

    en_uzun_kelime_uzunlugu = 0;
    en_kisa_kelime_uzunlugu = 1000;
    for (i = 0; i < strlen(cumle); i++)
    {
        j = 0;
        while (cumle[i] != ' ' && i < strlen(cumle))
        {
            kelime[j] = cumle[i];
            j++;
            i++;
        }
        kelime[j] = '\0';

        // Kelimenin uzunlugunu karsilastir
        if (j > en_uzun_kelime_uzunlugu)
        {
            en_uzun_kelime_uzunlugu = j;
            strcpy(en_uzun_kelime, kelime);
        }
        else if (j < en_kisa_kelime_uzunlugu)
        {
            en_kisa_kelime_uzunlugu = j;
            strcpy(en_kisa_kelime, kelime);
        }
    }

    printf("En uzun kelime: %s\n", en_uzun_kelime);
    printf("En kisa kelime: %s\n", en_kisa_kelime);
    printf("Kelimeler arasindaki karakter farki: %d\n", en_uzun_kelime_uzunlugu - en_kisa_kelime_uzunlugu);
    
    
    return 0;
    
}