#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <unistd.h>
typedef struct{
    char simbol;
    char matrix[7][7];
}board;
typedef struct{
    char nama[20];
    int skor;
}player;
typedef struct{
    int x;
    int y;
}koordinat;
void inputpilihan(int *pilih_angka);
void inisialisasi();
void inputnama();
void displaypilihpapan();
void play();
void buatpapan(int pilihpapan);/*Prosedur untuk membuat papan 3x3,5x5,7x7 berdasarkan pilihan dari player*/
void inputkoordinat(int giliran,int ukuran_papan);
int cekpemenang(int ukuran_papan);
int cektempatkosong(int ukuran_papan);
void cetaknamapemenang(int giliran);
void cetakdraw();
void tampilanakhir();
void mainmenu();
void aturanbermain();
void exitprogram();
void timer();
//variabel Global
koordinat koor;
player ply[2];
board brd;