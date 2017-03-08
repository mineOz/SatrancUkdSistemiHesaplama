#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int tursayi,lisans_no,yaskatagori,ukdpuan;
    int toplamUkd=0;
    int maxukd=0;
    int en_buyklisans=0;
    int en_buyk_yaskatgri=0, k=0;
    int biroyuncusay=0, ikioyuncusay=0, ucoyuncusay=0, dortoyuncusay=0, besoyuncusay=0;
    int i, rakipukd, macsonucu, yeniukd;
    int birmacUkd_maxdeg, birmaclisans, birmacukd;
    int kaybedenUkd_deg, kaybeden_ukd, kaybeden_lisans, kaybedilen_macsay=0;
    float D;
    char x;
    printf("Lutfen tur sayisini giriniz: \n");
    scanf("%d", &tursayi);

    while(lisans_no>0)
    {
        printf("Lisans numarasini giriniz:\n");
        scanf("%d", &lisans_no);

        printf("Yas katagorisini giriniz:\n");
        scanf("%d", &yaskatagori);

        printf("UKD puanini giriniz:\n");
        scanf("%d", &ukdpuan);

        toplamUkd=toplamUkd+ukdpuan; /* Tum sporcularýn ukd puan ortalamasini bulmak icin toplam ukd puani hesaplamasi*/

        if(ukdpuan>maxukd)    /* Tum sporcular icindeki en yüksek ukd puanina sahip oyunucuyu bulmak icin */
        {
            maxukd=ukdpuan;
            en_buyklisans =lisans_no;
            en_buyk_yaskatgri=yaskatagori;
        }

        if(ukdpuan>=2400)
        {
            k=10;       /* ukd degisimi hesaplamasindaki delta degisimi bulurken kullanilacak kat sayi */
            biroyuncusay++ ; /* ukd puani 2400 üzeri olan oyuncu sayisini hesaplamak icin*/
        }
        if(ukdpuan>2000 && ukdpuan<2399)
        {
            k=15;
            ikioyuncusay++;
        }
        if (ukdpuan>1600 && ukdpuan<1999)
        {
            k=20;
            ucoyuncusay++;
        }
        if (ukdpuan>1300 && ukdpuan<1599)
        {
            k=25;
            dortoyuncusay++;
        }
        if (ukdpuan<1300)
        {
            k=30;
            besoyuncusay++;
        }

        for (i=1; i<=tursayi; i++)
        {
           printf("Rakibin UKD puanini giriniz:\n");
           scanf("%d", &rakipukd);

           printf("Mactan kazandigi puani giriniz:(Galibiyet icin:1, Maglubiyet icin:0, Beraberlik icin:0,5)");
           scanf("%f", &macsonucu);

               if(ukdpuan>1000 && rakipukd==0)
                 {
                   switch(macsonucu)
                   {  case 1: D=k*(0,1);

                        yeniukd=ukdpuan+D;

                          if (birmacUkd_maxdeg<D) /* Bir macta en cok ukd puani sporcuları bulmak icin yapılan işlemler*/
                           {
                              birmacUkd_maxdeg=D;
                              birmaclisans=lisans_no;
                              birmacukd=ukdpuan;
                           }
                       case 0: D=k*(-0,1);

                           yeniukd=ukdpuan+D;

                          if (kaybedenUkd_deg>D) /*  */
                           {
                               kaybedenUkd_deg=D;
                               kaybeden_lisans=lisans_no;
                               kaybeden_ukd=ukdpuan;
                               kaybedilen_macsay++;
                           }
                     case 'x': D=0;
                           yeniukd=ukdpuan;
                  }
                }
                else
                    if (ukdpuan>1000 && rakipukd>100)
                      {

                      }


        }





    }














    return 0;
}
