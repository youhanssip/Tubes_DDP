
/*
	Library Bawaan Yang Digunakan Untuk Modul
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <unistd.h>

/* 
	Tipe Data Bentukan dan Variabel Global yang Digunakan Pada TicTacToe
*/

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
koordinat koor;
player ply[2];
board brd;
/*
	Modul yang Ada Pada Program
*/

void inputpilihan(int *pilih_angka);
/*
Modul yang berfungsi sebagai yang meminta input sebuah angka dengan rentang tertentu sesuai dengan menu yang ada dimulai dari angka 1 dan maksimal
pada angka 3

IS : Angka belum terisi oleh user
FS : Angka sudah terisi dengan inputan user

*/
void inisialisasi();
/*
Modul yang berfungsi sebagai yang memastikan bahwa papan tictactoe benar benar kosong

IS : Jika pada saat awal game maka papan akan kosong dan jika pada saat game sudah pernah dimulai maka papan akan berisi 
FS : Nilai pada papan akan ditimpa dengan spasi sehingga dalam tampilan papan akan terlihat kosong

*/
void inputnama();
/*
Modul yang berfungsi sebagai yang meminta input dari user berupa string dengan maksimal 21 huruf yang digunakan untuk menyimpan nama

IS : nama1 dan nama2 belum terisi dengan apapun (kosong)
FS : nama1 dan nama2 sudah terisi dengan nama yang diinputkan oleh user

*/
void displaypilihpapan();
/*
Modul yang berfungsi sebagai menu yang ditunjukan kepada user untuk memilih papan permainan yang terdiri dari 3x3, 5x5, dan 7x7


IS : Ditunjukan sebuah menu untuk memilih papan yang ingin dimainkan
FS : Mengarahkan user ke dalam papan permainan yang dituju

*/
void play();
/*
Modul yang berfungsi sebagai tubuh utama yang menggabungkan semua modul yang lain agar tictactoe bekerja
*/
void buatpapan(int pilihpapan);
/*
Modul yang berfungsi sebagai yang membuat user interface sesuai dengan inputan yang dimasukan oleh user

IS : Tidak diketahui papan yang mana yang akan digunakan
FS : Diketahui sebuah papan yang digunakan dan memunculkannya ke dalam layar

*/
void inputkoordinat(int giliran,int ukuran_papan);
/*
Modul yang berfungsi sebagai yang meminta input berupa 2 buah angka yang dipisahkan menggunakan spasi yang digunakan sebagai koordinat papan
permainan

IS : Koordinat belum terisi 
FS : Koordinat sudah terisi lalu mencetak sebuah karakter untuk player 1: X dan untuk player 2: O sesuai dengan koordinat yang diinputkan

*/
int cekpemenang(int ukuran_papan);
/*
Modul yang berfungsi sebagai yang memastikan apakah game sudah berakhir atau belum. Apabila pemenang sudah diketahui maka function ini akan mengem
balikan nilai 1. Draw akan ditangani pada modul yang lain.

*/
int cektempatkosong(int ukuran_papan);
/*
Modul yang berfungsi sebagai yang memastikan bahwa masih ada tempat kosong pada papan sehingga permainan masih dapat berlanjut. Jika papan permainan
sudah penuh dan tidak mungkin lagi diisi maka function akan mengembalikan nilai 2 yang berati draw

*/
void cetaknamapemenang(int giliran);
/*
Modul yang berfungsi sebagai yang mencetak sebuah user interface yang berisi selamat atas kemanangan player

*/
void cetakdraw();
/*
Modul yang berfungsi sebagai yang mencetak sebuah user interface yang menunjukan bahwa permainan seri / draw


*/
void tampilanakhir();
/*
Modul yang berfungsi sebagai menu yang menampilkan kepada user sehingga user perlu memilih aksi selanjutnya yang di dalamnya terdapat dua pilihan
yaitu play again dan main menu
*/
void mainmenu();
/*
Modul yang berfungsi sebagai menu awal pada game yang menampilkan kepada user beberapa pilihan yang tersedia pada awal game di dalamnya terdapat
Playgame, How to play, dan exit
*/
void aturanbermain();
/*
Modul yang berfungsi untuk menampilkan aturan bermain permainan tic tac toe
*/
void exitprogram();
/*
Modul yang berfungsi sebagai yang mengakhiri program jika usernya meminta untuk mengakhiri

*/


