#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

struct lista 
{
    int Matricula;
    char Nome[20];
    struct lista* prox;
};

typedef struct lista Lista;

/* inserção no início: retorna a lista atualizada */
Lista* insere (Lista* l)
{
    system("cls");
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	printf("\nEntre com os dados do aluno:\nMatricula: ");
    scanf("%d",&novo->Matricula);
    printf("Nome: ");
    scanf("%s",&novo->Nome);
    novo->prox = l;
    return novo;
}

/* função imprime: imprime valores dos elementos */
void imprime (Lista* l)
{
    system("cls");
	printf("\nAlunos da turma:\n");
    Lista* p;
    for (p = l; p != NULL; p = p->prox)
    {
    	printf("\nMatricula = %d", p->Matricula);
    	printf("\nNome = %s\n", p->Nome);
    }
    getch();
}

/* função retira: retira elemento da lista */
Lista* retira (Lista* l)
{
    int v;
	printf("\nEntre com a matricula do aluno:");
    scanf("%i",&v);
    getch();
    Lista* ant = NULL; /* ponteiro para elemento anterior */
    Lista* p = l; /* ponteiro para percorrer a lista */
    /* procura elemento na lista, guardando anterior */
    while (p != NULL && p->Matricula != v)
    { 
        ant = p;
        p = p->prox; 
    }
    /* verifica se achou elemento */
    if (p == NULL)
        return l;   /* não achou: retorna lista original */	
    /* retira elemento */
    if (ant == NULL)
    { /* retira elemento do inicio */
        l = p->prox; 
    }
    else 
    { /* retira elemento do meio da lista */
        ant->prox = p->prox; 
    }
    free(p);
    return l;
}

int MenuPrincipal()
{
	system("cls");
	int opcao = 0;
	printf("Cadastro de alunos \n1 - incluir \n2 - listar \n3 - retirar  \n9 - fim\n\nEscolha a opção:");
	scanf("%d",&opcao);
	return opcao;	
}

int main (void)
{   	
    Lista* l = NULL;             /* Cria uma lista vazia - hhhhhhhhhhb*/   
    int opcao = 0;    
    
    while(opcao!=9)
    {
		opcao = MenuPrincipal();
    	if(opcao==1)
    	{
    		l = insere(l);
    	}
    	else if(opcao==2)
    	{
    		imprime(l);
    	}
    	else if(opcao == 3)
    	{
    		l = retira(l);
    	}
    }

    getch();
}

