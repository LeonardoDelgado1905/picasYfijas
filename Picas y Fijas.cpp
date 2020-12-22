#include <cstring>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <windows.h>
#include <ctime>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>

#define Arriba    72
#define Abajo     80
#define Izquierda 75
#define Derecha   77
#define Enter     13
using namespace std;

void posicion (int x, int y){
    COORD posi;

    posi.X = x;
    posi.Y = y;

    HANDLE ventana = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleCursorPosition(ventana, posi);


}

void sin_cursor(){

   HANDLE ventana = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO cci;
   cci.dwSize = 50;
   cci.bVisible = FALSE;

   SetConsoleCursorInfo(ventana, &cci);
}


using namespace std;


int main(int argc, char *argv[])
{
    system("color 3F");

    //Registros
srand(time(NULL));


//cout<<w<<x<<y<<z<<endl;
    //Picas y fijas

short F1,F2,F3,F4;
short P1,P2,P3,P4;

short P1l, P1m, P1n ;
short P2k, P2m, P2n ;
short P3k, P3l, P3n ;
short P4k, P4l, P4m ;

short Picas;

short Fijas;





//Numeros para registrar

string h;
int r=1;
bool v;
short k,l,m,n;
short g;

//Intentos

int intentos=0;
int minutos;
int segundos;
short pun;
short tuacion;
short puntuacion;

system("color 2f");
    int u = 219;
    int ti = 10;
    int inte = 0;
    int to = 5;

    //LLLL
        //Parte de abajo
        printf("\t\t%c%c%c%c%c\n",u,u,u,u,u); Sleep(ti); system("cls");

        //Un punto arriba y abajo
        printf("\t\t%c\n",u);
        printf("\t\t%c%c%c%c\n",u,u,u,u); Sleep(ti); system("cls");

        //Dos puntos arriba y abajo
        printf("\t\t%c\n",u);
        printf("\t\t%c\n",u);
        printf("\t\t%c%c%c%c\n",u,u,u,u); Sleep(ti); system("cls");

        //Tres puntos arriba y abajo
        printf("\t\t%c\n",u);
        printf("\t\t%c\n",u);
        printf("\t\t%c\n",u);
        printf("\t\t%c%c%c%c\n",u,u,u,u); Sleep(ti); system("cls");

        //Cuatro puntos arriba y abajo
        printf("\t\t%c\n",u);
        printf("\t\t%c\n",u);
        printf("\t\t%c\n",u);
        printf("\t\t%c\n",u);
        printf("\t\t%c%c%c%c\n",u,u,u,u); Sleep(ti);

        //Encaje
        for(int i = 0; i<8; i++)
        {
        system("cls");
         switch (i)
         {
          case 0: printf("\n");
          break;
          case 1: printf("\n");
                  printf("\n");
          break;
          case 2: printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 3: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 4: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 5: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 6: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 7: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
         }

         printf("\t\t%c\n",u);
         printf("\t\t%c\n",u);
         printf("\t\t%c\n",u);
         printf("\t\t%c\n",u);
         printf("\t\t%c%c%c%c\n",u,u,u,u); Sleep(ti);
        }
        printf("\a");
        Sleep(to);
        system("cls");


    //EEEE
        //Parte de abajo
        printf("\t\t     %c%c%c%c\n",u,u,u,u); Sleep(ti); system("cls");

        //Un punto arriba y abajo
        printf("\t\t     %c\n",u);
        printf("\t\t     %c%c%c%c\n",u,u,u,u); Sleep(ti); system("cls");

        //Tercera fila (palo mas pequeño)
        printf("\t\t     %c%c%c\n",u,u,u);
        printf("\t\t     %c\n",u);
        printf("\t\t     %c%c%c%c\n",u,u,u,u); Sleep(ti); system("cls");

        //Cuarta fila
        printf("\t\t     %c\n",u);
        printf("\t\t     %c%c%c\n",u,u,u);
        printf("\t\t     %c\n",u);
        printf("\t\t     %c%c%c%c\n",u,u,u,u); Sleep(ti); system("cls");

        //Parte de arriba
        printf("\t\t     %c%c%c%c\n",u,u,u,u);
        printf("\t\t     %c\n",u);
        printf("\t\t     %c%c%c\n",u,u,u);
        printf("\t\t     %c\n",u);
        printf("\t\t     %c%c%c%c\n",u,u,u,u); Sleep(ti);

        //Encaje
        for(int i = 0; i<8; i++)
        {
        system("cls");
         switch (i)
         {
          case 0: printf("\n");
          break;
          case 1: printf("\n");
                  printf("\n");
          break;
          case 2: printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 3: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 4: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 5: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 6: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 7: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
         }

        printf("\t\t     %c%c%c%c\n",u,u,u,u);
        printf("\t\t     %c\n",u);
        printf("\t\t     %c%c%c\n",u,u,u);
        printf("\t\t     %c\n",u);
        printf("\t\t     %c%c%c%c\n",u,u,u,u); Sleep(ti);
        }
        printf("\a");
        Sleep(to);
        system("cls");

    //OOOO
        //Parte de abajo
        printf("\t\t\t   %c%c \n",u,u); Sleep(ti); system("cls");

        //Bolita segunda fila
        printf("\t\t\t  %c  %c\n",u,u);
        printf("\t\t\t   %c%c \n",u,u); Sleep(ti); system("cls");

        //Bolita tercera fila
        printf("\t\t\t  %c  %c\n",u,u);
        printf("\t\t\t  %c  %c\n",u,u);
        printf("\t\t\t   %c%c \n",u,u); Sleep(ti); system("cls");

        //Bolita cuarta fila
        printf("\t\t\t  %c  %c\n",u,u);
        printf("\t\t\t  %c  %c\n",u,u);
        printf("\t\t\t  %c  %c\n",u,u);
        printf("\t\t\t   %c%c \n",u,u); Sleep(ti); system("cls");

        //Bolita quinta fila
        printf("\t\t\t   %c%c \n",u,u);
        printf("\t\t\t  %c  %c\n",u,u);
        printf("\t\t\t  %c  %c\n",u,u);
        printf("\t\t\t  %c  %c\n",u,u);
        printf("\t\t\t   %c%c \n",u,u); Sleep(ti);

       //Encaje
        for(int i = 0; i<8; i++)
        {
        system("cls");
         switch (i)
         {
          case 0: printf("\n");
          break;
          case 1: printf("\n");
                  printf("\n");
          break;
          case 2: printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 3: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 4: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 5: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 6: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 7: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
         }

        printf("\t\t\t   %c%c \n",u,u);
        printf("\t\t\t  %c  %c\n",u,u);
        printf("\t\t\t  %c  %c\n",u,u);
        printf("\t\t\t  %c  %c\n",u,u);
        printf("\t\t\t   %c%c \n",u,u); Sleep(ti);
        }
        printf("\a");
        Sleep(to);
        system("cls");


    //NNNN
        //Puntas de abajo
        printf("\t\t\t       %c   %c\n",u,u); Sleep(ti); system("cls");

        //Segunda fila
        printf("\t\t\t       %c  %c%c\n",u,u,u);
        printf("\t\t\t       %c   %c\n",u,u); Sleep(ti); system("cls");

        //Tercera fila
        printf("\t\t\t       %c %c %c\n",u,u,u);
        printf("\t\t\t       %c  %c%c\n",u,u,u);
        printf("\t\t\t       %c   %c\n",u,u); Sleep(ti); system("cls");

        //Cuarta fila
        printf("\t\t\t       %c%c  %c\n",u,u,u);
        printf("\t\t\t       %c %c %c\n",u,u,u);
        printf("\t\t\t       %c  %c%c\n",u,u,u);
        printf("\t\t\t       %c   %c\n",u,u); Sleep(ti); system("cls");

        //Quinta fila
        printf("\t\t\t       %c   %c\n",u,u);
        printf("\t\t\t       %c%c  %c\n",u,u,u);
        printf("\t\t\t       %c %c %c\n",u,u,u);
        printf("\t\t\t       %c  %c%c\n",u,u,u);
        printf("\t\t\t       %c   %c\n",u,u); Sleep(ti);

        //Encaje
        for(int i = 0; i<8; i++)
        {
        system("cls");
         switch (i)
         {
          case 0: printf("\n");
          break;
          case 1: printf("\n");
                  printf("\n");
          break;
          case 2: printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 3: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 4: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 5: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 6: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 7: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
         }

        //Quinta fila
        printf("\t\t\t       %c   %c\n",u,u);
        printf("\t\t\t       %c%c  %c\n",u,u,u);
        printf("\t\t\t       %c %c %c\n",u,u,u);
        printf("\t\t\t       %c  %c%c\n",u,u,u);
        printf("\t\t\t       %c   %c\n",u,u); Sleep(ti);
        }
        printf("\a");
        Sleep(to);
        system("cls");


    //AAAA
        //Paticas de abajo
        printf("\t\t\t\t     %c     %c",u,u); Sleep(ti); system("cls");

        //Segunda fila con cositos
        printf("\t\t\t\t     %c %c%c%c %c",u,u);
        printf("\t\t\t\t     %c     %c",u,u); Sleep(ti); system("cls");

        //Tercera fila
        printf("\t\t\t\t      %c   %c",u,u);
        printf("\t\t\t\t     %c %c%c%c %c",u,u,u,u,u);
        printf("\t\t\t\t     %c     %c",u,u); Sleep(ti); system("cls");

        //Cuarta fila
        printf("\t\t\t\t      %c %c",u,u);
        printf("\t\t\t\t      %c   %c",u,u);
        printf("\t\t\t\t     %c %c%c%c %c",u,u,u,u,u);
        printf("\t\t\t\t     %c     %c",u,u); Sleep(ti); system("cls");

        //Quinta fila (punta)
        printf("\t\t\t\t        %c\n",u);
        printf("\t\t\t\t       %c %c\n",u,u);
        printf("\t\t\t\t      %c   %c\n",u,u);
        printf("\t\t\t\t     %c %c%c%c %c\n",u,u,u,u,u);
        printf("\t\t\t\t     %c     %c\n",u,u); Sleep(ti);

        //Encaje
        for(int i = 0; i<8; i++)
        {
        system("cls");
         switch (i)
         {
          case 0: printf("\n");
          break;
          case 1: printf("\n");
                  printf("\n");
          break;
          case 2: printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 3: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 4: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 5: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 6: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 7: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
         }

        printf("\t\t\t\t        %c\n",u);
        printf("\t\t\t\t       %c %c\n",u,u);
        printf("\t\t\t\t      %c   %c\n",u,u);
        printf("\t\t\t\t     %c %c%c%c %c\n",u,u,u,u,u);
        printf("\t\t\t\t     %c     %c\n",u,u); Sleep(ti);
        }
        printf("\a");
        Sleep(to);
        system("cls");


    //RRRR
        //Paticas de abajo
        printf("\t\t\t\t\t         %c %c\n",u,u); Sleep(ti); system("cls");

        //Segunda fila
        printf("\t\t\t\t\t         %c%c \n",u,u);
        printf("\t\t\t\t\t         %c %c\n",u,u); Sleep(ti); system("cls");

        //Tercera fila (semiparabola)
        printf("\t\t\t\t\t         %c%c%c\n",u,u,u);
        printf("\t\t\t\t\t         %c%c \n",u,u);
        printf("\t\t\t\t\t         %c %c\n",u,u); Sleep(ti); system("cls");

        //Cuarta fila
        printf("\t\t\t\t\t         %c  %c\n",u,u);
        printf("\t\t\t\t\t         %c%c%c\n",u,u,u);
        printf("\t\t\t\t\t         %c%c \n",u,u);
        printf("\t\t\t\t\t         %c %c\n",u,u); Sleep(ti); system("cls");

        //Quinta fila (semiparabola)
        printf("\t\t\t\t\t         %c%c%c\n",u,u,u);
        printf("\t\t\t\t\t         %c  %c\n",u,u);
        printf("\t\t\t\t\t         %c%c%c\n",u,u,u);
        printf("\t\t\t\t\t         %c%c \n",u,u);
        printf("\t\t\t\t\t         %c %c\n",u,u); Sleep(ti);

        //Encaje
        for(int i = 0; i<8; i++)
        {
        system("cls");
         switch (i)
         {
          case 0: printf("\n");
          break;
          case 1: printf("\n");
                  printf("\n");
          break;
          case 2: printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 3: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 4: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 5: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 6: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 7: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
         }

        printf("\t\t\t\t\t         %c%c%c\n",u,u,u);
        printf("\t\t\t\t\t         %c  %c\n",u,u);
        printf("\t\t\t\t\t         %c%c%c\n",u,u,u);
        printf("\t\t\t\t\t         %c %c \n",u,u);
        printf("\t\t\t\t\t         %c  %c\n",u,u); Sleep(ti);
        }
        printf("\a");
        Sleep(to);
        system("cls");


    //DDDD
        //Parte de abajo
        printf("\t\t\t\t\t\t      %c%c%c\n",u,u,u); Sleep(ti); system("cls");

        //Segunda fila (curvita)
        printf("\t\t\t\t\t\t      %c  %c\n",u,u);
        printf("\t\t\t\t\t\t      %c%c%c\n",u,u,u); Sleep(ti); system("cls");

        //Tercera fila (punto)
        printf("\t\t\t\t\t\t      %c   %c\n",u,u);
        printf("\t\t\t\t\t\t      %c  %c\n",u,u);
        printf("\t\t\t\t\t\t      %c%c%c\n",u,u,u); Sleep(ti); system("cls");

        //Cuarta fila (curvita)
        printf("\t\t\t\t\t\t      %c  %c\n",u,u);
        printf("\t\t\t\t\t\t      %c   %c\n",u,u);
        printf("\t\t\t\t\t\t      %c  %c\n",u,u);
        printf("\t\t\t\t\t\t      %c%c%c\n",u,u,u); Sleep(ti); system("cls");

        //Quinta fila
        printf("\t\t\t\t\t\t      %c%c%c\n",u,u,u);
        printf("\t\t\t\t\t\t      %c  %c\n",u,u);
        printf("\t\t\t\t\t\t      %c   %c\n",u,u);
        printf("\t\t\t\t\t\t      %c  %c\n",u,u);
        printf("\t\t\t\t\t\t      %c%c%C\n",u,u,u); Sleep(ti);

        //Encaje
        for(int i = 0; i<8; i++)
        {
        system("cls");
         switch (i)
         {
          case 0: printf("\n");
          break;
          case 1: printf("\n");
                  printf("\n");
          break;
          case 2: printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 3: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 4: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 5: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 6: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 7: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
         }

        printf("\t\t\t\t\t\t      %c%c%c\n",u,u,u);
        printf("\t\t\t\t\t\t      %c  %c\n",u,u);
        printf("\t\t\t\t\t\t      %c   %c\n",u,u);
        printf("\t\t\t\t\t\t      %c  %c\n",u,u);
        printf("\t\t\t\t\t\t      %c%c%c\n",u,u,u); Sleep(ti);
        }
        printf("\a");
        Sleep(to);
        system("cls");


//OOOO
        //Parte de abajo
        printf("\t\t\t\t\t\t          %c%c \n",u,u); Sleep(ti); system("cls");

        //Bolita segunda fila
        printf("\t\t\t\t\t\t         %c  %c\n",u,u);
        printf("\t\t\t\t\t\t          %c%c \n",u,u); Sleep(ti); system("cls");

        //Bolita tercera fila
        printf("\t\t\t\t\t\t         %c  %c\n",u,u);
        printf("\t\t\t\t\t\t         %c  %c\n",u,u);
        printf("\t\t\t\t\t\t          %c%c \n",u,u); Sleep(ti); system("cls");

        //Bolita cuarta fila
        printf("\t\t\t\t\t\t         %c  %c\n",u,u);
        printf("\t\t\t\t\t\t         %c  %c\n",u,u);
        printf("\t\t\t\t\t\t         %c  %c\n",u,u);
        printf("\t\t\t\t\t\t          %c%c \n",u,u); Sleep(ti); system("cls");

        //Bolita quinta fila
        printf("\t\t\t\t\t\t          %c%c \n",u,u);
        printf("\t\t\t\t\t\t         %c  %c\n",u,u);
        printf("\t\t\t\t\t\t         %c  %c\n",u,u);
        printf("\t\t\t\t\t\t         %c  %c\n",u,u);
        printf("\t\t\t\t\t\t          %c%c \n",u,u); Sleep(ti);

       //Encaje
        for(int i = 0; i<8; i++)
        {
        system("cls");
         switch (i)
         {
          case 0: printf("\n");
          break;
          case 1: printf("\n");
                  printf("\n");
          break;
          case 2: printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 3: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 4: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 5: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 6: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
          case 7: printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          printf("\n");
          break;
         }

        printf("\t\t\t\t\t\t          %c%c \n",u,u);
        printf("\t\t\t\t\t\t         %c  %c\n",u,u);
        printf("\t\t\t\t\t\t         %c  %c\n",u,u);
        printf("\t\t\t\t\t\t         %c  %c\n",u,u);
        printf("\t\t\t\t\t\t          %c%c \n",u,u); Sleep(ti);
        }
        printf("\a");
        Sleep(to);
        system("cls");

printf("\n\n\n\n\n\n\n\n");
printf("\t\t%c    %c%c%c%c  %c%c  %c   %c    %c     %c%c%c   %c%c%c    %c%c\n",u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u);
printf("\t\t%c    %c    %c  %c %c%c  %c   %c %c    %c  %c  %c  %c  %c  %c\n",u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u);
printf("\t\t%c    %c%c%c  %c  %c %c %c %c  %c   %c   %c%c%c   %c   %c %c  %c\n",u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u);
printf("\t\t%c    %c    %c  %c %c  %c%c %c %c%c%c %c  %c %c   %c  %c  %c  %c\n",u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u);
printf("\t\t%c%c%c%c %c%c%c%c  %c%c  %c   %c %c     %c  %c  %c  %c%c%c    %c%c\n",u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u,u);
cout<<"\t\t\t\t\t\tPRODUCCCIONES"<<endl;
Sleep(5000);

system("cls");
cout<<"\n\n\n\n\n\n\n\t\t\t     PRESENTA..."<<endl;

Sleep(3000);

system("cls");
system("color 3f");
Sleep(1000); cout<<"\n\n\n\n\n\n\n\t\t\t\t PICAS"; Sleep(300);  cout<<" y"; Sleep(200); cout<<" FIJAS"; Sleep(3000);
system("cls");



 inicio:

short w =rand()%10;
short x =rand()%10;
short y =rand()%10;
short z =rand()%10;

while(w==x || w==y || w==z || x==y || x==z ||y==z)
{
           w=rand()%10;
           x=rand()%10;
           y=rand()%10;
           z=rand()%10;
}
sin_cursor();
    int cx = 50, cy = 5;

    bool seleccion = false;
       printf("\n\n\n\t\t\t\t    Men%c\n\n",163);
//printf("Escoja una opci%cn\n", 162);
cout<<"\t\t\t1----Instrucciones *\n";
cout<<"\t\t\t2----Comenzar el juego\n";
cout<<"\t\t\t3----Salir del juego\n";
     while(!seleccion){


//cin>>g;

posicion(cx, cy); printf("%c",174);
          if(kbhit()){
            char tecla = getch();
            posicion(cx, cy); printf(" ");
            switch (tecla){
             case Derecha: cx++;
             break;

             case Izquierda: cx--;
             break;

             case Arriba: cy--;
             break;

             case Abajo: cy++;
             break;



             case Enter: if((cx == 50) && (cy==5))      {system("cls");      goto instrucciones;}
                         else if((cx == 50) && (cy==6)) {system("cls");      goto comienzo;     }
                         else                           {system("cls");      goto fin;          }
            }
            if(cx==51) cx=50;
            else if(cx==49) cx=50;
            if(cy==8)  cy=7;
            else if(cy==4)  cy=5;
            posicion(cx, cy); printf("%c",174);
            Sleep(10);
          }
/*
switch(g)
{
case 1: seleccion = true; goto instrucciones;
break;

case 2: seleccion = true; system("cls"); goto comienzo;
break;

case 3: cout<<"\n\n\n\n\n\t\t\tVuelve pronto!!!"; goto fin;

default: cout<<"Solo puede ingresar 1 o 2!!"<<endl; goto fin;
break;

}*/




}



          instrucciones:
system("cls");
cout<<"\n\n\n\t\t\t       INSTRUCCIONES\n\n"<<endl;
printf("1. Al abrir el programa lo primero que te aparecer%c es es un men%c donde debes \nescoger una opci%cn escoga 1 o 2, POR FAVOR NO ESCOGA OTRA OPCI%cN, si lo hace se acabar%c el programa.\n\n",160, 163,162,224,160);
printf("2. Al empezar el juego le pediremos que ingrese un n%cmero, este debe ser de 4 \ncifras, es decir, entre 0000 y 9999, pero RECUERDE que ningun d%cgito se puede \nrepetir: 1000 no es un n%cmero v%clido porque se repite el 0, tampoco 2110 \nporque se repite el 1; 123 y 12345 tampoco porque ambos no son de 3 cifras; un  ejemplo v%clido ser%ca 1234.   -EN CASO DE DIGITAR EL NUMERO MAL SER%c ENVIADO UN \nMENSAJE DE ERROR y deber%c a vovler a digitarlo.\n\n\n", 163, 161, 163, 160, 160, 161, 143, 160);
printf("3. El juego tiene sistema de puntuaci%cn particular, cuando encuentre el n%cmero\nle aparecer%c un mensaje donde le dir%c: la cantidad de intentos y el tiempo\nque se demor%c en hallarlo y deacuerdo a estos dos datos el juego le dir%c \nsu puntaje.\n\n", 162, 163, 160, 160, 162, 160);
printf("  3.1 La puntuaci%cn se saca con la sumatoria de: la puntuaci%cn parcial de los \n  intentos + la puntuaci%cn parcial de los segundos.\n\n", 162, 162, 162);
printf("     3.1.1 La puntuaci%cn parcial de los intentos es: 31-'numero_intentos', ya \n     que el n%cmero de intentos es m%cnimo 1, el puntaje m%cximo de este es 30 \n\n",162, 163, 161, 160);
printf("     3.1.2 La puntuaci%cn parcial de los segundos es: (710-'segundos')/10, ya \n     que los segundos se estiman en no menos de 10 y no mas de 720(12 min), el\n     puntaje m%cximo de este es 70, sinembargo si se demora mas de 12 minutos\n     el resultado ser%c negativo e influira es su puntaje final. \n\n\n",162, 160, 160);
printf("  3.2 El puntaje perfecto ser%ca 100, aunque es casi imposible\n\n.", 161);
printf("  3.3 PARAGRAFO los segundos no empiezan a contar hasta que el programa te \n  pregunta el numero\n\n\n");
printf("4. Listo solo te queda jugar!!!\n\n");

cout<<"\t        "; system("pause");
system("cls");

clock_t tie;



          comienzo:

ti = clock();
//DO....................--------------------.................----------------................-----------------

do {

//Registro


short i1 = 0;
short i = 0;



    cout<<"\t\tREGISTRA EL NUMERO"<<endl;
    cin>>h;

    if(h=="no_le_digas_a_nadie")
        {
                         cout<<"\t\t"<<"la respuesta es: "<<w<<x<<y<<z<<endl;
        }
        else
        {
    goto listo;
}
goto listo;

                     num:

    cout<<"\aHizo algo mal"<<endl;
    cin>>h;



                    listo:

    short large=h.size();




    while(i<large)
{
    if(!isdigit(h[i]))
    {
     i=0;
     goto num;

    }
    i++;
}

short num = atoi(h.c_str());


        k=num/1000;
        l=(num-(k*1000))/100;
        m=(num-((k*1000)+(l*100)))/10;
        n=num-((k*1000)+(l*100)+(m*10));


  if((large==4) && (k!=l && k!=m && k!=n && l!=m && l!=n && m!=n))
    {
    v=true;
    }
    else
    {
    v=false;
    }



   //VALIDACION NUMEROS
//   cout<<large<<endl;
//   cout<<k<<l<<m<<n<<endl;
       while(v==false)
     {
         //system("cls");
         i=0;
         goto num;


      }




 //******************************************IGUALDAD DE PICAS Y FIFAS
//-------------------------------- K--------------------------------------------
if (k==w)
{
 F1=1;
 P2k=0;
 P3k=0;
 P4k=0;
}
else
{

   if(k==x)
   {
    P2k=1;
    P3k=0;
    P4k=0;
   }
     else
     {
      P2k=0;
     }

   if(k==y && P2k==0)
   {
    P3k=1;
    P4k=0;
   }
     else
     {
      P3k=0;
     }

   if(k==z && P2k==0 && P3k==0)
   {
    P4k=1;
   }
     else
     {
      P4k=0;
     }
F1 = 0;
}


//------------------------------------------- L-------------------------------------------------------------

if (l==x)
{
 F2=1;
 P1l=0;
 P3l=0;
 P4l=0;
}
else
{
   if(l==w)
   {
    P1l=1;
    P3l,P4l=0;
   }
     else
     {
      P1l=0;
     }

   if(l==y && P1l==0)
   {
    P3l=1;
    P4l=0;
   }
     else
     {
      P3l=0;
     }

   if(l==z && P1l==0 && P3l==0)
   {
    P4l=1;
   }
     else
     {
      P4l=0;
     }

F2 = 0;
}

//--------------------------------------------- M -----------------------------------------------------------------

if (m==y)
{
 F3=1;
 P1m=0;
 P2m=0;
 P4m=0;
}
else
{

   if(m==w)
   {
    P1m=1;
    P2m,P4m=0;
   }
     else
     {
      P1m=0;
     }

   if(m==x && P1m==0)
   {
    P2m=1;
    P4m=0;
   }
     else
     {
      P2m=0;
     }

   if(m==z && P1m==0 && P2m==0)
   {
    P4m=1;
   }
     else
     {
      P4m=0;
     }

F3 = 0;
}

//-------------------------------------------------------------------- N ----------------------------------------------------------------------
if (n==z)
{
 F4=1;
 P1n=0;
 P2n=0;
 P3n=0;
}
else
{
   if(n==w)
   {
    P1n=1;
    P2n,P3n=0;
   }
     else
     {
      P1n=0;
     }

   if(n==x && P1n==0)
   {
    P2n=1;
    P3n=0;
   }
     else
     {
      P2n=0;
     }

   if(n==y && P1n==0 && P2n==0)
   {
    P3n=1;
   }
     else
     {
      P3n=0;
     }

F4 = 0;
}



P1=P1l+P1m+P1n;
P2=P2k+P2m+P2n;
P3=P3k+P3l+P3n;
P4=P4k+P4l+P4m;

Picas = P1+P2+P3+P4;

Fijas = F1+F2+F3+F4;

/*

cout<<"---------Picas---------"<<endl;
cout<<P1<<endl;
cout<<P2<<endl;
cout<<P3<<endl;
cout<<P4<<endl;
cout<<"--------Fijas----------"<<endl;
cout<<F1<<endl;
cout<<F2<<endl;
cout<<F3<<endl;
cout<<F4<<endl;

cout<<"------------------"<<endl;*/
cout<<"\tpicas: "<<Picas<<"\t"<<"fijas: "<<Fijas<<endl;
intentos++;



}while(Fijas<4);

system("cls");

ti = clock()-ti;

minutos = (ti/CLOCKS_PER_SEC)/60;
segundos = (ti/CLOCKS_PER_SEC)%60;

pun = 31-intentos;
tuacion = (710-(ti/CLOCKS_PER_SEC))/10;

puntuacion = pun + tuacion;



cout<<"\n\n\n\n\n\n\n\n\n\t\t\FELICITACIONES lo ha hecho en "<<intentos<<" intentos!!!!!!"<<endl;


cout<<"\nDurante: "<< minutos<<"minutos "<<segundos<<"segundos"<<endl;

cout<<"\n\t Su puntaje fue: "<<puntuacion<<"\n"<<endl;

cout<<"\t"; system("pause");
system("cls");

goto inicio;




       fin:
     system("PAUSE");



    return EXIT_SUCCESS;
}
