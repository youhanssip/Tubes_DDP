#include "header.h"
int main(){
    int input;
    inisialisasi(matrix);
    system("cls");
    mainmenu();
    inputangka(&input);
    if(input==1){
        play();
    }
    if (input==2){
        highscore();
    }
    if (input==3){
        exit(1);
    }
    if(input>3){
        printf("Input tidak valid silahkan input ulang:");
        inputangka(&input);
        if(input==1){
        play();
        }
        if (input==2){
        highscore();
        }
        if (input==3){
        exit(1);
        }

    }
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
    int input,i=0,player=1,time;
    char nama1[20];
    char nama2[20];
    system("cls");
    inputnama(nama1,nama2);
    system("cls");
    pilihpapan();
    inputangka(&input);
    system("cls");
    buatpapan(input);
    do{
        if(player==3){
            player=1;
        }
        inputkoordinat(nama1,nama2,player,input);
        system("cls");
        buatpapan(input);
        i=cektempatkosong(input);
        i=cekpemenang(input);
        player++;
        
        
    }while(i==0);

    if(i==1){
        cetaknamapemenang(nama1,nama2,player);
        tampilanakhir();
        inputangka(&input);
        if(input==1){
            system("cls");
            play();
        }
        else if(input==2){
            system("cls");
            main();
        }
        
    }
    else if(i==2){
        cetakdraw();
        tampilanakhir();
        inputangka(&input);
        if(input==1){
            system("cls");
            play();
        }
        else if(input==2){
            system("cls");
            main();
        }
    }
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

        printf("  %c  |  %c  |  %c  |  %c  |  %c \n", matrix[4][0], matrix[4][1], matrix[4][2],matrix[4][3],matrix[4][4]);

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
void inputkoordinat(char nama1[20],char nama2[20],int player,int input){
    int x,y;
    if(player==1&&input==1){
        smb.simbol='X';
        printf("%s Tolong Input Koordinat baris dan kolom:",nama1);
        scanf("\n%d %d",&x,&y);
         while(matrix[x][y]!=' '||x>2||y>2){
            printf("Input tidak valid silahkan coba lagi:");
            scanf("\n%d %d",&x,&y);
        }
         if (matrix[x][y]==' '){
            matrix[x][y]=smb.simbol;
        }
    }
    else if(player==2&&input==1){
        smb.simbol='O';
        printf("%s Tolong Input Koordinat baris dan kolom:",nama2);
            scanf("\n%d %d",&x,&y);
            while(matrix[x][y]!=' '||x>2||y>2){
                printf("Input tidak valid silahkan coba lagi:");
                scanf("\n%d %d",&x,&y);
            }
            if (matrix[x][y]==' '){
                matrix[x][y]=smb.simbol;
            }
        }
    if(player==1&&input==2){
        smb.simbol='X';
        printf("%s Tolong Input Koordinat baris dan kolom:",nama1);
        scanf("\n%d %d",&x,&y);
         while(matrix[x][y]!=' '||x>4||y>4){
            printf("Input tidak valid silahkan coba lagi:");
            scanf("\n%d %d",&x,&y);
        }
         if (matrix[x][y]==' '){
            matrix[x][y]=smb.simbol;
        }
    }
    else if(player==2&&input==2){
        smb.simbol='O';
        printf("%s Tolong Input Koordinat baris dan kolom:",nama2);
            scanf("\n%d %d",&x,&y);
            while(matrix[x][y]!=' '||x>4||y>4){
                printf("Input tidak valid silahkan coba lagi:");
                scanf("\n%d %d",&x,&y);
            }
            if (matrix[x][y]==' '){
                matrix[x][y]=smb.simbol;
            }
        }
    if(player==1&&input==3){
        smb.simbol='X';
        printf("%s Tolong Input Koordinat baris dan kolom:",nama1);
        scanf("\n%d %d",&x,&y);
         while(matrix[x][y]!=' '||x>6||y>6){
            printf("Input tidak valid silahkan coba lagi:");
            scanf("\n%d %d",&x,&y);
        }
         if (matrix[x][y]==' '){
            matrix[x][y]=smb.simbol;
        }
    }
    else if(player==2&&input==3){
        smb.simbol='O';
        printf("%s Tolong Input Koordinat baris dan kolom:",nama2);
            scanf("\n%d %d",&x,&y);
            while(matrix[x][y]!=' '||x>6||y>6){
                printf("Input tidak valid silahkan coba lagi:");
                scanf("\n%d %d",&x,&y);
            }
            if (matrix[x][y]==' '){
                matrix[x][y]=smb.simbol;
            }
        }
    
}
int cekpemenang(int input){
    int i,j=0;
    //Cek Pemenang 3x3
	//Cek baris
    if(input==1){
	for(i=0;i<3;i++){
		if((matrix[i][0]==matrix[i][1]&&matrix[i][0]==matrix[i][2])&&(matrix[i][0]!=' ')){	
		j=1;
        }
    }
	//Cek kolom
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
    }

    //Cek pemenang 5x5
    if(input==2){
    //Cek baris
    for(i=0; i<5; i++){
                if(matrix[i][0]==matrix[i][1] && matrix[i][0]==matrix[i][2] && matrix[i][0]==matrix[i][3] && matrix[i][0]!=' ' && matrix[i][1]!=0 && matrix[i][2] != ' ' && matrix[i][3] != ' '){
                    j=1;

                }
                else if(matrix[i][1]==matrix[i][2] && matrix[i][1]==matrix[i][3] && matrix[i][1]==matrix[i][4] && matrix[i][1]!=' ' && matrix[i][2] != ' ' && matrix[i][3] != ' ' && matrix[i][4]!=' '){
                    j=1;
                }
    }
    //Cek Kolom
    for(i=0; i<5; i++){
                if(matrix[0][i]==matrix[1][i] && matrix[0][i]==matrix[2][i] && matrix[0][i]==matrix[3][i] && matrix[0][i] !=' ' && matrix[1][i] != ' ' &&matrix[2][i] != ' ' && matrix[3][i]!=' '){
                    j=1;
                }
                else if(matrix[1][i]==matrix[2][i] && matrix[1][i]==matrix[3][i] && matrix[1][i]==matrix[4][i] && matrix[1][i] != ' ' &&matrix[2][i] != ' ' && matrix[3][i]!=' ' && matrix[4][i] != ' '){
                    j=1;
                }
    }
    //Cek Diagonal
        if(matrix[0][0]==matrix[1][1] && matrix[0][0]==matrix[2][2] && matrix[0][0]==matrix[3][3] && matrix[0][0] != ' ' && matrix[1][1] != ' ' && matrix[2][2] != ' ' && matrix[3][3] != ' '){
                j=1;
            }
            else if(matrix[1][1]==matrix[2][2] && matrix[1][1]==matrix[3][3] && matrix[1][1]==matrix[4][4] && matrix[1][1] != ' ' && matrix[2][2] != ' ' && matrix[3][3] != ' ' && matrix[4][4] != ' '){
                j=1;
            }
            else if(matrix[0][1]==matrix[1][2] && matrix[0][1]==matrix[2][3] && matrix[0][1]==matrix[3][4] && matrix[0][1] != ' ' && matrix[1][2] != ' ' && matrix[2][3] != ' ' && matrix[3][4] != ' '){
                j=1;
            }
            else if(matrix[1][0]==matrix[2][1] && matrix[1][0]==matrix[3][2] && matrix[1][0]==matrix[4][3] && matrix[1][0] != ' ' && matrix[2][1] != ' ' && matrix[3][2] != ' ' && matrix[4][3] != ' '){
                j=1;
            }
            else if(matrix[0][4]==matrix[1][3] && matrix[0][4]==matrix[2][2] && matrix[0][4]==matrix[3][1] && matrix[0][4] != ' ' && matrix[1][3] != ' ' && matrix[2][2] != ' ' && matrix[3][1] != ' '){
                j=1;
            }
            else if(matrix[1][3]==matrix[2][2] && matrix[1][3]==matrix[3][1] && matrix[1][3]==matrix[4][0] && matrix[1][3] != ' ' && matrix[2][2] != ' ' && matrix[3][1] != ' ' && matrix[4][0] != ' '){
                j=1;
            }
            else if(matrix[1][4]==matrix[2][3] && matrix[1][4]==matrix[3][2] && matrix[1][4]==matrix[4][1] && matrix[0][0] != ' ' && matrix[4][1] != ' ' && matrix[2][3] != ' ' && matrix[3][2] != ' '){
                j=1;
            }
            else if(matrix[0][3]==matrix[1][2] && matrix[0][3]==matrix[2][1] && matrix[0][3]==matrix[3][0] && matrix[0][3] != ' ' && matrix[1][2] != ' ' && matrix[2][1] != ' ' && matrix[3][0] != ' '){
                j=1;
            }
    }
    //Cek Pemenang 7x7
    if (input==3){
        //Cek baris
        for(i=0; i<7; i++){
                    if(matrix[i][0]==matrix[i][1] && matrix[i][1]==matrix[i][2] && matrix[i][2]==matrix[i][3] && matrix[i][0]!=' ' && matrix[i][1]!=' ' && matrix[i][2]!=' ' && matrix[i][3]!=' '){
                        j=1;
                    }
                    else if(matrix[i][1]==matrix[i][2] && matrix[i][2]==matrix[i][3]&& matrix[i][3]==matrix[i][4] && matrix[i][1]!=' ' && matrix[i][2]!=' ' && matrix[i][3]!=' ' && matrix[i][4]!=' '){
                        j=1;
                    }
                    else if(matrix[i][2]==matrix[i][3] && matrix[i][3]==matrix[i][4]&& matrix[i][4]==matrix[i][5] && matrix[i][2]!=' ' && matrix[i][3]!=' ' && matrix[i][4]!=' ' && matrix[i][5]!=' '){
                        j=1;
                    }
                    else if(matrix[i][3]==matrix[i][4] && matrix[i][4]==matrix[i][5]&& matrix[i][5]==matrix[i][6] && matrix[i][3]!=' ' && matrix[i][4]!=' ' && matrix[i][5]!=' ' && matrix[i][6]!=' '){
                        j=1;
                    }
                }
                //Cek Kolom
                for(i=0; i<7; i++){
                    if(matrix[0][i]==matrix[1][i] && matrix[1][i]==matrix[2][i] && matrix[2][i]==matrix[3][i] && matrix[0][i]!=' ' && matrix[1][i]!=' ' && matrix[2][i]!=' ' && matrix[3][i]!=' ' ){
                        j=1;
                    }
                    else if(matrix[1][i]==matrix[2][i] && matrix[2][i]==matrix[3][i] && matrix[3][i]==matrix[4][i] && matrix[1][i]!=' ' && matrix[2][i]!=' ' && matrix[3][i]!=' ' && matrix[4][i]!=' '){
                        j=1;
                    }
                    else if(matrix[2][i]==matrix[3][i] && matrix[3][i]==matrix[4][i] && matrix[4][i]==matrix[5][i] && matrix[2][i]!=' ' && matrix[3][i]!=' ' && matrix[4][i]!=' ' && matrix[5][i]!=' '){
                        j=1;
                    }
                    else if(matrix[3][i]==matrix[4][i] && matrix[4][i]==matrix[5][i] && matrix[5][i]==matrix[6][i] && matrix[3][i]!=' ' && matrix[4][i]!=' ' && matrix[5][i]!=' ' && matrix[6][i]!=' '){
                        j=1;
                    }
                }
                //Cek diagonal
                if(matrix[0][0]==matrix[1][1] && matrix[1][1]==matrix[2][2] && matrix[2][2]==matrix[3][3] && matrix[0][0] != ' ' && matrix[1][1] != ' ' && matrix[2][2] != ' ' &&matrix[3][3] != ' '){
                    j=1;
                }
                else if(matrix[1][1]==matrix[2][2] && matrix[2][2]==matrix[3][3] && matrix[3][3]==matrix[4][4] && matrix[1][1] != ' ' && matrix[2][2] != ' ' && matrix[3][3] != ' ' && matrix[4][4] != ' '){
                    j=1;
                }
                else if(matrix[2][2]==matrix[3][3] && matrix[3][3]==matrix[4][4] && matrix[4][4]==matrix[5][5] && matrix[2][2] != ' ' && matrix[3][3] != ' ' && matrix[4][4] != ' ' && matrix[5][5] != ' '){
                    j=1;
                }
                else if(matrix[3][3]==matrix[4][4] && matrix[4][4]==matrix[5][5] && matrix[5][5]==matrix[6][6] && matrix[3][3] != ' ' && matrix[4][4] != ' ' && matrix[5][5] != ' ' && matrix[6][6] != ' '){
                    j=1;
                }
                else if(matrix[0][3]==matrix[1][2] && matrix[1][2]==matrix[2][1] && matrix[2][1]==matrix[3][0] && matrix[2][1] != ' ' && matrix[1][2] != ' ' && matrix[2][1] != ' ' && matrix[3][0] != ' '){
                    j=1; 
                }
                else if(matrix[0][4]==matrix[1][3] && matrix[1][3]==matrix[2][2] && matrix[2][2]==matrix[3][1] && matrix[0][4] != ' ' && matrix[1][3] != ' ' && matrix[2][2] != ' ' && matrix[3][1] != ' '){
                    j=1; 
                }
                else if(matrix[0][5]==matrix[1][4] && matrix[1][4]==matrix[2][3] && matrix[2][3]==matrix[3][2] && matrix[0][5] != ' ' && matrix[1][4] != ' ' && matrix[2][3] != ' ' && matrix[3][2] != ' '){
                    j=1; 
                }
                else if(matrix[0][6]==matrix[1][5] && matrix[1][5]==matrix[2][4] && matrix[2][4]==matrix[3][3] && matrix[0][6] != ' ' && matrix[1][5] != ' ' && matrix[2][4] != ' ' && matrix[3][3] != ' '){
                    j=1; 
                }
                else if(matrix[1][6]==matrix[2][5] && matrix[2][5]==matrix[3][4] && matrix[3][4]==matrix[4][3] && matrix[1][6] != ' ' && matrix[2][5] != ' ' && matrix[3][4] != ' ' && matrix[4][3] != ' '){
                    j=1; 
                }
                else if(matrix[2][6]==matrix[3][5] && matrix[3][5]==matrix[4][4] && matrix[4][4]==matrix[5][3] && matrix[2][6] != ' ' && matrix[3][5] != ' ' && matrix[4][4] != ' ' && matrix[5][3] != ' '){
                    j=1; 
                }
                else if(matrix[3][6]==matrix[4][5] && matrix[4][5]==matrix[5][4] && matrix[5][4]==matrix[6][3] && matrix[3][6] != ' ' && matrix[4][5] != ' ' && matrix[5][4] != ' ' && matrix[6][3] != ' '){
                    j=1; 
                }
                else if(matrix[1][4]==matrix[2][3] && matrix[2][3]==matrix[3][2] && matrix[3][2]==matrix[4][1] && matrix[1][4] != ' ' && matrix[2][3] != ' ' && matrix[3][2] != ' ' && matrix[4][1] != ' '){
                    j=1; 
                }
                else if(matrix[2][4]==matrix[3][3] && matrix[3][3]==matrix[4][2] && matrix[4][2]==matrix[5][1] && matrix[2][4] != ' ' && matrix[3][3] != ' ' && matrix[4][2] != ' ' && matrix[5][1] != ' '){
                    j=1; 
                }
                else if(matrix[2][5]==matrix[3][4] && matrix[3][4]==matrix[4][3] && matrix[4][3]==matrix[5][2] && matrix[2][5] != ' ' && matrix[3][4] != ' ' && matrix[4][3] != ' ' && matrix[5][2] != ' '){
                    j=1; 
                }
                else if(matrix[1][5]==matrix[2][4] && matrix[2][4]==matrix[3][3] && matrix[3][3]==matrix[4][2] && matrix[1][5] != ' ' && matrix[2][4] != ' ' && matrix[3][3] != ' ' && matrix[4][2] != ' '){
                    j=1; 
                }
                else if(matrix[1][3]==matrix[2][2] && matrix[2][2]==matrix[3][1] && matrix[3][1]==matrix[4][0] && matrix[1][3] != ' ' && matrix[2][2] != ' ' && matrix[3][1] != ' ' && matrix[4][0] != ' '){
                    j=1; 
                }
                else if(matrix[2][3]==matrix[3][2] && matrix[3][2]==matrix[4][1] && matrix[4][1]==matrix[5][0] && matrix[2][3] != ' ' && matrix[3][2] != ' ' && matrix[4][1] != ' ' && matrix[5][0] != ' '){
                    j=1; 
                }
                else if(matrix[3][3]==matrix[4][2] && matrix[4][2]==matrix[5][1] && matrix[5][1]==matrix[6][0] && matrix[3][3] != ' ' && matrix[4][2] != ' ' && matrix[5][1] != ' ' && matrix[6][0] != ' '){
                    j=1; 
                }
                else if(matrix[3][4]==matrix[4][3] && matrix[4][3]==matrix[5][2] && matrix[5][2]==matrix[6][1] && matrix[3][4] != ' ' && matrix[4][3] != ' ' && matrix[5][2] != ' ' && matrix[6][1] != ' '){
                    j=1; 
                }
                else if(matrix[3][5]==matrix[4][4] && matrix[4][4]==matrix[5][3] && matrix[5][3]==matrix[6][2] && matrix[3][5] != ' ' && matrix[4][4] != ' ' && matrix[5][3] != ' ' && matrix[6][2] != ' '){
                    j=1; 
                }
                else if(matrix[0][3]==matrix[1][4] && matrix[1][4]==matrix[2][5] && matrix[2][5]==matrix[3][6] && matrix[0][3] != ' ' && matrix[1][4] != ' ' && matrix[2][5] != ' ' && matrix[3][6] != ' '){
                    j=1; 
                }
                else if(matrix[1][3]==matrix[2][4] && matrix[2][4]==matrix[3][5] && matrix[3][5]==matrix[4][6] && matrix[3][1] != ' ' && matrix[2][4] != ' ' && matrix[3][5] != ' ' && matrix[4][6] != ' '){
                    j=1; 
                }
                else if(matrix[2][3]==matrix[3][4] && matrix[3][4]==matrix[4][5] && matrix[4][5]==matrix[5][6] && matrix[2][3] != ' ' && matrix[3][4] != ' ' && matrix[4][5] != ' ' && matrix[5][6] != ' '){
                    j=1; 
                }
                else if(matrix[1][2]==matrix[2][3] && matrix[2][3]==matrix[3][4] && matrix[3][4]==matrix[4][5] && matrix[1][2] != ' ' && matrix[2][4] != ' ' && matrix[3][4] != ' ' && matrix[4][5] != ' '){
                    j=1; 
                }
                else if(matrix[3][0]==matrix[4][1] && matrix[4][1]==matrix[5][2] && matrix[5][2]==matrix[6][3] && matrix[3][0] != ' ' && matrix[4][1] != ' ' && matrix[5][2] != ' ' && matrix[6][3] != ' '){
                    j=1; 
                }
                else if(matrix[3][1]==matrix[4][2] && matrix[4][2]==matrix[5][3] && matrix[5][3]==matrix[6][4] && matrix[3][1] != ' ' && matrix[4][2] != ' ' && matrix[5][3] != ' ' && matrix[6][4] != ' '){
                    j=1; 
                }
                else if(matrix[3][2]==matrix[4][3] && matrix[4][3]==matrix[5][4] && matrix[5][4]==matrix[6][5] && matrix[3][2] != ' ' && matrix[4][3] != ' ' && matrix[5][4] != ' ' && matrix[6][5] != ' '){
                    j=1; 
                }
                else if(matrix[2][1]==matrix[3][2] && matrix[3][2]==matrix[4][3] && matrix[4][3]==matrix[5][4] && matrix[2][1] != ' ' && matrix[3][2] != ' ' && matrix[4][3] != ' ' && matrix[5][4] != ' '){
                    j=1; 
                }
                else if(matrix[0][2]==matrix[1][3] && matrix[1][3]==matrix[2][4] && matrix[2][4]==matrix[3][5] && matrix[0][2] != ' ' && matrix[1][3] != ' ' && matrix[2][4] != ' ' && matrix[3][5] != ' '){
                    j=1; 
                }
                else if(matrix[0][1]==matrix[1][2] && matrix[1][2]==matrix[2][3] && matrix[2][3]==matrix[3][3] && matrix[0][1] != ' ' && matrix[1][2] != ' ' && matrix[2][3] != ' ' && matrix[3][3] != ' '){
                    j=1; 
                }
                else if(matrix[1][0]==matrix[2][1] && matrix[2][1]==matrix[3][2] && matrix[3][2]==matrix[4][3] && matrix[1][0] != ' ' && matrix[2][1] != ' ' && matrix[3][2] != ' ' && matrix[4][3] != ' '){
                    j=1; 
                }
                else if(matrix[2][0]==matrix[3][1] && matrix[3][1]==matrix[4][2] && matrix[4][2]==matrix[5][3] && matrix[2][0] != ' ' && matrix[3][1] != ' ' && matrix[4][2] != ' ' && matrix[5][3] != ' '){
                    j=1; 
                }
    }
    return j;
}
int cektempatkosong(int input){
    int i,j,k;
    if(input==1){
        for (i=0;i<=2;i++){
            for(j=0;j<=2;j++){
                if(matrix[i][j]==' '){
                    return 0;
                }
            }
        }
    }
    if(input==2){
        for (i=0;i<=4;i++){
            for(j=0;j<=4;j++){
                if(matrix[i][j]==' '){
                    return 0;
                }
            }
        }
    }
    if(input==3){
        for (i=0;i<=6;i++){
            for(j=0;j<=6;j++){
                if(matrix[i][j]==' '){
                    return 0;
                }
            }
        }
    }
    return 2;
}
void cetakdraw(){
    system("cls");
    printf("+---------------------------------------------+");
    printf("\n|                 !!!Seri!!!                  | ");
    printf("\n+---------------------------------------------+\n");
}
void cetaknamapemenang(char nama1[20],char nama2[20],int player){
    system("cls");
    if(player==2){
        printf("+---------------------------------------------+");
    	printf("\n|           !!!%s Menang!!!              | ", nama1);
  	 	printf("\n+---------------------------------------------+\n");
    }
    else if(player==1){
        printf("+---------------------------------------------+");
    	printf("\n|           !!!%s Menang!!!              | ", nama2);
  	 	printf("\n+---------------------------------------------+\n");
    }
}
void mainmenu(){
    printf("\n                  _______   _    _______\n");
    printf("                 |___ ___| | |  |  _____|");
    printf("\n                    | |    | |  | |");
    printf("\n                    | |    | |  | |");
    printf("\n                    | |    | |  | |_____");
    printf("\n                    |_|    |_|  |_______|");
    printf("\n                            _______   ______   ______\n");
    printf("                           |___ ___| |  __  | |  ____|");
    printf("\n                              | |    | |__| | | |");
    printf("\n                              | |    |  __  | | |");
    printf("\n                              | |    | |  | | | |____");
    printf("\n                              |_|    |_|  |_| |______|");
    printf("\n                                      _______   ______   _______\n");
    printf("                                     |___ ___| |  __  | |  _____|");
    printf("\n                                        | |    | |  | | | |_____");
    printf("\n                                        | |    | |  | | |  _____|");
    printf("\n                                        | |    | |__| | | |_____");
    printf("\n                                        |_|    |______| |_______|");
    printf("\nSilahkan Pilih Menu:\n");
    printf("\n1.Multi Player\n");
    printf("2.HighScore\n");
    printf("3.Exit\n");
    printf("Input Angka Anda:");
}
void tampilanakhir(){
    printf("Silahkan Pilih Menu:\n");
    printf("1.Play Again\n");
    printf("2.Main Menu");
    printf("\nInput Pilihan Anda:");
}
void highscore(){
    system("cls");
    FILE *FF; //penunjuk ke file
	char CC; //var penunjuk karakter yang dibaca
	
	if((FF=fopen("Highscore.txt","r"))== NULL) { //Buka file mode baca
		printf("Pembukaan File Gagal !");
		exit(1); //keluar program
	}
    while((CC=getc(FF))!=EOF) { //CC akan berisi karakter yg dibaca, akhir teks dengan EOF
		putchar(CC); //baca dan tampilkan ke layar
	}
	fclose(FF);
	getchar();
}
void inputnama(char nama1[20],char nama2 [20]){
    printf("Input Nama player 1:");
    scanf("\n%[^\n]",nama1);
    printf("Input Nama player 2:");
    scanf("\n%[^\n]",nama2);
}
void timer(){
    
}