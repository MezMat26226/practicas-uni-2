//Estructura de decisi�n

#include<stdio.h>
//"if", significa SI, mientras la condici�n se cumpla, lo que esta en corchetes se cumplir�

  int main(){
  	
  	int x;
  	
  	printf ("Dame el valor de x: ");
  	
  	scanf ("%i",&x);
  	
  	if (x>=1 && x<=10){
  		printf (".\n.\nEl valor es aceptado.\n.\n");
  	}
  	
  	else {
  		printf (".\n.\nEl valor no es aceptado.\n.\n");
  	}
  	
  	system("pause");
  	return 0;
  }
