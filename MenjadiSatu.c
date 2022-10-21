#include <stdio.h>

int main(){
    int kasus;
    scanf("%d", &kasus);
    int angka, jumlah, jumlahAkhir = 0, palingAkhir[kasus + 1];

    for(int i = 1; i <= kasus; i++){
        scanf("%d", &angka);
        while(angka != 0){
            jumlah = jumlah + (angka % 10);
            angka = angka / 10;
        }

        if(jumlah > 9){
            while(jumlah != 0){
                jumlahAkhir = jumlahAkhir+ (jumlah % 10);
                jumlah = jumlah / 10;
            }
        }else{
            jumlahAkhir = jumlah;
        }
        palingAkhir[i] = jumlahAkhir;
        jumlah = 0;
        jumlahAkhir = 0;
    }

    for(int i = 1; i <= kasus; i++){
        printf("%d\n", palingAkhir[i]);
    }

    /* contoh inputan
    kasus = 3

    • 17 → 1 + 7 = 8
    • 182 → 1 + 8 + 2 = 11 → 1+1=2
    • 1998 → 1 + 9 + 9 + 8 = 27 → 2+7 = 9
    
    */
    return 0;
}