#include<stdio.h> // padrao entrada e saida de dados
#include<stdlib.h> //possui funções envolvendo alocação de memória, controle de processos, conversões e outras
#include<string.h> //fornece funções= manipulação de cadeias de caracteres e regiões de memória.
#include<conio.h> // se precisar usar break //getch > lê um caractere, mas não o mostra na tela.
#include<windows.h>


int main(){

           /// delarando variaveis do sistema
         int opcaoPrincipal, opcaoAlterar, opcaoDesejaSairDoSistema, opcaoExcluir, i, quantidadeCadastros;

         //// declarando variaveis para senha
        char c, login[20], senha[20];
        int a=10, b=0, verifica_senha=0, quantidade=0, option=1;


      struct dados {
            char nome[100], nomeDaRua[100], bairro[100], cidade[100], estado[100], email[100], CPF[100], telefone[100],
            numeroDaRua[100], CEP[100], dataDeNascimento[100], dataDoDiagnostico[100], comorbidade[100];
     }

      CA[600];

          /// parte senha
        while(verifica_senha==0){
            printf("\n\t\tINGRIDCS\n");
             printf("\n\t  Sistema de Cadastro\n\n");
             printf("\n\t  Login: ");
            gets(login);
            printf("\n\t  Senha: ");
        while((c=getch())!=13){ //13 é o valor de ENTER
            senha[b]=c;
            b++;
            printf("*");  //senha imprimindo o * Anterisco
            }
            senha[b]='\0';
            b=0;
            system("cls");

           a= strcmp(senha,"12345"); // senha para entrar no sistema, pode ser alterada
           if(a==0){printf("\t  SENHA CORRETA");
           system("color 0a");
           verifica_senha=1;Beep(1500,2000);
           } else{ printf("\t  SENHA INCORRETA\n");
           system("color 0c");
           Beep(1200,200);}
           printf("\n");
     }


        /////// Parte principal

             //dando cor ao sistema
            while(opcaoPrincipal!=6){
            while(opcaoDesejaSairDoSistema!=1){
                //system("color F2");




                printf("\n\nBem vindo(a) %s\n", &login);

	    printf("\n   #----------------- AREA DE PACIENTES  ------------------# ");
	    printf("\n   |                                                       | ");
        printf("\n   |                                                       | ");
        printf("\n   |                    MENU PRINCIPAL                     | ");
        printf("\n   |                                                       | ");
        printf("\n   |           1 - Cadastrar                               | ");
        printf("\n   |           2 - Exibir                                  | ");
        printf("\n   |           3 - Alterar                                 | ");
        printf("\n   |           4 - Excluir                                 | ");
        printf("\n   |           5 - Sair                                    | ");
        printf("\n   |                                                       | ");
        printf("\n   |                                                       | ");
        printf("\n   #-------------------------------------------------------# ");
	    printf("\n\n\tDigite a sua opcao: ");
	    scanf("%d", &opcaoPrincipal);

                system("cls");



	     ///// OPÇOES DO MENU


	    switch(opcaoPrincipal){
           /// CASE 1 - SE OPTAR POR CADASTRO
	     case 1:

             printf("Quantos cadastros de pacientes voce deseja realizar?\n");;
             scanf("%d", &quantidadeCadastros);
             system("cls");


            for(i=1;i<=quantidadeCadastros;i++){
            system("cls");

              printf("\nDigite o nome do paciente: ");
              fflush(stdin);
              scanf("%[^\n]s", CA[i].nome);


              printf("\nDigite o CPF do paciente: ");
              fflush(stdin);
              scanf("%[^\n]s", CA[i].CPF);


              printf("\nDigite o telefone do paciente: ");
              fflush(stdin);
              scanf("%[^\n]s", CA[i].telefone);


              printf("\n");

              printf("\nDigite o nome da rua do paciente: ");
              fflush(stdin);
              scanf("%[^\n]s", CA[i].nomeDaRua);


              printf("\nDigite o numero da rua do paciente: ");
              fflush(stdin);
              scanf("%[^\n]s", CA[i].numeroDaRua);


              printf("\nDigite o bairro do paciente: ");
              fflush(stdin);
              scanf("%[^\n]s", CA[i].bairro);


               printf("\nDigite o cidade do paciente: ");
              fflush(stdin);
              scanf("%[^\n]s", CA[i].cidade);


              printf("\nDigite o estado do paciente: ");
              fflush(stdin);
              scanf("%[^\n]s", CA[i].estado);


              printf("\nDigite CEP Do Paciente: ");
              fflush(stdin);
              scanf("%[^\n]s", CA[i].CEP);


              printf("\nDigite o email do paciente: ");
              fflush(stdin);
              scanf("%[^\n]s", CA[i].email);



              printf("\nDigite a data De nascimento do paciente (DD/MM/AAAA): ");
              fflush(stdin);
              scanf("%[^\n]s", CA[i].dataDeNascimento);



              printf("\nDigite a data do diagnostico do paciente (DD/MM/AAAA): ");
              fflush(stdin);
              scanf("%[^\n]s", CA[i].dataDoDiagnostico);


              printf("\nO Paciente possui alguma comorbidade?Se sim(quais): ");
              fflush(stdin);
              scanf("%[^\n]s", CA[i].comorbidade);
              printf("\n\n\n\t");
              system("pause");
              system("cls");
            }
            break;




            /// CASO 2 QUANDO FOR EXBIR OS DADOS

         case 2:
            system("cls");

            for(i=1;i<=quantidadeCadastros;i++){
             system("cls");

             printf("\n\t\t\t-----------------------------------\n");
             printf("\n\t\t\t\t DADOS DO CADASTRO %d", i);
             printf("\n\t\t\t-----------------------------------\n\n");

               printf("Nome do paciente: %s\n", CA [i].nome);
               printf("CPF do paciente:  %s\n", CA [i].CPF);
               printf("Telefone do paciente: %s\n", CA [i].telefone);
               printf("Nome da Rua do paciente: %s\n", CA [i].nomeDaRua);
               printf("Numero da Rua do paciente: %s\n", CA [i].numeroDaRua);
               printf("Bairro do paciente: %s\n", CA [i].bairro);
               printf("Cidade do paciente: %s\n", CA [i].cidade);
               printf("Estado do paciente: %s\n", CA [i].estado);
               printf("CEP do paciente: %s\n", CA [i].CEP);
               printf("A data de nascimento do paciente: %s\n", CA [i].dataDeNascimento);
               printf("Email do paciente: %s\n", CA [i].email);
               printf("A data do diagnostico do paciente: %s\n", CA [i].dataDoDiagnostico);
               printf("As comorbidades do paciente: %s\n", CA [i].comorbidade);

               system("pause");
            }
               break;

               /// CASO 3 ALTERAR

         case 3:
            system("cls");
              for(i=1;i<=quantidadeCadastros;i++){
              printf("\n\n\t\t ALTERAR CADASTRO\n");
              printf("\t\t -------------------\n\n");
              printf(" 1 -  Nome do paciente:\n");
              printf(" 2 -  CPF do paciente:\n");
              printf(" 3 -  Telefone do paciente:\n");
              printf(" 4 -  Rua do paciente:\n");
              printf(" 5 -  Numero da rua do paciente:\n");
              printf(" 6 -  Bairro do paciente:\n");
              printf(" 7 -  Cidade do paciente:\n");
              printf(" 8 -  Estado do paciente:\n");
              printf(" 9 -  CEP do paciente:\n");
              printf(" 10 - Data do nascimento do paciente:\n");
              printf(" 11 - Email do paciente:\n");
              printf(" 12 - Data do diagnostico do paciente:\n");
              printf(" 13 - Comorbidade do paciente:\n");
              printf("\n\n\tQual opcao voce deseja alterar: \n");
              scanf("%d", &opcaoAlterar);


              switch(opcaoAlterar){
              case 1:
               for(i=1;i<=quantidadeCadastros;i++){
                    system("cls");
                printf("\n\n CADASTRO %d\n", i);
                printf("\n Alterar Nome do Paciente para:  ");
                fflush(stdin);
                scanf("%[^\n]s", &CA [i].nome);
                printf("\n Novo Nome do Paciente: %s\n\n\t\t ", CA [i].nome);
                system("pause");
            }
            break;

             case 2:
            for(i=1;1<=quantidadeCadastros;i++){
                printf("\nAlterar CPF do Paciente para:   ");
                 fflush(stdin);
                scanf ("%[^\n]s", &CA [i].CPF);
                printf("\n O Novo CPF do Paciente: %s\n\n\t\t", CA [i].CPF);
                system("pause");
            }
            break;


             case 3:
            for(i=1;1<=quantidadeCadastros;i++){
                printf("\nAlterar Telefone do Paciente para:   ");
                 fflush(stdin);
                scanf ("%[^\n]s", &CA [i].telefone);
                printf("\n O Novo Telefone do Paciente: %s\n\n\t\t", CA [i].telefone);
                system("pause");
            }
            break;


             case 4:
            for(i=1;1<=quantidadeCadastros;i++){
                printf("\nAlterar o Nome da Rua do Paciente para:   ");
                 fflush(stdin);
                scanf ("%[^\n]s", &CA [i].nomeDaRua);
                printf("\n O Novo Nome da Rua do Paciente: %s\n\n\t\t", CA [i].nomeDaRua);
                system("pause");
            }
            break;


            case 5:
            for(i=1;1<=quantidadeCadastros;i++){
                printf("\nAlterar o Numero da Rua do Paciente para:   ");
                 fflush(stdin);
                scanf ("%[^\n]s", &CA [i].numeroDaRua);
                printf("\n O Novo Numero da Rua do Paciente: %s\n\n\t\t", CA [i].numeroDaRua);
                system("pause");
            }
            break;

            case 6:
            for(i=1;1<=quantidadeCadastros;i++){
                printf("\nAlterar o Bairro do Paciente para:   ");
                 fflush(stdin);
                scanf ("%[^\n]s", &CA [i].bairro);
                printf("\n O Novo Nome do Bairro do Paciente: %s\n\n\t\t", CA [i].bairro);
                system("pause");
            }
            break;

            case 7:
            for(i=1;1<=quantidadeCadastros;i++){
                printf("\nAlterar a Cidade do Paciente para:   ");
                 fflush(stdin);
                scanf ("%[^\n]s", &CA [i].cidade);
                printf("\n O Novo Nome da Cidade do Paciente: %s\n\n\t\t", CA [i].cidade);
                system("pause");
            }
            break;

            case 8:
            for(i=1;1<=quantidadeCadastros;i++){
                printf("\nAlterar o Estado do Paciente para:   ");
                 fflush(stdin);
                scanf ("%[^\n]s", &CA [i].estado);
                printf("\n O Novo Nome do Estado do Paciente: %s\n\n\t\t", CA [i].estado);
                system("pause");
            }
            break;

            case 9:
            for(i=1;1<=quantidadeCadastros;i++){
                printf("\nAlterar o CEP do Paciente para:   ");
                 fflush(stdin);
                scanf ("%[^\n]s", &CA [i].CEP);
                printf("\n O Novo CEP do Paciente: %s\n\n\t\t", CA [i].CEP);
                system("pause");
            }
            break;

            case 10:
            for(i=1;1<=quantidadeCadastros;i++){
                printf("\nAlterar a Data de Nascimento do Paciente para(DD/MM/AAA):   ");
                 fflush(stdin);
                scanf ("%[^\n]s", &CA [i].dataDeNascimento);
                printf("\n A Nova Data de Nascimento do Paciente: %s\n\n\t\t", CA [i].dataDeNascimento);
                system("pause");
            }
            break;

            case 11:
            for(i=1;1<=quantidadeCadastros;i++){
                printf("\nAlterar o Email do Paciente para:   ");
                 fflush(stdin);
                scanf ("%[^\n]s", &CA [i].email);
                printf("\n O nome Email do Paciente: %s\n\n\t\t", CA [i].email);
                system("pause");
            }
            break;

            case 12:
            for(i=1;1<=quantidadeCadastros;i++){
                printf("\nAlterar a Data do Diagnostico do Paciente para(DD/MM/AAA):   ");
                 fflush(stdin);
                scanf ("%[^\n]s", &CA [i].dataDoDiagnostico);
                printf("\n A Nova Data do Diagnostico do Paciente: %s\n\n\t\t", CA [i].dataDoDiagnostico);
                system("pause");
            }
            break;

            case 13:
            for(i=1;1<=quantidadeCadastros;i++){
                printf("\nAlterar a Comorbidade do Paciente para:  ");
                 fflush(stdin);
                scanf ("%[^\n]s", &CA [i].comorbidade);
                printf("\n A Nova Comorbidade do Paciente: %s\n\n\t\t", CA [i].comorbidade);
                system("pause");
            }
            break;



               }
              }

	     break;


            case 4:   /// Excluir cadastro

            system("cls");
            for(i=1;i<=quantidadeCadastros;i++){
                printf("\t\t EXCLUIR CADASTRO\n\n");
                printf("\n\n\t\t-----------------------\n\n");

              printf(" 1 -  Nome do Paciente \n");
              printf(" 2 -  CPF do Paciente:\n");
              printf(" 3 -  Telefone do Paciente:\n");
              printf(" 4 -  Rua do Paciente:\n");
              printf(" 5 -  Numero da rua do Paciente:\n");
              printf(" 6 -  Bairro do Paciente:\n");
              printf(" 7 -  Cidade do Paciente:\n");
              printf(" 8 -  Estado do Paciente:\n");
              printf(" 9 -  CEP do Paciente:\n");
              printf(" 10 - Data do Nascimento do Paciente:\n");
              printf(" 11 - Email do Paciente:\n");
              printf(" 12 - Data do Diagnostico do Paciente:\n");
              printf(" 13 - Comorbidade do Paciente:\n");
              printf(" 14 - Excluir Todos os Dados: \n\n");
              printf("Qual opcao voce deseja Excluir:\n");
              scanf("%d", &opcaoExcluir);


               switch(opcaoExcluir){
            case 1:
                for(i=1;i<=quantidadeCadastros;i++){
                  system("cls");
                  memset(&CA [i].nome,0,sizeof(CA [i].nome));
                  printf("Nome do Paciente Excluido!");
                  system("pause");
                }
                break;


                case 2:
                for(i=1;i<=quantidadeCadastros;i++){
                  system("cls");
                  memset(&CA [i].CPF,0,sizeof(CA [i].CPF));
                  printf("CPF do Paciente Excluido!");
                  system("pause");
                }
                break;

                case 3:
                for(i=1;i<=quantidadeCadastros;i++){
                  system("cls");
                  memset(&CA [i].telefone,0,sizeof(CA [i].telefone));
                  printf("Telefone do Paciente Excluido!");
                  system("pause");
                }
                break;

                case 4:
                for(i=1;i<=quantidadeCadastros;i++){
                  system("cls");
                  memset(&CA [i].nomeDaRua,0,sizeof(CA [i].nomeDaRua));
                  printf("Nome da Rua do Paciente Excluido!");
                  system("pause");
                }
                break;

                case 5:
                for(i=1;i<=quantidadeCadastros;i++){
                  system("cls");
                  memset(&CA [i].numeroDaRua,0,sizeof(CA [i].numeroDaRua));
                  printf("Numero da Rua do Paciente Excluido!");
                  system("pause");;
                }
                break;

                case 6:
                for(i=1;i<=quantidadeCadastros;i++){
                  system("cls");
                  memset(&CA [i].bairro,0,sizeof(CA [i].bairro));
                  printf("Bairro do Paciente Excluido!");
                  system("pause");
                }
                break;

                case 7:
                for(i=1;i<=quantidadeCadastros;i++){
                  system("cls");
                  memset(&CA [i].cidade,0,sizeof(CA [i].cidade));
                  printf("Cidade do Paciente Excluido!");
                  system("pause");
                }
                break;

                case 8:
                for(i=1;i<=quantidadeCadastros;i++){
                  system("cls");
                  memset(&CA [i].estado,0,sizeof(CA [i].estado));
                  printf("Estado do Paciente Excluido!");
                  system("pause");
                }
                break;

                case 9:
                for(i=1;i<=quantidadeCadastros;i++){
                  system("cls");
                  memset(&CA [i].CEP,0,sizeof(CA [i].CEP));
                  printf("CEP do Paciente Excluido!");
                  system("pause");
                }
                break;


                case 10:
                for(i=1;i<=quantidadeCadastros;i++){
                  system("cls");
                  memset(&CA [i].dataDeNascimento,0,sizeof(CA [i].dataDeNascimento));
                  printf("Data de Nascimento do Paciente Excluido!");
                  system("pause");
                }
                break;


                case 11:
                for(i=1;i<=quantidadeCadastros;i++){
                  system("cls");
                  memset(&CA [i].email,0,sizeof(CA [i].email));
                  printf("Email do Paciente Excluido!");
                  system("pause");
                }
                break;


                case 12:
                for(i=1;i<=quantidadeCadastros;i++){
                  system("cls");
                  memset(&CA [i].dataDoDiagnostico,0,sizeof(CA [i].dataDoDiagnostico));
                  printf("Data do Diagnostico do Paciente Excluido!");
                  system("pause");
                }
                break;


                case 13:
                for(i=1;i<=quantidadeCadastros;i++){
                  system("cls");
                  memset(&CA [i].comorbidade,0,sizeof(CA [i].comorbidade));
                  printf("Comorbidade(s) do Paciente Excluido!");
                  system("pause");
                }
                break;

                case 14:  // excluir dados do sistema
                for(i=1;i<=quantidadeCadastros;i++){
                  system("cls");
                  memset(&CA [i].nome,0,sizeof(CA [i].nome));
                  memset(&CA [i].CPF,0,sizeof(CA [i].CPF));
                  memset(&CA [i].telefone,0,sizeof(CA [i].telefone));
                  memset(&CA [i].nomeDaRua,0,sizeof(CA [i].nomeDaRua));
                  memset(&CA [i].numeroDaRua,0,sizeof(CA [i].numeroDaRua));
                  memset(&CA [i].bairro,0,sizeof(CA [i].bairro));
                  memset(&CA [i].cidade,0,sizeof(CA [i].cidade));
                  memset(&CA [i].estado,0,sizeof(CA [i].estado));
                  memset(&CA [i].CEP,0,sizeof(CA [i].CEP));
                  memset(&CA [i].dataDeNascimento,0,sizeof(CA [i].dataDeNascimento));
                  memset(&CA [i].email,0,sizeof(CA [i].email));
                  memset(&CA [i].dataDoDiagnostico,0,sizeof(CA [i].dataDoDiagnostico));
                  memset(&CA [i].comorbidade,0,sizeof(CA [i].comorbidade));

                  printf("\nTodos os Dados do Paciente foram Excluidos!\n\n");
                  system("pause");
                }

                 break;
               }
            }
            break;





                case 5:
                    system("cls");
                    printf("Voce Deseja Sair do Sistema?\n\n");
                    printf("1 - Sim\n2 - Nao");
                    printf("\n\n");
                    scanf("%d", &opcaoDesejaSairDoSistema);

                    switch(opcaoDesejaSairDoSistema){
                case 1:
                     system("cls");
                     printf("\n\nSaindo do Sistema.....\n\n\n");
                     system("pause");
                     return 0;
                     break;
                    }
	    }
            }

                    break;
           }
           system("pause");
                    return 0;
}

///// Salvando arquivo
/*    FILE *file;

      file = fopen("DadosPacientes.txt", "w");   ///abrir
      fprintf(file, "");
      fclose(file); ///fechar

      para usar no if no idade>65 mandar arquivo
*/
