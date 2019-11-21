#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 10       

char *lista[TAM];

int inserta(char *,int);  
void elimina(int);        
void muestra(void);		  
void ordena(void);
void llama (void);
void menu (void);
main()
{
  char a[50];		
  int n;				


    for(n=0;n<TAM;n++){
  
       lista[n]=NULL;		
	}
  
   for(n=0;n<TAM;n++) {
	  printf("\n ----------SIMULACION DE ATENCION AL CLIENTE -----------")	;
	  printf("\nIgrese el nombre del cliente ::::",n+1);
  gets(a);

  inserta(a,n+1);
                 }
  muestra();
      llama();

  getch();
}

int inserta(char *s,int p){
   int t;	   
   int l;	   
   char *str;  

   
   if (lista[p]==NULL){       
      		l=strlen(s);       		
      		t=sizeof(char)*l; 		
      		str=(char *)malloc(t);  
      if(str==NULL){			
      		printf("Sin reserva \n");
        	 return 0;            
      }
      	strcpy(str,s); 		   
     	lista[p]=str;			    
      	return 1;				  
   }
   else                       
      return 0;               
}
void elimina(int p){

   free(lista[p]);	
   lista[p]=NULL;		
   						
}
void muestra(void){
   int i;  

   printf("\n LISTA DE PERSONAS INGRESADAS\n");
   for (i=0;i<TAM;i++)              
      if(lista[i]==NULL)            
         printf(" %d.->\n",i+1);    
      else                          
         printf("\n",i+1,lista[i]);
}



 void llama(void){

 int *n;
 printf("cajero");
 printf("llamar a cliente :::" );
   menu();
       }
  void menu(void){
  int opc;
	printf("       Menu de opciones        ");
	printf("1.	Pago de servicio\n");
	printf("2.	Retiro o disposición\n");
	printf("3.	Cobro de cheque\n");
	printf("4.	Deposito\n");
	printf("5.	Pago de tarjeta\n");
	printf("6.  salir\n");
	printf("Seleccione una opcion :::");
    scanf("%d",&opc);

		switch(opc)
		{
case 1 :
 		printf("pago a realizar");
break;
case 2 :
 		printf("cuanto va a retirar");
break;
case 3 :
    	printf("de cuanto es su cheque");
break;
case 4 :
		printf("cuanto es su deposito");
break;
case 5 :
		printf("cuanto va a depositar en su tarjeta");
break;
case 6 :
default:
 break;
 }

   }
