/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 1
 *   Hari dan Tanggal    : Rabu 15 April 2026
 *   Nama (NIM)          : Salman Santika Abdullah
 *   Nama File           : soal1.c
 *   Deskripsi           : Membuat program rekursi untuk menghitung cara turun tangga dari N ke 0
 * 
 */

#include <stdio.h>

int jump(int n){
    int count = 0;
    while(n != 1){
        
        if(n%2 == 0){
            n = n/2;
        }
        else{
            n = 3*n+1;
        }
    count++;
    } return count;
}
int main(){
    int T;
    int N;
    scanf("%d", &T);

    for(int i = 0; i<T; i++){
        scanf("%d", &N);
        int result = jump(N);
        printf("LANGKAH %d\n", result);
    }

    return 0;
}
