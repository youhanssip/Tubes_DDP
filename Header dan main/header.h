#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <unistd.h>
typedef struct{
    char simbol;
}Mark;
typedef struct{
    int skorplayer;
    int highscore;
}skor;
void inputangka(int *angka);
void inisialisasi(char matrix[7][7]);
void inputnama(char nama1[20],char nama2[20]);
void pilihpapan();
void play();
void buatpapan(int input);/*Prosedur untuk membuat papan 3x3,5x5,7x7 berdasarkan pilihan dari player*/
void inputkoordinat(char nama1[20],char nama2[20],int player,int input);
int cekpemenang(int input);
int cektempatkosong();
void cetaknamapemenang(char nama1[20],char nama2[20],int player);
void cetakdraw();
void tampilanakhir();
void mainmenu();
void highscore();
int cekscore(int skor1,int skor2);
void cetakskor(int skorterbesar);
void timer();
//variabel Global
char matrix [7][7];
Mark smb;