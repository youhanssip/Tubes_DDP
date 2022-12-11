#include "header.h"
int main(){
    int input;
    inisialisasi(matrix);
    system("cls");
    mainmenu();
    inputangka(&input);
    system("cls");
    if(input==1){
        play();
    }
    /*if (input==2){
        highscore();
    }
    if (input==3){
        exit();
    }*/
    return 0;
}
void inisialisasi (char matrix[7][7]){
    int i,j;
    for (i=0;i<=6;i++){
        for(j=0;j<=6;j++){
            matrix[i][j]=' ';
        }
    }
}
void inputangka(int *angka){
    scanf("%d",& *angka);
}
void play(){
    int input,i=0;
    char nama1[20];
    char nama2[20];
    inputnama(nama1,nama2);
    system("cls");
    pilihpapan();
    inputangka(&input);
    system("cls");
    buatpapan(input);
    do{
        inputkoordinat(nama1);
        buatpapan(input);
        inputkoordinat2(nama2);
        buatpapan(input);
        i=cekpemenang();
    }while(i==0);
}
void buatpapan(int input){
    if(input==1){
        printf("     |     |     \n");
        printf("  %c  |  %c  |  %c \n", matrix[0][0], matrix[0][1], matrix[0][2]);

        printf("_____|_____|_____\n");
        printf("     |     |     \n");

        printf("  %c  |  %c  |  %c \n", matrix[1][0], matrix[1][1], matrix[1][2]);

        printf("_____|_____|_____\n");
        printf("     |     |     \n");

        printf("  %c  |  %c  |  %c \n", matrix[2][0], matrix[2][1], matrix[2][2]);

        printf("     |     |     \n\n");
    }

    
    if (input==2){
        printf("     |     |     |     |     \n");
        printf("  %c  |  %c  |  %c  |  %c  |  %c \n", matrix[0][0], matrix[0][1], matrix[0][2],matrix[0][3],matrix[0][4]);

        printf("_____|_____|_____|_____|_____\n");
        printf("     |     |     |     |     \n");

        printf("  %c  |  %c  |  %c  |  %c  |  %c \n", matrix[1][0], matrix[1][1], matrix[1][2],matrix[1][3],matrix[1][4]);

        printf("_____|_____|_____|_____|_____\n");
        printf("     |     |     |     |     \n");

        printf("  %c  |  %c  |  %c  |  %c  |  %c \n", matrix[2][0], matrix[2][1], matrix[2][2],matrix[2][3],matrix[2][4]);
        printf("_____|_____|_____|_____|_____\n");
        printf("     |     |     |     |     \n");

        printf("  %c  |  %c  |  %c  |  %c  |  %c \n", matrix[3][0], matrix[3][1], matrix[3][2],matrix[3][3],matrix[3][4]);
        printf("_____|_____|_____|_____|_____\n");
        printf("     |     |     |     |     \n");

        printf("  %c  |  %c  |  %c  |  %c  |  %c \n", matrix[3][0], matrix[3][1], matrix[3][2],matrix[3][3],matrix[3][4]);

        printf("     |     |     |     |     \n\n");
    }


    if (input==3){
         printf("     |     |     |     |     |     |     \n");
        printf("  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c \n", matrix[0][0], matrix[0][1], matrix[0][2],matrix[0][3],matrix[0][4],matrix[0][5],matrix[0][6]);

        printf("_____|_____|_____|_____|_____|_____|_____\n");
        printf("     |     |     |     |     |     |     \n");

        printf("  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c \n", matrix[1][0], matrix[1][1], matrix[1][2],matrix[1][3],matrix[1][4],matrix[1][5],matrix[1][6]);

        printf("_____|_____|_____|_____|_____|_____|_____\n");
        printf("     |     |     |     |     |     |     \n");

        printf("  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c \n", matrix[2][0], matrix[2][1], matrix[2][2],matrix[2][3],matrix[2][4],matrix[2][5],matrix[2][6]);
        printf("_____|_____|_____|_____|_____|_____|_____\n");
        printf("     |     |     |     |     |     |     \n");

        printf("  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c \n", matrix[3][0], matrix[3][1], matrix[3][2],matrix[3][3],matrix[3][4],matrix[3][5],matrix[3][6]);
        printf("_____|_____|_____|_____|_____|_____|_____\n");
        printf("     |     |     |     |     |     |     \n");

        printf("  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c \n", matrix[4][0], matrix[4][1], matrix[4][2],matrix[4][3],matrix[4][4],matrix[4][5],matrix[4][6]);
        printf("_____|_____|_____|_____|_____|_____|_____\n");
        printf("     |     |     |     |     |     |     \n");

        printf("  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c \n", matrix[5][0], matrix[5][1], matrix[5][2],matrix[5][3],matrix[5][4],matrix[5][5],matrix[5][6]);
        printf("_____|_____|_____|_____|_____|_____|_____\n");
        printf("     |     |     |     |     |     |     \n");

        printf("  %c  |  %c  |  %c  |  %c  |  %c  |  %c  |  %c \n", matrix[6][0], matrix[6][1], matrix[6][2],matrix[6][3],matrix[6][4],matrix[6][5],matrix[6][6]);
        printf("     |     |     |     |     |     |     \n\n");
    }
}
void pilihpapan(){
    printf("Silahkan Pilih Ukuran Papan:");
    printf("\n1.3x3");
    printf("\n2.5x5");
    printf("\n3.7x7");
    printf("\nInput Angka Anda :");
}
void inputkoordinat(char nama1[20]){
    int x,y;
    smb.simbol='X';
    printf("%s Tolong Input Koordinat baris dan kolom:",nama1);
        scanf("\n%d %d",&x,&y);
        while(matrix[x][y]!=' '){
            printf("Input tidak valid silahkan coba lagi:");
            scanf("\n%d %d",&x,&y);
        }
        if (matrix[x][y]==' '){
            matrix[x][y]=smb.simbol;
        }
    }
void inputkoordinat2(char nama2[20]){
    int x,y;
    smb.simbol='O';
    printf("%s Tolong Input Koordinat baris dan kolom:",nama2);
        scanf("\n%d %d",&x,&y);
        while(matrix[x][y]!=' '){
            printf("Input tidak valid silahkan coba lagi:");
            scanf("\n%d %d",&x,&y);
        }
        if (matrix[x][y]==' '){
            matrix[x][y]=smb.simbol;
        }
}
int cekpemenang(){
    int i,j=0;
	//Cek Baris
	for(i=0;i<3;i++){
		if((matrix[i][0]==matrix[i][1]&&matrix[i][0]==matrix[i][2])&&(matrix[i][0]!=' ')){	
		j=1;
        }
    }
	//Cek Kolom
	for(i=0;i<3;i++){
		if((matrix[0][i]==matrix[1][i]&&matrix[0][i]==matrix[2][i])&&(matrix[0][i]!=' ')){		
		j=1;
        }
    }
	//Cek Diagonal
	if((matrix[0][0]==matrix[1][1]&&matrix[0][0]==matrix[2][2])&&(matrix[0][0]!=' ')){								
		j=1;
    }
	if((matrix[0][2]==matrix[1][1]&&matrix[0][2]==matrix[2][0])&&(matrix[0][2]!=' ')){								
        j=1;
    }
    return j;
}
int cektempatkosong(){

}
void cetaknamapemenang(){

}
void mainmenu(){
    printf("1.Single Player\n");
    printf("2.HighScore\n");
    printf("3.Exit\n");
    printf("Input Angka Anda:");
}
void inputnama(char nama1[20],char nama2 [20]){
    printf("Input Nama player 1:");
    scanf("\n%[^\n]",nama1);
    printf("Input Nama player 2:");
    scanf("\n%[^\n]",nama2);
}
/*void exit(){

}*/