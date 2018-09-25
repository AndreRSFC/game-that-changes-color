#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define p1cor1() system("color 98")
#define p1cor2() system("color 70")
#define p1cor3() system("color 35")
#define p2cor1() system("color 4e")
#define p2cor2() system("color 08")
#define p2cor3() system("color 1d")
#define espcor() system("color 0A")
#define padraoc() system("color 0f")
using namespace std;
int jogador ,i ,j, escolha;
int tabuleiro[3][3] = {{0}};


int jogoAcabou(){
  int i,j, contador = 0;

  // Verifica se há algum alinhamento no tabuleiro
  // Alinhamento em uma linha
  for (i = 0; i < 3; i++){
    if( (tabuleiro[i][0] == 1 || tabuleiro[i][0] == 2) &&
        (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2]) ) {
      printf("\nJogador %d venceu.\n", tabuleiro[i][0]);
      return(1);
    }
  }

  // Alinhamento em uma coluna
  for (i = 0; i < 3; i++){
    if( (tabuleiro[0][i] == 1 || tabuleiro[0][i] == 2) &&
        (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i]) ){
      printf("\nJogador %d venceu.\n", tabuleiro[0][i]);
      return(1);
    }
  }

  // Alinhamento nas diagonais
  if( ( (tabuleiro[0][0] == 1 || tabuleiro[0][0] == 2) &&
        (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2]) ) ||
      ( (tabuleiro[2][0] == 1 || tabuleiro[2][0] == 2) &&
        (tabuleiro[2][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[0][2]) ) ){
    printf("\nJogador %d venceu.\n", tabuleiro[1][1]);
    return(1);
  }

  // Verifica se o tabuleiro está cheio (empate)
  for(i = 0; i < 3  && contador == 0; i++){
    for(j = 0; j < 3 && contador == 0; j++){
      if(tabuleiro[i][j] == 0){
        contador++;
      }
    }
  }
  if(contador == 0){
    printf("\nEmpate.\n");
    return(1);
  }

  return(0);
}


void imprimeTabuleiro(){
  int i,j;
  printf("\nTabuleiro:\n");
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      if(tabuleiro[i][j] == 0){
        printf("-");
      }
      else{
        printf("%d",tabuleiro[i][j]);
      }
      if(j == 2){
        printf("\n");
      }
      else{
        printf("|");
      }
    }
  }
}

void corescolhida(int cor_1){
  if(cor_1==1){
    p1cor1();
}
  else if(cor_1==2){
    p1cor2();
}
  else if(cor_1==3){
    p1cor3();
}
  else if(cor_1==4){
    espcor();
}
  else{
    padraoc();
}
}



void corescolhida2(int cor_2){
  if(cor_2==1){
    p2cor1();
}
  else if(cor_2==2){
    p2cor2();
}
  else if(cor_2==3){
    p2cor3();
}
  else if(cor_2==4){
    espcor();
}
  else{
    padraoc();
}
}

void checaescolha(){
  if(escolha==1){
    i=0 ; j=0 ;
  }
  else if(escolha==2){
    i=0 ; j=1 ;
  }
  else if(escolha==3){
    i=0 ; j=2 ;
  }
  else if(escolha==4){
    i=1 ; j=0 ;
  }
  else if(escolha==5){
    i=1 ; j=1 ;

  }
  else if(escolha==6){
    i=1 ; j=2 ;
  }
  else if(escolha==7){
    i=2 ; j=0 ;
  }
  else if(escolha==8){
    i=2 ; j=1 ;
  }
  else if(escolha==9){
    i=2 ; j=2 ;
  }
}

void player1(){
  cout <<"\tDigite a jogada jogador (1)\r\n";
  cout <<"\tEscolha: "; cin >> escolha; cout << "\r\n";
}
void player2(){
  cout <<"\tDigite a jogada jogador (2)\r\n";
  cout <<"\tEscolha: "; cin >> escolha; cout << "\r\n";
}

main(){
    system("color 0f");
    int cor_1, cor_2, Ca1, Ca2, xaina;
    char pgt;
    cout << "\n\t      -----JOGO DA VELHA PLAYER VS PLAYER-----\r\n";
    cout << "\t-------------------------------------------------------\r\n";
    cout << "\t|Deseja escolher a cor dos jogadores? Sim(S) ou Nao(N)|\r\n";
    cout << "\t-------------------------------------------------------\r\n";
    cout << "\tResposta: "; cin >> pgt;

    if(pgt=='S' || pgt=='s'){
        cout << "\tCombinacao de cores player 1\r\n";
        cout << "\t1-Azul Claro e Cinza\n\t2-Branco e Preto\n\t3-Verde Agua e Roxo \n\t4-Cor Especial\n\tOutra numero sera igual a cor padrao\n";
        cout << "\tEscolha: "; cin >> cor_1;
        if(cor_1==1){
          cout << "\n\tCombinacao Azul Claro e Cinza Escolhida\n";
        }
        else if(cor_1==2){
          cout << "\n\tCombinacao Branco e Preto Escolhida\n";
        }
        else if(cor_1==3){
          cout << "\n\tCombinacao Verde Agua e Roxo\n";
        }
        else if(cor_1==4){
          cout << "\n\tCombinacao Especial Escolhida\n";
        }
        else{
          cout << "\n\tCombinacao Nao Existente. Padrao Definido\n";
        }

        cout << "\n\n\n\tCombinacao de cores player 2\r\n";
        cout << "\t1-VermeLho e Amarelo Claro\n\t2-Preto e Cinza\n\t3-Lilas e Azul\n\t4-Cor Especial\n\tOutra numero sera igual a cor padrao\n";
        cout << "\tEscolha: "; cin >> cor_2;
        if(cor_2==1){
          cout << "\n\tCombinacao VermeLho e Amarelo Claro\n";
        }
        else if(cor_2==2){
          cout << "\n\tCombinacao Preto e Cinza\n";
        }
        else if(cor_2==3){
          cout << "\n\tCombinacao Verde Lilas e Azul\n";
        }
        else if(cor_2==4){
          cout << "\n\tCombinacao Especial Escolhida\n";
        }
        else{
          cout << "\n\tCombinacao Nao Existente. Padrao Definido\n";
        }

    }
    system("pause");
    system("cls");
    cout << "\n\t      Inicio Da Jogada\r\n";
    cout << "\tDigite o Jogador [1] ou [2]\r\n";
    cout << "\n\t Jogador: "; cin >> jogador;
    imprimeTabuleiro();
    cout << "\n\n\n\n";
    while(jogoAcabou()==0){

    if(jogador==1){
      xaina = 1;
      while(xaina==1){
      corescolhida(cor_1);
      player1();
      checaescolha();
      if(tabuleiro[i][j]==0){
        xaina=0;
        tabuleiro[i][j]=jogador;
      }
      else{
        cout << "\n\tPosicao ja escolhida redigite uma nao escolhda\r\n\n";
      }
      }
      system("cls");
      imprimeTabuleiro();
      jogoAcabou();
      jogador=2;
    }

    else if(jogador==2){
      xaina = 1;
      while(xaina==1){
      corescolhida2(cor_2);
      player2();
      checaescolha();
      if(tabuleiro[i][j]==0){
        xaina=0;
        tabuleiro[i][j]=jogador;
      }
      else{
        cout << "\n\tPosicao ja escolhida redigite uma nao escolhda\r\n\n";
      }
      }
      system("cls");
      imprimeTabuleiro();
      jogoAcabou();
      jogador=1;
    }
    else{
      system("cls");
      cout <<"\t\nError 404 (NOT FOUND)";
      main();
    }
  }
  system("pause");
}


