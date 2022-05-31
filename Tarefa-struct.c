#include <stdio.h> //Biblioteca para printf e scanf.
#include <string.h> //Biblioteca para strlen e strcmp.
#include <stdlib.h> //Biblioteca para system.
#include <ctype.h> //Serve para classificar caracteres ASCII.
#include <locale.h> //Localizar um programa e fazer adaptações às características de um determinado idioma ou região.
#include <stdbool.h> //Denota em uma função que retorna um valor do tipo bool.
#define TAM 10


	typedef struct {
			char endereco[50], complemento[50], bairro[10], estado[10], cidade [20],cep[20];
			int numero;
	}Endereco;
		
	typedef	struct {
			char placa[10], modelo[10], cor[10];
			int ano;
	}Veiculo;
	
	typedef struct {
			char nome[60], boleto, email[30];
			int cpf, telefone, dddt, celular, dddc, ins_est, ins_mun, cnae, dataNas, telComer, contRespon, data, idade, pessoaJu, cnpj;
			Endereco end;
			Veiculo vei[3];
	}Pessoa;

		
	int main() {
        setlocale(LC_ALL, "Portuguese"); //Declaração de variáveis do código.
		int i=0, x=0, a=0, g=0, idad[2], velho=0, novo=100;
		char opcao;
		
		 Pessoa pessoa[10];
         idad[1] = 0;
         idad[2] = 100;
			

	do{		
        fflush(stdin);
		printf("Informe seu Nome Completo e Razao Social: ");
		fgets(pessoa[i].nome,60,stdin);

  		printf("\nInforme seu endereco: ");
        fgets(pessoa[i].end.endereco,50,stdin);

		printf("Informe seu Numero: ");
		scanf("%d", &pessoa[i].end.numero);

        fflush(stdin);
		printf("Informe seu complemento: ");
        fgets(pessoa[i].end.complemento,50,stdin);

		printf("Informe seu Bairro: ");
        fgets(pessoa[i].end.bairro,10,stdin);


		printf("Informe seu CEP: ");
        fgets(pessoa[i].end.cep,20,stdin);-


		printf("Informe seu Estado: ");
        fgets(pessoa[i].end.estado,10,stdin);


		printf("Informe sua cidade: ");
        fgets(pessoa[i].end.cidade,20,stdin);
//
//
		printf("\nInforme seu ddd: ");
		scanf("%d", &pessoa[i].dddt); //DUVIDA SOBRE SER INT 
//
//
		printf("\nInforme seu Telefone residencial ou comercial: ");
		scanf("%d", &pessoa[i].telComer);
//
//
		printf("\nInforme o ddd do seu numero de celular: ");
		scanf("%d", &pessoa[i].dddc);
//
//
		printf("\nInforme seu numero de celular: ");
		scanf("%d", &pessoa[i].celular);
//
//
		printf("\nInforme seu cpf: ");
		scanf("%d", &pessoa[i].cpf);
//
//  
        do{
        fflush(stdin);
		printf("\nCaso deseje receber boletos por email digite s, caso contrario n: ");
		scanf("%c", &pessoa[i].boleto);
        
        pessoa[i].boleto = toupper(pessoa[i].boleto);
        }while (pessoa[i].boleto != 'S' && pessoa[i].boleto != 'N');

        do{
     	printf("Se voce for uma pessoa juridica, digite s, caso nao seja digite n: ");
        fflush(stdin);
		pessoa[i].pessoaJu = getchar(); //pega os caracteres 'S'
        pessoa[i].pessoaJu = toupper(pessoa[i].pessoaJu);
        }while(pessoa[i].pessoaJu != 'S' && pessoa[i].pessoaJu != 'N');		
		if(pessoa[i].pessoaJu == 'S'){
			
			printf("Informe seu cnpj: ");
			scanf("%d", &pessoa[i].cnpj);
//
//
		printf("\nInforme sua insEstadual: ");
		scanf("%d", &pessoa[i].ins_est);

		
		printf("\nInforme sua insMunicipal: ");
		scanf("%d", &pessoa[i].ins_mun);
//

		printf("\nInforme seu CNAE: ");
		scanf("%d", &pessoa[i].cnae);
        }else{
            pessoa[i].cnpj=0;
            pessoa[i].ins_est=0;
            pessoa[i].ins_mun=0;
            pessoa[i].cnae=0;
        }
	
		printf("\nInforme sua Data de Nascimento: ");
		scanf("%d", &pessoa[i].dataNas);
		
        fflush(stdin);
		printf("\nInsira o seu email: ");
        fgets(pessoa[i].email,30,stdin);
//
		printf("\nInforme sua idade: ");
		scanf("%d", &pessoa[i].idade);
        
        if (pessoa[i].idade > idad[1]  ){
            idad[1] = pessoa[i].idade;
            velho = i;
        }
        if (pessoa[i].idade < idad[2]  ){
            idad[2] = pessoa[i].idade;
            novo = i;
        }

		printf("\nInforme seu contato do responsavel: ");
		scanf("%d", &pessoa[i].contRespon);
			
		printf("\nInforme a data: ");
		scanf("%d", &pessoa[i].data);
		
//	
//
//			printf("Assinatura do resposavel: ");
//			scanf("%[^\n]s\n", &assinatura);
//
//	
			
			printf("\n\n- - - - - - - -DADOS DO VEICULO- - - - - - - -\n\n");
			
			do{
			
            fflush(stdin);
			printf("Informe a placa do veiculo: ");
            fgets(pessoa[i].vei[x].placa,10,stdin);
            fflush(stdin);

            printf("Informe o ano do veiculo: ");
            scanf("%d",&pessoa[i].vei[x].ano);
            fflush(stdin);
			printf("Informe o modelo do veiculo:  ");
            fgets(pessoa[i].vei[x].modelo,10,stdin);
            fflush(stdin);
			printf("Informe a cor do veiculo: ");
            fgets(pessoa[i].vei[x].cor,10,stdin);
            fflush(stdin);
			do{

            
			printf("\nDeseja cadastrar outro veiculo(S/N)?: ");
            fflush(stdin);
		    opcao = getchar();
            opcao = toupper(opcao);
            printf("vai \n%c\n",opcao);
            
		    if (opcao == 'S'){
		      		}else{
					    if(opcao == 'N'){
						    }else{
		                        printf("Opcao Invalida\n\n");
		                    }
            }
			}while (opcao != 'S'&& opcao != 'N');
			x++;
			
			if (x == 3){
			printf("\nLimite de carros atingidos\n");
			}
			
			}while(opcao != 'N' && x < 3);
			x = 0;
			do{

            
			printf("\nDeseja cadastrar outra pessoa(S/N)?: ");
            fflush(stdin);
		    opcao = getchar();
            opcao = toupper(opcao);
            
		    if (opcao == 'S'){
	
		      		}else{
					    if(opcao == 'N'){
						    }else{
		                        printf("Opcao Invalida\n\n");
		                    }
						}
            	    						
			i++;
            }while ( opcao != 'S' && opcao != 'N');
			system("cls");

	}while(opcao != 'N' && i < TAM);
//Após ler as fichas, deverá retornar (nome, cep, veiculos (placas e modelos)) do usuário mais novo e do usuário mais velho.



//	a = i; //VALOR TOTAL DE PESSOAS CADASTRADAS
//	
//	for(i=0;i<=a;i++);
//		pessoa[i].idade > pessoa[i+1].idade
//		//condicional maiores e menores idades 
							
	//condicional maior idade
	//condicional menor idade 
    
// APARTIR DE AGORA METENDO O LOKO NOS PRINTF.....................................................................................................................................................

	while( g < 2 ){
        Pessoa pessoa[i];
        printf("Velho = %d, \nNovo = %d . \nI = %d",velho,novo,i);
        if (velho> novo){
            i = velho;
            velho = 0;
            printf("Mais Velho: \n");
        }else{
            i = novo;
            printf("Mais Novo: \n");
        }
    
    printf("\nRazao Social: %s",pessoa[i].nome);	
	
	printf("\nEndereco: %s",pessoa[i].end.endereco);
	printf("\nNumero: %d",pessoa[i].end.numero);
	printf("\tComplemento: %s",pessoa[i].end.complemento);
	printf("\tBairro: %s",pessoa[i].end.bairro);
	printf("\nCEP: %s",pessoa[i].end.cep);
	printf("\tEstado: %s",pessoa[i].end.estado);
	printf("\tCidade: %s",pessoa[i].end.cidade);
	printf("\nDDD: %d",pessoa[i].dddt);
	printf("\tTelefone Residencial ou Comercial: %d",pessoa[i].telComer);
	printf("\tDDD: %d",pessoa[i].dddc);
	printf("\tTelefone Celular: %d",pessoa[i].celular);
	printf("\nCPF: %d",pessoa[i].cpf);
	
	
	printf("\tCNPJ: %d",pessoa[i].cnpj);
	printf("\nInsc. Estadual: %d",pessoa[i].ins_est);
	printf("\tInsc. Municipal: %d",pessoa[i].ins_mun);
	printf("\nCNAE: %d",pessoa[i].cnae);	


	printf("\tData de Nascimento: %d",pessoa[i].dataNas);
	printf("\nE-mail: %s",pessoa[i].email);

	printf("\nContato do Responsavel: %d",pessoa[i].contRespon);

	
	printf("\nTelefone Comercial: %d\n",pessoa[i].data);
	
	printf("\nDADOS DO VEICULO\n");
	printf("\nPlaca: %s",pessoa[i].vei[x].placa);
	printf("\tModelo: %s",pessoa[i].vei[x].modelo);
	printf("\tAno: %d",pessoa[i].vei[x].ano);
	printf("\tCor: %s\n\n\n",pessoa[i].vei[x].cor);
    g++;
    }
    }
