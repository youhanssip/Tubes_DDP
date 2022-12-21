#include "header.h"
int main(){
    int inputfromplayer;
    inisialisasi();
    system("cls");
    mainmenu();
    inputpilihan(&inputfromplayer);
    if(inputfromplayer==1){
        play();
    }
    if (inputfromplayer==2){
        aturanbermain();
        inputpilihan(&inputfromplayer);
        if(inputfromplayer==1){
            main();
        }
    }
    if (inputfromplayer==3){
        exitprogram();
    }
    while(inputfromplayer>3){
        printf("                                                 Input Tidak Valid Coba Lagi\n");
		printf("                                                 Silahkan Imput Kembali:");
        inputpilihan(&inputfromplayer);
        if(inputfromplayer==1){
            play();
        }
        if (inputfromplayer==2){
            aturanbermain();
        }
        if (inputfromplayer==3){
            exitprogram();
        }

    }
    return 0;
}
void inisialisasi(){
    int i,j;
    for (i=0;i<=6;i++){
        for(j=0;j<=6;j++){
            brd.matrix[i][j]=' ';
        }
    }
}
void inputpilihan(int *pilih_angka){
    scanf("%d",& *pilih_angka);
}
void play(){
    int inputfromplayer,cek=0,giliranplayer=1;
    system("cls");
    inisialisasi();
    inputnama();
    system("cls");
    displaypilihpapan();
    inputpilihan(&inputfromplayer);
    system("cls");
    buatpapan(inputfromplayer);
    do{
        if(giliranplayer==3){
            giliranplayer=1;
        }
        inputkoordinat(giliranplayer,inputfromplayer);
        system("cls");
        buatpapan(inputfromplayer);
        cek=cekpemenang(inputfromplayer);
        if(cek!=1){
            cek=cektempatkosong(inputfromplayer);
        }
        giliranplayer++;   
    }while(cek==0);

    if(cek==1){
        cetaknamapemenang(giliranplayer);
        tampilanakhir();
        inputpilihan(&inputfromplayer);
        if(inputfromplayer==1){
            system("cls");
            play();
        }
        else if(inputfromplayer==2){
            system("cls");
            main();
        }
        
    }
    else if(cek==2){
        cetakdraw();
        tampilanakhir();
        inputpilihan(&inputfromplayer);
        if(inputfromplayer==1){
            system("cls");
            play();
        }
        else if(inputfromplayer==2){
            system("cls");
            main();
        }
    }
}
void buatpapan(int pilihpapan){
    if(pilihpapan==1){
		printf("\n                                     _____                            _        \n");     
		printf("                                    / ____|                          | |      \n");       
		printf("                                   | |  __  __ _ _ __ ___   ___ _ __ | | __ _ _   _ \n");
		printf("                                   | | |_ |/ _` | '_ ` _ \\ / _ \\ '_ \\| |/ _` | | | |\n"); 
		printf("                                   | |__| | (_| | | | | | |  __/ |_) | | (_| | |_| |\n"); 
		printf("                                    \\_____|\\__,_|_| |_| |_|\\___| .__/|_|\\__,_|\\__, |\n");
		printf("                                                               | |             __/ |\n");
		printf("                                                               |_|            |___/");
        printf("\n________________________________________________________________________________________________________________________\n");
        printf("________________________________________________________________________________________________________________________\n\n");
    	printf("                                              _____________________________\n");
        printf("                                             |         |         |         |\n");
        printf("                                             |    %c    |    %c    |    %c    |\n", brd.matrix[0][0], brd.matrix[0][1], brd.matrix[0][2]);
        printf("                                             |_________|_________|_________|\n");
        printf("                                             |         |         |         |\n");
        printf("                                             |    %c    |    %c    |    %c    |\n", brd.matrix[1][0], brd.matrix[1][1], brd.matrix[1][2]);
        printf("                                             |_________|_________|_________|\n");
        printf("                                             |         |         |         |\n");
        printf("                                             |    %c    |    %c    |    %c    |\n", brd.matrix[2][0], brd.matrix[2][1], brd.matrix[2][2]);
        printf("                                             |_________|_________|_________|\n");
    }

    
    if (pilihpapan==2){
    	printf("                                     _____                            _        \n");     
		printf("                                    / ____|                          | |      \n");       
		printf("                                   | |  __  __ _ _ __ ___   ___ _ __ | | __ _ _   _ \n");
		printf("                                   | | |_ |/ _` | '_ ` _ \\ / _ \\ '_ \\| |/ _` | | | |\n"); 
		printf("                                   | |__| | (_| | | | | | |  __/ |_) | | (_| | |_| |\n"); 
		printf("                                    \\_____|\\__,_|_| |_| |_|\\___| .__/|_|\\__,_|\\__, |\n");
		printf("                                                               | |             __/ |\n");
		printf("                                                               |_|            |___/");
        printf("\n________________________________________________________________________________________________________________________\n");
        printf("________________________________________________________________________________________________________________________\n\n");
    	printf("                                    __________________________________________________\n");
        printf("                                   |         |          |         |         |         |\n");
        printf("                                   |    %c    |    %c     |    %c    |    %c    |    %c    |\n", brd.matrix[0][0], brd.matrix[0][1], brd.matrix[0][2],brd.matrix[0][3],brd.matrix[0][4]);
        printf("                                   |_________|__________|_________|_________|_________|\n");
        printf("                                   |         |          |         |         |         |\n");
        printf("                                   |    %c    |    %c     |    %c    |    %c    |    %c    |\n", brd.matrix[1][0], brd.matrix[1][1], brd.matrix[1][2],brd.matrix[1][3],brd.matrix[1][4]);
        printf("                                   |_________|__________|_________|_________|_________|\n");
        printf("                                   |         |          |         |         |         |\n");
        printf("                                   |    %c    |    %c     |    %c    |    %c    |    %c    |\n", brd.matrix[2][0], brd.matrix[2][1], brd.matrix[2][2],brd.matrix[2][3],brd.matrix[2][4]);
        printf("                                   |_________|__________|_________|_________|_________|\n");
        printf("                                   |         |          |         |         |         |\n");
        printf("                                   |    %c    |    %c     |    %c    |    %c    |    %c    |\n", brd.matrix[3][0], brd.matrix[3][1], brd.matrix[3][2],brd.matrix[3][3],brd.matrix[3][4]);
        printf("                                   |_________|__________|_________|_________|_________|\n");
        printf("                                   |         |          |         |         |         |\n");
        printf("                                   |    %c    |    %c     |    %c    |    %c    |    %c    |\n", brd.matrix[4][0], brd.matrix[4][1], brd.matrix[4][2],brd.matrix[4][3],brd.matrix[4][4]);
        printf("                                   |_________|__________|_________|_________|_________|\n");
    }


    if (pilihpapan==3){
    	printf(" _____________________________________________________________________    |       _____                            \n");
        printf("|         |         |         |         |         |         |         |   |     / ____|                             \n");
        printf("|    %c    |    %c    |    %c    |    %c    |    %c    |    %c    |    %c    |   |    | |  __  __ _ _ __ ___   ___         \n", brd.matrix[0][0], brd.matrix[0][1], brd.matrix[0][2],brd.matrix[0][3],brd.matrix[0][4],brd.matrix[0][5],brd.matrix[0][6]);
        printf("|_________|_________|_________|_________|_________|_________|_________|   |    | | |_ |/ _` | '_ ` _ \\ / _ \\     \n");
        printf("|         |         |         |         |         |         |         |   |    | |__| | (_| | | | | | |  __/        \n");
		printf("|    %c    |    %c    |    %c    |    %c    |    %c    |    %c    |    %c    |   |     \\_____|\\__,_|_| |_| |_|\\___     \n", brd.matrix[1][0], brd.matrix[1][1], brd.matrix[1][2],brd.matrix[1][3],brd.matrix[1][4],brd.matrix[1][5],brd.matrix[1][6]);
        printf("|_________|_________|_________|_________|_________|_________|_________|   |\n");
        printf("|         |         |         |         |         |         |         |   |                           _ \n");
		printf("|    %c    |    %c    |    %c    |    %c    |    %c    |    %c    |    %c    |   |                          | |\n", brd.matrix[2][0], brd.matrix[2][1], brd.matrix[2][2],brd.matrix[2][3],brd.matrix[2][4],brd.matrix[2][5],brd.matrix[2][6]);
        printf("|_________|_________|_________|_________|_________|_________|_________|   |                      ___ | | __ _ _   _\n");
        printf("|         |         |         |         |         |         |         |   |                     / _ \\| |/ _` | | | |\n");
		printf("|    %c    |    %c    |    %c    |    %c    |    %c    |    %c    |    %c    |   |                    | |_) | | (_| | |_| |\n", brd.matrix[3][0], brd.matrix[3][1], brd.matrix[3][2],brd.matrix[3][3],brd.matrix[3][4],brd.matrix[3][5],brd.matrix[3][6]);
        printf("|_________|_________|_________|_________|_________|_________|_________|   |                    | .__/|_|\\__,_|\\__, |\n");
        printf("|         |         |         |         |         |         |         |   |                    | |             __/ |\n");
		printf("|    %c    |    %c    |    %c    |    %c    |    %c    |    %c    |    %c    |   |                    |_|            |___/\n", brd.matrix[4][0], brd.matrix[4][1], brd.matrix[4][2],brd.matrix[4][3],brd.matrix[4][4],brd.matrix[4][5],brd.matrix[4][6]);
        printf("|_________|_________|_________|_________|_________|_________|_________|   |\n");
        printf("|         |         |         |         |         |         |         |   |\n");
		printf("|    %c    |    %c    |    %c    |    %c    |    %c    |    %c    |    %c    |   |\n", brd.matrix[5][0], brd.matrix[5][1], brd.matrix[5][2],brd.matrix[5][3],brd.matrix[5][4],brd.matrix[5][5],brd.matrix[5][6]);
        printf("|_________|_________|_________|_________|_________|_________|_________|   |\n");
        printf("|         |         |         |         |         |         |         |   |\n");
		printf("|    %c    |    %c    |    %c    |    %c    |    %c    |    %c    |    %c    |   |\n", brd.matrix[6][0], brd.matrix[6][1], brd.matrix[6][2],brd.matrix[6][3],brd.matrix[6][4],brd.matrix[6][5],brd.matrix[6][6]);
        printf("|_________|_________|_________|_________|_________|_________|_________|   |\n");
    }
}
void displaypilihpapan(){
    printf("\n                _______   _    _______        _______   ______   ______        _______   ______   _______");
    printf("\n               |___ ___| | |  |  _____|      |___ ___| |  __  | |  ____|      |___ ___| |  __  | |  _____|");
    printf("\n                  | |    | |  | |               | |    | |__| | | |              | |    | |  | | | |_____");
    printf("\n                  | |    | |  | |               | |    |  __  | | |              | |    | |  | | |  _____|");
    printf("\n                  | |    | |  | |_____          | |    | |  | | | |____          | |    | |__| | | |_____");
    printf("\n                  |_|    |_|  |_______|         |_|    |_|  |_| |______|         |_|    |______| |_______|");
    printf("\n");
    printf("\n________________________________________________________________________________________________________________________");
    printf("\n");
    printf("\n________________________________________________________________________________________________________________________");
	printf("\n\n\n\n                                              __________________________________");
    printf("\n                                             |                                  |");    
    printf("\n                                             |   Silahkan Pilih Ukuran Papan:   |");
    printf("\n                                             |   1. 3x3                         |");
    printf("\n                                             |   2. 5x5                         |");
    printf("\n                                             |   3. 7x7                         |");
    printf("\n                                             |__________________________________|\n\n");
    printf("\n                                                 Input Angka Anda: "); 	
}
void inputkoordinat(int giliran,int ukuran_papan){
    if(giliran==1&&ukuran_papan==1){
        brd.simbol='X';
        printf("                                  __________________________________________________________ \n");
        printf("                                        %s Tolong Input Koordinat baris dan kolom:",ply[0].nama);
        scanf("\n%d %d",&koor.x,&koor.y);
        while(brd.matrix[koor.x][koor.y]!=' '||koor.x>2||koor.y>2){
            printf("                                  __________________________________________________________ \n");
        	printf("                                        Input tidak valid silahkan coba lagi:");
            scanf("\n%d %d",&koor.x,&koor.y);
        }
         if (brd.matrix[koor.x][koor.y]==' '){
            brd.matrix[koor.x][koor.y]=brd.simbol;
        }
    }
    else if(giliran==2&&ukuran_papan==1){
        brd.simbol='O';
        printf("                                  __________________________________________________________ \n");
        printf("                                        %s Tolong Input Koordinat baris dan kolom:",ply[1].nama);
            scanf("\n%d %d",&koor.x,&koor.y);
            while(brd.matrix[koor.x][koor.y]!=' '||koor.x>2||koor.y>2){
            	printf("                                  __________________________________________________________ \n");
            	printf("                                        Input tidak valid silahkan coba lagi:");
                scanf("\n%d %d",&koor.x,&koor.y);
            }
            if (brd.matrix[koor.x][koor.y]==' '){
                brd.matrix[koor.x][koor.y]=brd.simbol;
            }
        }
    if(giliran==1&&ukuran_papan==2){
        brd.simbol='X';
        printf("                                  __________________________________________________________ \n");
        printf("                                        %s Tolong Input Koordinat baris dan kolom:",ply[0].nama);
        scanf("\n%d %d",&koor.x,&koor.y);
         while(brd.matrix[koor.x][koor.y]!=' '||koor.x>4||koor.y>4){
            printf("                                  __________________________________________________________ \n");
            printf("                                        Input tidak valid silahkan coba lagi:");
            scanf("\n%d %d",&koor.x,&koor.y);
        }
         if (brd.matrix[koor.x][koor.y]==' '){
            brd.matrix[koor.x][koor.y]=brd.simbol;
        }
    }
    else if(giliran==2&&ukuran_papan==2){
        brd.simbol='O';
        printf("                                  __________________________________________________________ \n");
        printf("                                        %s Tolong Input Koordinat baris dan kolom:",ply[1].nama);
            scanf("\n%d %d",&koor.x,&koor.y);
            while(brd.matrix[koor.x][koor.y]!=' '||koor.x>4||koor.y>4){
                printf("                                  __________________________________________________________ \n");
            	printf("                                        Input tidak valid silahkan coba lagi:");
                scanf("\n%d %d",&koor.x,&koor.y);
            }
            if (brd.matrix[koor.x][koor.y]==' '){
                brd.matrix[koor.x][koor.y]=brd.simbol;
            }
        }
    if(giliran==1&&ukuran_papan==3){
        brd.simbol='X';
        printf("                                  __________________________________________________________ \n");
        printf("                                        %s Tolong Input Koordinat baris dan kolom:",ply[0].nama);
        scanf("\n%d %d",&koor.x,&koor.y);
         while(brd.matrix[koor.x][koor.y]!=' '||koor.x>6||koor.y>6){
            printf("                                  __________________________________________________________ \n");
            printf("                                        Input tidak valid silahkan coba lagi:");
            scanf("\n%d %d",&koor.x,&koor.y);
        }
         if (brd.matrix[koor.x][koor.y]==' '){
            brd.matrix[koor.x][koor.y]=brd.simbol;
        }
    }
    else if(giliran==2&&ukuran_papan==3){
        brd.simbol='O';
        printf("                                  __________________________________________________________ \n");
        printf("                                        %s Tolong Input Koordinat baris dan kolom:",ply[1].nama);
            scanf("\n%d %d",&koor.x,&koor.y);
            while(brd.matrix[koor.x][koor.y]!=' '||koor.x>6||koor.y>6){
		        printf("                                  __________________________________________________________ \n");
            	printf("                                        Input tidak valid silahkan coba lagi:");
                scanf("\n%d %d",&koor.x,&koor.y);
            }
            if (brd.matrix[koor.x][koor.y]==' '){
                brd.matrix[koor.x][koor.y]=brd.simbol;
            }
        }
    
}
int cekpemenang(int ukuran_papan){
    int i,cek=0;
    //Cek Pemenang 3x3
	//Cek baris
    if(ukuran_papan==1){
	for(i=0;i<3;i++){
		if((brd.matrix[i][0]==brd.matrix[i][1]&&brd.matrix[i][0]==brd.matrix[i][2])&&(brd.matrix[i][0]!=' ')){	
		cek=1;
        }
    }
	//Cek kolom
	for(i=0;i<3;i++){
		if((brd.matrix[0][i]==brd.matrix[1][i]&&brd.matrix[0][i]==brd.matrix[2][i])&&(brd.matrix[0][i]!=' ')){		
		cek=1;
        }
    }
	//Cek Diagonal
	if((brd.matrix[0][0]==brd.matrix[1][1]&&brd.matrix[0][0]==brd.matrix[2][2])&&(brd.matrix[0][0]!=' ')){								
		cek=1;
    }
	if((brd.matrix[0][2]==brd.matrix[1][1]&&brd.matrix[0][2]==brd.matrix[2][0])&&(brd.matrix[0][2]!=' ')){								
        cek=1;
    }
    }

    //Cek pemenang 5x5
    if(ukuran_papan==2){
    //Cek baris
    for(i=0; i<5; i++){
                if(brd.matrix[i][0]==brd.matrix[i][1] && brd.matrix[i][0]==brd.matrix[i][2] && brd.matrix[i][0]==brd.matrix[i][3] && brd.matrix[i][0]!=' ' && brd.matrix[i][1]!=0 && brd.matrix[i][2] != ' ' && brd.matrix[i][3] != ' '){
                    cek=1;

                }
                else if(brd.matrix[i][1]==brd.matrix[i][2] && brd.matrix[i][1]==brd.matrix[i][3] && brd.matrix[i][1]==brd.matrix[i][4] && brd.matrix[i][1]!=' ' && brd.matrix[i][2] != ' ' && brd.matrix[i][3] != ' ' && brd.matrix[i][4]!=' '){
                    cek=1;
                }
    }
    //Cek Kolom
    for(i=0; i<5; i++){
                if(brd.matrix[0][i]==brd.matrix[1][i] && brd.matrix[0][i]==brd.matrix[2][i] && brd.matrix[0][i]==brd.matrix[3][i] && brd.matrix[0][i] !=' ' && brd.matrix[1][i] != ' ' &&brd.matrix[2][i] != ' ' && brd.matrix[3][i]!=' '){
                    cek=1;
                }
                else if(brd.matrix[1][i]==brd.matrix[2][i] && brd.matrix[1][i]==brd.matrix[3][i] && brd.matrix[1][i]==brd.matrix[4][i] && brd.matrix[1][i] != ' ' &&brd.matrix[2][i] != ' ' && brd.matrix[3][i]!=' ' && brd.matrix[4][i] != ' '){
                    cek=1;
                }
    }
    //Cek Diagonal
        if(brd.matrix[0][0]==brd.matrix[1][1] && brd.matrix[0][0]==brd.matrix[2][2] && brd.matrix[0][0]==brd.matrix[3][3] && brd.matrix[0][0] != ' ' && brd.matrix[1][1] != ' ' && brd.matrix[2][2] != ' ' && brd.matrix[3][3] != ' '){
                cek=1;
            }
            else if(brd.matrix[1][1]==brd.matrix[2][2] && brd.matrix[1][1]==brd.matrix[3][3] && brd.matrix[1][1]==brd.matrix[4][4] && brd.matrix[1][1] != ' ' && brd.matrix[2][2] != ' ' && brd.matrix[3][3] != ' ' && brd.matrix[4][4] != ' '){
                cek=1;
            }
            else if(brd.matrix[0][1]==brd.matrix[1][2] && brd.matrix[0][1]==brd.matrix[2][3] && brd.matrix[0][1]==brd.matrix[3][4] && brd.matrix[0][1] != ' ' && brd.matrix[1][2] != ' ' && brd.matrix[2][3] != ' ' && brd.matrix[3][4] != ' '){
                cek=1;
            }
            else if(brd.matrix[1][0]==brd.matrix[2][1] && brd.matrix[1][0]==brd.matrix[3][2] && brd.matrix[1][0]==brd.matrix[4][3] && brd.matrix[1][0] != ' ' && brd.matrix[2][1] != ' ' && brd.matrix[3][2] != ' ' && brd.matrix[4][3] != ' '){
                cek=1;
            }
            else if(brd.matrix[0][4]==brd.matrix[1][3] && brd.matrix[0][4]==brd.matrix[2][2] && brd.matrix[0][4]==brd.matrix[3][1] && brd.matrix[0][4] != ' ' && brd.matrix[1][3] != ' ' && brd.matrix[2][2] != ' ' && brd.matrix[3][1] != ' '){
                cek=1;
            }
            else if(brd.matrix[1][3]==brd.matrix[2][2] && brd.matrix[1][3]==brd.matrix[3][1] && brd.matrix[1][3]==brd.matrix[4][0] && brd.matrix[1][3] != ' ' && brd.matrix[2][2] != ' ' && brd.matrix[3][1] != ' ' && brd.matrix[4][0] != ' '){
                cek=1;
            }
            else if(brd.matrix[1][4]==brd.matrix[2][3] && brd.matrix[1][4]==brd.matrix[3][2] && brd.matrix[1][4]==brd.matrix[4][1] && brd.matrix[0][0] != ' ' && brd.matrix[4][1] != ' ' && brd.matrix[2][3] != ' ' && brd.matrix[3][2] != ' '){
                cek=1;
            }
            else if(brd.matrix[0][3]==brd.matrix[1][2] && brd.matrix[0][3]==brd.matrix[2][1] && brd.matrix[0][3]==brd.matrix[3][0] && brd.matrix[0][3] != ' ' && brd.matrix[1][2] != ' ' && brd.matrix[2][1] != ' ' && brd.matrix[3][0] != ' '){
                cek=1;
            }
    }
    //Cek Pemenang 7x7
    if (ukuran_papan==3){
        //Cek baris
        for(i=0; i<7; i++){
                    if(brd.matrix[i][0]==brd.matrix[i][1] && brd.matrix[i][1]==brd.matrix[i][2] && brd.matrix[i][2]==brd.matrix[i][3] && brd.matrix[i][0]!=' ' && brd.matrix[i][1]!=' ' && brd.matrix[i][2]!=' ' && brd.matrix[i][3]!=' '){
                        cek=1;
                    }
                    else if(brd.matrix[i][1]==brd.matrix[i][2] && brd.matrix[i][2]==brd.matrix[i][3]&& brd.matrix[i][3]==brd.matrix[i][4] && brd.matrix[i][1]!=' ' && brd.matrix[i][2]!=' ' && brd.matrix[i][3]!=' ' && brd.matrix[i][4]!=' '){
                        cek=1;
                    }
                    else if(brd.matrix[i][2]==brd.matrix[i][3] && brd.matrix[i][3]==brd.matrix[i][4]&& brd.matrix[i][4]==brd.matrix[i][5] && brd.matrix[i][2]!=' ' && brd.matrix[i][3]!=' ' && brd.matrix[i][4]!=' ' && brd.matrix[i][5]!=' '){
                        cek=1;
                    }
                    else if(brd.matrix[i][3]==brd.matrix[i][4] && brd.matrix[i][4]==brd.matrix[i][5]&& brd.matrix[i][5]==brd.matrix[i][6] && brd.matrix[i][3]!=' ' && brd.matrix[i][4]!=' ' && brd.matrix[i][5]!=' ' && brd.matrix[i][6]!=' '){
                        cek=1;
                    }
                }
                //Cek Kolom
                for(i=0; i<7; i++){
                    if(brd.matrix[0][i]==brd.matrix[1][i] && brd.matrix[1][i]==brd.matrix[2][i] && brd.matrix[2][i]==brd.matrix[3][i] && brd.matrix[0][i]!=' ' && brd.matrix[1][i]!=' ' && brd.matrix[2][i]!=' ' && brd.matrix[3][i]!=' ' ){
                        cek=1;
                    }
                    else if(brd.matrix[1][i]==brd.matrix[2][i] && brd.matrix[2][i]==brd.matrix[3][i] && brd.matrix[3][i]==brd.matrix[4][i] && brd.matrix[1][i]!=' ' && brd.matrix[2][i]!=' ' && brd.matrix[3][i]!=' ' && brd.matrix[4][i]!=' '){
                        cek=1;
                    }
                    else if(brd.matrix[2][i]==brd.matrix[3][i] && brd.matrix[3][i]==brd.matrix[4][i] && brd.matrix[4][i]==brd.matrix[5][i] && brd.matrix[2][i]!=' ' && brd.matrix[3][i]!=' ' && brd.matrix[4][i]!=' ' && brd.matrix[5][i]!=' '){
                        cek=1;
                    }
                    else if(brd.matrix[3][i]==brd.matrix[4][i] && brd.matrix[4][i]==brd.matrix[5][i] && brd.matrix[5][i]==brd.matrix[6][i] && brd.matrix[3][i]!=' ' && brd.matrix[4][i]!=' ' && brd.matrix[5][i]!=' ' && brd.matrix[6][i]!=' '){
                        cek=1;
                    }
                }
                //Cek diagonal
                if(brd.matrix[0][0]==brd.matrix[1][1] && brd.matrix[1][1]==brd.matrix[2][2] && brd.matrix[2][2]==brd.matrix[3][3] && brd.matrix[0][0] != ' ' && brd.matrix[1][1] != ' ' && brd.matrix[2][2] != ' ' &&brd.matrix[3][3] != ' '){
                    cek=1;
                }
                else if(brd.matrix[1][1]==brd.matrix[2][2] && brd.matrix[2][2]==brd.matrix[3][3] && brd.matrix[3][3]==brd.matrix[4][4] && brd.matrix[1][1] != ' ' && brd.matrix[2][2] != ' ' && brd.matrix[3][3] != ' ' && brd.matrix[4][4] != ' '){
                    cek=1;
                }
                else if(brd.matrix[2][2]==brd.matrix[3][3] && brd.matrix[3][3]==brd.matrix[4][4] && brd.matrix[4][4]==brd.matrix[5][5] && brd.matrix[2][2] != ' ' && brd.matrix[3][3] != ' ' && brd.matrix[4][4] != ' ' && brd.matrix[5][5] != ' '){
                    cek=1;
                }
                else if(brd.matrix[3][3]==brd.matrix[4][4] && brd.matrix[4][4]==brd.matrix[5][5] && brd.matrix[5][5]==brd.matrix[6][6] && brd.matrix[3][3] != ' ' && brd.matrix[4][4] != ' ' && brd.matrix[5][5] != ' ' && brd.matrix[6][6] != ' '){
                    cek=1;
                }
                else if(brd.matrix[0][3]==brd.matrix[1][2] && brd.matrix[1][2]==brd.matrix[2][1] && brd.matrix[2][1]==brd.matrix[3][0] && brd.matrix[2][1] != ' ' && brd.matrix[1][2] != ' ' && brd.matrix[2][1] != ' ' && brd.matrix[3][0] != ' '){
                    cek=1; 
                }
                else if(brd.matrix[0][4]==brd.matrix[1][3] && brd.matrix[1][3]==brd.matrix[2][2] && brd.matrix[2][2]==brd.matrix[3][1] && brd.matrix[0][4] != ' ' && brd.matrix[1][3] != ' ' && brd.matrix[2][2] != ' ' && brd.matrix[3][1] != ' '){
                    cek=1; 
                }
                else if(brd.matrix[0][5]==brd.matrix[1][4] && brd.matrix[1][4]==brd.matrix[2][3] && brd.matrix[2][3]==brd.matrix[3][2] && brd.matrix[0][5] != ' ' && brd.matrix[1][4] != ' ' && brd.matrix[2][3] != ' ' && brd.matrix[3][2] != ' '){
                    cek=1; 
                }
                else if(brd.matrix[0][6]==brd.matrix[1][5] && brd.matrix[1][5]==brd.matrix[2][4] && brd.matrix[2][4]==brd.matrix[3][3] && brd.matrix[0][6] != ' ' && brd.matrix[1][5] != ' ' && brd.matrix[2][4] != ' ' && brd.matrix[3][3] != ' '){
                    cek=1; 
                }
                else if(brd.matrix[1][6]==brd.matrix[2][5] && brd.matrix[2][5]==brd.matrix[3][4] && brd.matrix[3][4]==brd.matrix[4][3] && brd.matrix[1][6] != ' ' && brd.matrix[2][5] != ' ' && brd.matrix[3][4] != ' ' && brd.matrix[4][3] != ' '){
                    cek=1; 
                }
                else if(brd.matrix[2][6]==brd.matrix[3][5] && brd.matrix[3][5]==brd.matrix[4][4] && brd.matrix[4][4]==brd.matrix[5][3] && brd.matrix[2][6] != ' ' && brd.matrix[3][5] != ' ' && brd.matrix[4][4] != ' ' && brd.matrix[5][3] != ' '){
                    cek=1; 
                }
                else if(brd.matrix[3][6]==brd.matrix[4][5] && brd.matrix[4][5]==brd.matrix[5][4] && brd.matrix[5][4]==brd.matrix[6][3] && brd.matrix[3][6] != ' ' && brd.matrix[4][5] != ' ' && brd.matrix[5][4] != ' ' && brd.matrix[6][3] != ' '){
                    cek=1; 
                }
                else if(brd.matrix[1][4]==brd.matrix[2][3] && brd.matrix[2][3]==brd.matrix[3][2] && brd.matrix[3][2]==brd.matrix[4][1] && brd.matrix[1][4] != ' ' && brd.matrix[2][3] != ' ' && brd.matrix[3][2] != ' ' && brd.matrix[4][1] != ' '){
                    cek=1; 
                }
                else if(brd.matrix[2][4]==brd.matrix[3][3] && brd.matrix[3][3]==brd.matrix[4][2] && brd.matrix[4][2]==brd.matrix[5][1] && brd.matrix[2][4] != ' ' && brd.matrix[3][3] != ' ' && brd.matrix[4][2] != ' ' && brd.matrix[5][1] != ' '){
                    cek=1; 
                }
                else if(brd.matrix[2][5]==brd.matrix[3][4] && brd.matrix[3][4]==brd.matrix[4][3] && brd.matrix[4][3]==brd.matrix[5][2] && brd.matrix[2][5] != ' ' && brd.matrix[3][4] != ' ' && brd.matrix[4][3] != ' ' && brd.matrix[5][2] != ' '){
                    cek=1; 
                }
                else if(brd.matrix[1][5]==brd.matrix[2][4] && brd.matrix[2][4]==brd.matrix[3][3] && brd.matrix[3][3]==brd.matrix[4][2] && brd.matrix[1][5] != ' ' && brd.matrix[2][4] != ' ' && brd.matrix[3][3] != ' ' && brd.matrix[4][2] != ' '){
                    cek=1; 
                }
                else if(brd.matrix[1][3]==brd.matrix[2][2] && brd.matrix[2][2]==brd.matrix[3][1] && brd.matrix[3][1]==brd.matrix[4][0] && brd.matrix[1][3] != ' ' && brd.matrix[2][2] != ' ' && brd.matrix[3][1] != ' ' && brd.matrix[4][0] != ' '){
                    cek=1; 
                }
                else if(brd.matrix[2][3]==brd.matrix[3][2] && brd.matrix[3][2]==brd.matrix[4][1] && brd.matrix[4][1]==brd.matrix[5][0] && brd.matrix[2][3] != ' ' && brd.matrix[3][2] != ' ' && brd.matrix[4][1] != ' ' && brd.matrix[5][0] != ' '){
                    cek=1; 
                }
                else if(brd.matrix[3][3]==brd.matrix[4][2] && brd.matrix[4][2]==brd.matrix[5][1] && brd.matrix[5][1]==brd.matrix[6][0] && brd.matrix[3][3] != ' ' && brd.matrix[4][2] != ' ' && brd.matrix[5][1] != ' ' && brd.matrix[6][0] != ' '){
                    cek=1; 
                }
                else if(brd.matrix[3][4]==brd.matrix[4][3] && brd.matrix[4][3]==brd.matrix[5][2] && brd.matrix[5][2]==brd.matrix[6][1] && brd.matrix[3][4] != ' ' && brd.matrix[4][3] != ' ' && brd.matrix[5][2] != ' ' && brd.matrix[6][1] != ' '){
                    cek=1; 
                }
                else if(brd.matrix[3][5]==brd.matrix[4][4] && brd.matrix[4][4]==brd.matrix[5][3] && brd.matrix[5][3]==brd.matrix[6][2] && brd.matrix[3][5] != ' ' && brd.matrix[4][4] != ' ' && brd.matrix[5][3] != ' ' && brd.matrix[6][2] != ' '){
                    cek=1; 
                }
                else if(brd.matrix[0][3]==brd.matrix[1][4] && brd.matrix[1][4]==brd.matrix[2][5] && brd.matrix[2][5]==brd.matrix[3][6] && brd.matrix[0][3] != ' ' && brd.matrix[1][4] != ' ' && brd.matrix[2][5] != ' ' && brd.matrix[3][6] != ' '){
                    cek=1; 
                }
                else if(brd.matrix[1][3]==brd.matrix[2][4] && brd.matrix[2][4]==brd.matrix[3][5] && brd.matrix[3][5]==brd.matrix[4][6] && brd.matrix[3][1] != ' ' && brd.matrix[2][4] != ' ' && brd.matrix[3][5] != ' ' && brd.matrix[4][6] != ' '){
                    cek=1; 
                }
                else if(brd.matrix[2][3]==brd.matrix[3][4] && brd.matrix[3][4]==brd.matrix[4][5] && brd.matrix[4][5]==brd.matrix[5][6] && brd.matrix[2][3] != ' ' && brd.matrix[3][4] != ' ' && brd.matrix[4][5] != ' ' && brd.matrix[5][6] != ' '){
                    cek=1; 
                }
                else if(brd.matrix[1][2]==brd.matrix[2][3] && brd.matrix[2][3]==brd.matrix[3][4] && brd.matrix[3][4]==brd.matrix[4][5] && brd.matrix[1][2] != ' ' && brd.matrix[2][4] != ' ' && brd.matrix[3][4] != ' ' && brd.matrix[4][5] != ' '){
                    cek=1; 
                }
                else if(brd.matrix[3][0]==brd.matrix[4][1] && brd.matrix[4][1]==brd.matrix[5][2] && brd.matrix[5][2]==brd.matrix[6][3] && brd.matrix[3][0] != ' ' && brd.matrix[4][1] != ' ' && brd.matrix[5][2] != ' ' && brd.matrix[6][3] != ' '){
                    cek=1; 
                }
                else if(brd.matrix[3][1]==brd.matrix[4][2] && brd.matrix[4][2]==brd.matrix[5][3] && brd.matrix[5][3]==brd.matrix[6][4] && brd.matrix[3][1] != ' ' && brd.matrix[4][2] != ' ' && brd.matrix[5][3] != ' ' && brd.matrix[6][4] != ' '){
                    cek=1; 
                }
                else if(brd.matrix[3][2]==brd.matrix[4][3] && brd.matrix[4][3]==brd.matrix[5][4] && brd.matrix[5][4]==brd.matrix[6][5] && brd.matrix[3][2] != ' ' && brd.matrix[4][3] != ' ' && brd.matrix[5][4] != ' ' && brd.matrix[6][5] != ' '){
                    cek=1; 
                }
                else if(brd.matrix[2][1]==brd.matrix[3][2] && brd.matrix[3][2]==brd.matrix[4][3] && brd.matrix[4][3]==brd.matrix[5][4] && brd.matrix[2][1] != ' ' && brd.matrix[3][2] != ' ' && brd.matrix[4][3] != ' ' && brd.matrix[5][4] != ' '){
                    cek=1; 
                }
                else if(brd.matrix[0][2]==brd.matrix[1][3] && brd.matrix[1][3]==brd.matrix[2][4] && brd.matrix[2][4]==brd.matrix[3][5] && brd.matrix[0][2] != ' ' && brd.matrix[1][3] != ' ' && brd.matrix[2][4] != ' ' && brd.matrix[3][5] != ' '){
                    cek=1; 
                }
                else if(brd.matrix[0][1]==brd.matrix[1][2] && brd.matrix[1][2]==brd.matrix[2][3] && brd.matrix[2][3]==brd.matrix[3][3] && brd.matrix[0][1] != ' ' && brd.matrix[1][2] != ' ' && brd.matrix[2][3] != ' ' && brd.matrix[3][3] != ' '){
                    cek=1; 
                }
                else if(brd.matrix[1][0]==brd.matrix[2][1] && brd.matrix[2][1]==brd.matrix[3][2] && brd.matrix[3][2]==brd.matrix[4][3] && brd.matrix[1][0] != ' ' && brd.matrix[2][1] != ' ' && brd.matrix[3][2] != ' ' && brd.matrix[4][3] != ' '){
                    cek=1; 
                }
                else if(brd.matrix[2][0]==brd.matrix[3][1] && brd.matrix[3][1]==brd.matrix[4][2] && brd.matrix[4][2]==brd.matrix[5][3] && brd.matrix[2][0] != ' ' && brd.matrix[3][1] != ' ' && brd.matrix[4][2] != ' ' && brd.matrix[5][3] != ' '){
                    cek=1; 
                }
    }
    return cek;
}
int cektempatkosong(int ukuran_papan){
    int i,j,k;
    if(ukuran_papan==1){
        for (i=0;i<=2;i++){
            for(j=0;j<=2;j++){
                if(brd.matrix[i][j]==' '){
                    return 0;
                }
            }
        }
    }
    else if(ukuran_papan==2){
        for (i=0;i<=4;i++){
            for(j=0;j<=4;j++){
                if(brd.matrix[i][j]==' '){
                    return 0;
                }
            }
        }
    }
    else if(ukuran_papan==3){
        for (i=0;i<=6;i++){
            for(j=0;j<=6;j++){
                if(brd.matrix[i][j]==' '){
                    return 0;
                }
            }
        }
    }
    return 2;
}
void cetakdraw(){
    system("cls");
	printf("                                                  _____\n");                     
	printf("                                                 |  __ \\\n");                    
	printf("                                                 | |  | |_ __ __ ___      __\n");
	printf("                                                 | |  | | '__/ _` \\ \\ /\\ / /\n");
	printf("                                                 | |__| | | | (_| |\\ V  V / \n"); 
	printf("                                                 |_____/|_|  \\__,_| \\_/\\_/\n");  
    printf("\n________________________________________________________________________________________________________________________\n");
    printf("________________________________________________________________________________________________________________________\n\n\n");   
}
void cetaknamapemenang(int player){
    system("cls");
    if(player==2){
	 	printf("\n                                           __          __ _ ");                  
	 	printf("\n                                           \\ \\        / /(_)");                    
 		printf("\n                                            \\ \\  /\\  / /  _ _ __  _ __   ___ _ __");
 		printf("\n                                             \\ \\/  \\/ /  | | '_ \\| '_ \\ / _ \\ '__|");
 		printf("\n                                              \\  /\\  /   | | | | | | | |  __/ |");   
 		printf("\n                                               \\/  \\/    |_|_| |_|_| |_|\\___|_|");
        printf("\n________________________________________________________________________________________________________________________\n");
        printf("________________________________________________________________________________________________________________________");
        printf("\n\n\n                                               __________________________\n"); 
    	printf("\n                                                        Selamat!!!       ");
    	printf("\n                                                        Player 1 ");
    	printf("\n                                                        %s", ply[0].nama);
    	printf("\n                                               __________________________\n\n");
    }
    else if(player!=1){ 	
	 	printf("\n                                           __          __ _ ");                  
	 	printf("\n                                           \\ \\        / /(_)");                    
 		printf("\n                                            \\ \\  /\\  / /  _ _ __  _ __   ___ _ __");
 		printf("\n                                             \\ \\/  \\/ /  | | '_ \\| '_ \\ / _ \\ '__|");
 		printf("\n                                              \\  /\\  /   | | | | | | | |  __/ |");   
 		printf("\n                                               \\/  \\/    |_|_| |_|_| |_|\\___|_|");
        printf("\n________________________________________________________________________________________________________________________\n");
        printf("________________________________________________________________________________________________________________________");
        printf("\n\n\n                                               __________________________\n"); 
    	printf("\n                                                        Selamat!!!       ");
    	printf("\n                                                        Player 2 ");
    	printf("\n                                                        %s", ply[1].nama);
    	printf("\n                                               __________________________\n\n");
    }
}
void mainmenu(){
    printf("\n                _______   _    _______        _______   ______   ______        _______   ______   _______");
    printf("\n               |___ ___| | |  |  _____|      |___ ___| |  __  | |  ____|      |___ ___| |  __  | |  _____|");
    printf("\n                  | |    | |  | |               | |    | |__| | | |              | |    | |  | | | |_____");
    printf("\n                  | |    | |  | |               | |    |  __  | | |              | |    | |  | | |  _____|");
    printf("\n                  | |    | |  | |_____          | |    | |  | | | |____          | |    | |__| | | |_____");
    printf("\n                  |_|    |_|  |_______|         |_|    |_|  |_| |______|         |_|    |______| |_______|");
    printf("\n");
    printf("\n________________________________________________________________________________________________________________________");
    printf("\n");
    printf("\n________________________________________________________________________________________________________________________");   
    
    printf("\n\n\n\n                                              __________________________");
    printf("\n                                             |                          |");    
    printf("\n                                             |   Silahkan Pilih Menu:   |");
    printf("\n                                             |   1.Play                 |");
    printf("\n                                             |   2.Aturanbermain        |");
    printf("\n                                             |   3.Exit                 |");
    printf("\n                                             |__________________________|\n\n");
    printf("\n                                                 Input Angka Anda: ");
}
void tampilanakhir(){
    printf("\n\n                                                 __________________________");
    printf("\n                                                |                          |");    
    printf("\n                                                |   Silahkan Pilih Menu:   |");
    printf("\n                                                |   1.Play Again           |");
    printf("\n                                                |   2.Main Menu            |");
    printf("\n                                                |__________________________|");
    printf("\n                                                    Input Pilihan Anda: ");
}
void aturanbermain(){
    FILE *FF; //penunjuk ke file
	char CC; //var penunjuk karakter yang dibaca
	system("cls");
	if((FF=fopen("Aturan.txt","r"))== NULL) { //Buka file mode baca
		printf("Pembukaan File Gagal !");
		exit(1); //keluar program
	}
    while((CC=getc(FF))!=EOF) { //CC akan berisi karakter yg dibaca, akhir teks dengan EOF
		putchar(CC); //baca dan tampilkan ke layar
	}
    printf("\n\n\n\n                                                     Input Angka 1 Untuk Kembali");
    printf("\n                                                     Silahkan Input Angka Anda: ");
    
	fclose(FF);
	getchar();
}
void inputnama(){
	printf("\n                _______   _    _______        _______   ______   ______        _______   ______   _______");
    printf("\n               |___ ___| | |  |  _____|      |___ ___| |  __  | |  ____|      |___ ___| |  __  | |  _____|");
    printf("\n                  | |    | |  | |               | |    | |__| | | |              | |    | |  | | | |_____");
    printf("\n                  | |    | |  | |               | |    |  __  | | |              | |    | |  | | |  _____|");
    printf("\n                  | |    | |  | |_____          | |    | |  | | | |____          | |    | |__| | | |_____");
    printf("\n                  |_|    |_|  |_______|         |_|    |_|  |_| |______|         |_|    |______| |_______|");
    printf("\n");
    printf("\n________________________________________________________________________________________________________________________");
    printf("\n");
    printf("\n________________________________________________________________________________________________________________________");
	printf("\n\n\n                                           ______________________________");
    printf("\n\n                                                Input Nama player 1:\n");
    printf("                                                ");
    scanf("\n%[^\n]",&ply[0].nama);
	printf("                                           ______________________________");
    printf("\n\n                                                Input Nama player 2:\n");
    printf("                                                ");
    scanf("\n%[^\n]",&ply[1].nama);
}
void exitprogram(){
    system("cls");
    printf("\n\n\n\n                                                            Exiting Program...");
    sleep(3);
    exit(1);

}
void timer()
{
    
}