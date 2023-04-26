#include <stdio.h> //biblioteca de comunica��o com o usuario 
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca responsavel por cuidar das string

     int registro() //Fun��o responsavel por cadastrar os usu�rios no sistema
{ 
    //inicio cria��o de variaveis/string
	char arquivo[40];
 	char cpf[40];
 	char nome[40];
  	char sobrenome[40];
	char cargo[40];
	//final da Cria��o de variaveis/string
	
 	printf("Digite o CPF a ser cadastrado; "); //Coletando informa��es do usuario
 	scanf("%s", cpf); // %s uso toda vez que for salvvar uma string
	
 	strcpy(arquivo, cpf); //Responsavel por copiar os valores das strings
 	
 	FILE *file; // criar arquivo
	 file = fopen(arquivo, "w"); // criar arquivo
	 fprintf(file,cpf); // salvar o valor da variavel
 	fclose(file); //fechar o arquivo
 	
 	file = fopen(arquivo, "a");
	fprintf(file, ",");
	 fclose(file);
	 
     printf(" Digite o nome a ser cadastrado; ");
     scanf("%s", nome);
      
     file = fopen(arquivo, "a");
     fprintf(file,nome);
     fclose(file);
     
     file = fopen(arquivo, "a");
	 fprintf(file, ",");
	 fclose(file);
	
	 printf(" Digite o sobrenome a ser cadastrado; ");
     scanf("%s", sobrenome);
	
	 file = fopen(arquivo, "a");
     fprintf(file, sobrenome);
     fclose(file);
     
     file = fopen(arquivo, "a");
	 fprintf(file, ",");
	 fclose(file);
	 
     printf(" Digite o cargo a ser cadastrado; ");
     scanf("%s", cargo);
     
     file = fopen(arquivo, "a");
     fprintf(file, cargo);
     fclose(file);
       
     system ("pause");
 }
      int consultar()
  {  
     setlocale(LC_ALL, "Portuguese"); // Definindo linguagem
         
     char cpf[40];
     char conteudo[200];
      
 	printf("Digite o cpf a ser consultado; ");
 	scanf("%s", cpf);
 	
 	FILE *file;
 	file = fopen(cpf,"r");
 	
 	if(file == NULL)
 	{
 		printf("N�o foi possivel abriar o arquivo , n�o localizado!/n");
	 }
	 
	 while(fgets(conteudo, 200, file)  != NULL)
	 {
	 	printf("\nEssas s�o as informa�o�es do usuario: ");
	 	printf("%s", conteudo);
	 	printf("\n\n");
	 }
   	system("pause");
 }

	
     int deletar()
{
     char cpf[40];
     
	 printf("Digite o CPF do usu�rio a ser deletado: ");
   	 scanf("%s", cpf);

     remove (cpf);
   	
   	FILE *file;
   	file = fopen(cpf,"r");
   	
   	if(file == NULL);
   	{
   		printf("O usuario n�o  se encontra no sistema!./n");
   		system("pause");
	}
}
     int main()

{
      int opcao=0; //Defifindo variaveis 
      int laco=1;

       for(laco=1;laco=1;)
       
	   {
	   	
	   system("cls");

	 setlocale(LC_ALL, "Portuguese"); // Definindo linguagem
	
     printf("### Cart�rio da EBAC ###\n\n"); //Inicio do menu
     printf("Escolha a op��o desejada do menu:\n\n"); 
     printf("\t1 - Registrar nomes\n");
     printf("\t2 - Consultar nomes\n");
     printf("\t3 - Deletar nomes\n");
     printf("\t4 - Sair do sitema\n\n");
     printf("op��o: "); //fim do menu
       
     scanf("%d", &opcao); //armazenando a escolha do usu�rio
   
     system("cls");
   
    switch(opcao)
   {
   	case 1:
	registro();
   	break;
   	
   	case 2:
   	consultar();
   	break;
   	
   	case 3:
   	deletar();
   	
   	case 4:
   	printf("Obrigado por usar o sistema!");
   	return 0;
   	break;
   	
   	default:
   	printf("Essa op��o n�o est� disponivel!\n");
   	system("pause");
   	break;
   		
   }
   
   
   }
}

  
  
  
  
  
