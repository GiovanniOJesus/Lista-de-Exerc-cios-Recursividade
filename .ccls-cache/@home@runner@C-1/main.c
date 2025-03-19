#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
int num = 0, num2 = 0, opc, f = 0;
int pagamento = 0;
char user[] = "user";
char senha[] = "user123";
char opcs[] = "s";
char opcn[] = "n";
char pagc[] = "c";
char pagd[] = "d";
char pagp[] = "p";
char pagb[] = "b";
char fim[] = "sfadsarnfannfaafhje";
char fim2[100];
char user1[40];
char opc2[40];
char pag[40];
char senha1[40];
char produto[40];
char produto2[40];



while(num == 0){
  printf("Login \n\n\n");

    printf("\nDigite seu usuário: ");
    scanf("%s", user1);

    printf("\nDigite sua senha: ");
    scanf("%8s", senha1);

    int Vuser = strcmp(user, user1);
    int Vsenha = strcmp(senha, senha1);

    if(Vuser == 0 && Vsenha == 0){
      printf("\n\n\nLogando...\n\n");
      num = 1;
    }else{
      printf("\n\nUsuario ou senha incorretos!! \n\n");
    }
  }

  while(num == 1){


        while(num2 == 1){
          printf("\n\nProdutos: \n\n");
              printf("1 - Arroz\n");
              printf("2 - Feijão\n");
              printf("3 - Macarrão\n");
              printf("Escolha um produto:");
              scanf("%d", &opc);

          if(opc == 1){
            char arroz[] = "arroz";
            strcpy(produto, arroz);
            f = 1, num2 = 0;
          }
          else if (opc == 2){
            char feijao[] = "feijão";
            strcpy(produto, feijao);
            f = 1, num2 = 0;
          }
          else if (opc == 3){
            char macarrao[] = "macarrão";
            strcpy(produto, macarrao);
            f = 1, num2 = 0;
          }
          else{
            printf("\n\nopção invalida\n"); 
          }
        }
        while(num2 == 2){
          printf("\n\nProdutos: \n\n");
              printf("1 - Frango\n");
              printf("2 - Contra-filé\n");
              printf("3 - Salsicha\n");
              printf("Escolha um produto:");
              scanf("%d", &opc);

          if(opc == 1){
            char frango[] = "Frango";
            strcpy(produto, frango);
            f = 1, num2 = 0;
          }
          else if (opc == 2){
            char contra[] = "Contra-filé";
            strcpy(produto, contra);
            f = 1, num2 = 0;
          }
          else if (opc == 3){
            char salsicha[] = "Salsicha";
            strcpy(produto, salsicha);
            f = 1, num2 = 0;
          }
          else{
            printf("\n\nopção invalida\n"); 
          }
        }
        while(num2 == 3){
          printf("\n\nProdutos: \n\n");
              printf("1 - Sabonete\n");
              printf("2 - Shampoo\n");
              printf("3 - Desodorante\n");
              printf("Escolha um produto:");
              scanf("%d", &opc);

          if(opc == 1){
            char sabonete[] = "Sabonete";
            strcpy(produto, sabonete);
            f = 1, num2 = 0;
          }
          else if (opc == 2){
            char shampoo[] = "Shampoo";
            strcpy(produto, shampoo);
            f = 1, num2 = 0;
          }
          else if (opc == 3){
            char desodorante[] = "Desodorante";
            strcpy(produto, desodorante);
            f = 1, num2 = 0;
          }
          else{
            printf("\n\nopção invalida\n"); 
          }
        }
        while(num2 == 4){
          printf("\n\nProdutos: \n\n");
              printf("1 - Refrigerante\n");
              printf("2 - Whisky\n");
              printf("3 - Suco\n");
              printf("Escolha um produto:");
              scanf("%d", &opc);

          if(opc == 1){
            char refrigerante[] = "Refrigerante";
            strcpy(produto, refrigerante);
            f = 1, num2 = 0;
          }
          else if (opc == 2){
            char whisky[] = "Whisky";
            strcpy(produto, whisky);
            f = 1, num2 = 0;
          }
          else if (opc == 3){
            char suco[] = "Suco";
            strcpy(produto, suco);
            f = 1, num2 = 0;
          }
          else{
            printf("\n\nopção invalida\n"); 
          }
        }
        if(f == 1){
          num = 2;
        }else{
          printf("\n\n seções: \n\n");
              printf("1 - Alimentos\n");
              printf("2 - açougue\n");
              printf("3 - Higiene\n");
              printf("4 - Bebidas\n");
              printf("Escolha a seção:");
              scanf("%d", &opc);

          if(opc == 1){
            num2 = 1;
          }
          else if (opc == 2){
            num2 = 2;
          }
          else if (opc == 3){
            num2 = 3;
          }
          else if (opc == 4){
            num2 = 4;
          }
          else{
            printf("\n\nopção invalida\n"); 
          }
        }


  }

  while(num == 2){

    printf("\n\nDeseja pegar mais um produto (s/n):");
    scanf("%s", opc2);

    int Vopc = strcmp(opc2, opcs);
    int Vopc2 = strcmp(opc2, opcn);
    if(Vopc == 0){
      printf("Qual produto:");
      scanf("%s", produto2);
       printf("\n\nObrigado pela compra!!\n\n");
      num = 3; 
      pagamento = 2; 
    }
    else if(Vopc2 == 0){
      printf("\n\nObrigado pela compra!!\n\n");
      num = 3;
      pagamento = 1; 
    }else{
      printf("\n\nopção invalida\n"); 
    }
  }

    while(num == 3){
      while(pagamento == 1){
        printf("Forma de pagamento: \n\n");
        printf("C - Cartão de crédito\n");  
        printf("D - Cartão de débito\n"); 
        printf("P - Pix\n");
        printf("B - Boleto\n");
        printf("Escolha a forma de pagamento:");
        scanf("%s", pag);

        int Vpagc = strcmp(pag, pagc);
        int Vpagd = strcmp(pag, pagd);
        int Vpagp = strcmp(pag, pagp);
        int Vpagb = strcmp(pag, pagb);

        if(Vpagc == 0){
          printf("\n\nVocé pegou : %s\n", produto);
          printf("Vocé escolheu pagar com cartão de crédito\n");
          printf("\n\nPagamento realizado com sucesso!!\n\n");


            num = 4;
          pagamento = 0;
        }
        else if(Vpagd == 0){
          printf("\n\nVocé pegou : %s\n", produto);
          printf("Vocé escolheu pagar com cartão de débito\n");  
          printf("\n\nPagamento realizado com sucesso!!\n\n");


            num = 4;
          pagamento = 0;
        }
        else if(Vpagp == 0){
          printf("\n\nVocé pegou : %s\n", produto);
          printf("Vocé escolheu pagar com pix\n");
          printf("\n\nPagamento realizado com sucesso!!\n\n");


            num = 4;
          pagamento = 0;
        }
        else if(Vpagb == 0){
          printf("\n\nVocé pegou : %s\n", produto);
          printf("Vocé escolheu pagar com boleto\n");
          printf("\n\nPagamento realizado com sucesso!!\n\n");


            num = 4;
          pagamento = 0;
        }else{
          printf("\n\nopção invalida\n"); 
        }
      }
      while(pagamento == 2){
        printf("\n\nForma de pagamento: \n\n");
        printf("C - Cartão de crédito\n");  
        printf("D - Cartão de débito\n"); 
        printf("P - Pix\n");
        printf("B - Boleto\n");
        printf("Escolha a forma de pagamento:");
        scanf("%s", pag);

        int Vpagc = strcmp(pag, pagc);
        int Vpagd = strcmp(pag, pagd);
        int Vpagp = strcmp(pag, pagp);
        int Vpagb = strcmp(pag, pagb);

        if(Vpagc == 0){
          printf("\n\nVocé pegou : %s\n", produto);
          printf("produto adicional: %s\n", produto2);
          printf("Vocé escolheu pagar com cartão de crédito\n");
          printf("\n\nPagamento realizado com sucesso!!\n\n");


            num = 4;
          pagamento = 0;
        }
        else if(Vpagd == 0){
          printf("\n\nVocé pegou : %s\n", produto);
          printf("produto adicional: %s\n", produto2);
          printf("Vocé escolheu pagar com cartão de débito\n");  
          printf("\n\nPagamento realizado com sucesso!!\n\n");


            num = 4;
          pagamento = 0;
        }
        else if(Vpagp == 0){
          printf("\n\nVocé pegou : %s\n", produto);
          printf("produto adicional: %s\n", produto2); 
          printf("Vocé escolheu pagar com pix\n");
          printf("\n\nPagamento realizado com sucesso!!\n\n");


            num = 4;
          pagamento = 0;
        }
        else if(Vpagb == 0){
          printf("\n\nVocé pegou : %s\n", produto);
          printf("produto adicional: %s\n", produto2);
          printf("Vocé escolheu pagar com boleto\n");
          printf("\n\nPagamento realizado com sucesso!!\n\n");

            num = 4;
          pagamento = 0;
        }else{
          printf("\n\nopção invalida\n"); 
        }
      }
    }


}