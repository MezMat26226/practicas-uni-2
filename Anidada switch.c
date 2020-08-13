//Anidadas 2

#include<stdio.h>

  int main(){
  	
  	int x;
  	
  	printf ("Ingresa un valor del 1 al 7 ");
  	scanf ("%i",&x);
  	
  	switch (x){ //Utilizando switch, las varianles solo pueden ser de tipo int o char...
  		case 1: printf ("\nLunes.\n");break; //la sentencia break sirve para salir del switch
  		case 2: printf ("\nMartes.\n");break;
  		case 3: printf ("\nMiercoles.\n");break;
  		case 4: printf ("\nJueves.\n");break;
  		case 5: printf ("\nViernes.\n");break;
  		case 6: printf ("\nSabado.\n");break;
  		case 7: printf ("\nDomingo.\n");break;
  		default: printf ("\nEl valor ingresado es incorrecto, por favor ingrese un valor del 1 al 7.\n");
  	}
  	
  	system("pause");
  	return 0;
  }
