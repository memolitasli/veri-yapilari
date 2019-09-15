#include <stdio.h>
#include <stdlib.h>
typedef struct n{
float hesap;
struct n *next;

};
typedef struct n node;

int main()
{
    float toplam = 0;
    node * root;

    root = (node *)malloc(sizeof(node));
    root->next = NULL;
    node * iter = root;
    int sayi;
    printf("kac adet masa acilacak :");
    scanf("%d",&sayi);
    for(int i = 0;i<sayi;i++)
        {
            while(root->next!= NULL)
                root= root->next;
            root->next = (node *)malloc(sizeof(node));
            root->next->next = NULL;
        }
        int masano;
        int tercih;
    while(1 ==1)
    {
        bir:
        printf("islem yapilacak masa numarasini giriniz :");
        scanf("%d",&masano);
        if(masano>sayi)
        {printf("hatali bir sayi girdiniz...");
        goto bir;
        }
        for(int i = 0;i<masano;i++)
            iter = iter->next;
        printf("Masa no : %d",masano);
        printf("\n");
        printf("hesap : %f TL",iter->hesap);
        printf("\n");
        iki:
        printf("adisyona ekleme yapmak icin 1 adisyonu kapatmak icin 2 toplam hasilati gormek icin 3 e basiniz :");
        scanf("%d",&tercih);
        printf("\n");
        if(tercih == 1)
        {
            float fiyat;
            printf("eklenecek urunun fiyatini giriniz :");
            scanf("%f",&fiyat);
            iter->hesap = iter->hesap+fiyat;
            printf("\n");
             printf("hesap : %f TL",iter->hesap);
             toplam = toplam + fiyat;

        }
        if(tercih == 2)
        {
            if(iter->hesap = 0)
            {
                printf("girdiginiz masa zaten kapali girdiginiz sayiyi kontrol edin....");
                goto iki;
            }
            iter->hesap = 0;
            printf("\n masa kapatildi...");
        }

        iter = root;
        if(tercih == 3)
        {
            printf("su ana kadar yapilan toplam hasilat : %f",toplam);
        }
        system("CLS");
    }
    return 0;
}
