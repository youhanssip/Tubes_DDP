#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct{
    char simbol;
}Mark;
void inputangka(int *angka);
void inisialisasi(char matrix[7][7]);
void inputnama(char nama1[20],char nama2[20]);
void pilihpapan();
void play();
void buatpapan(int input);/*Prosedur untuk membuat papan 3x3,5x5,7x7 berdasarkan pilihan dari player*/
void inputkoordinat(char nama1[20],char nama2[20],int player);
int cekpemenang(int input);
int cektempatkosong();
void cetaknamapemenang(char nama1[20],char nama2[20],int player);
void cetakdraw();
void tampilanakhir();
void mainmenu();
//void highscore();
//void timer();
//variabel Global
char matrix [7][7];
Mark smb;