//Ampliación estructura de desición

#include<stdio.h>

  int main(){
  	
  	int x,y;
  	
  	printf ("Introduzca un numero ");
  	scanf ("%i",&x);
  	
  	y = x % 2;
  	
  	if (y==0){
  		printf (".\nEl numero %i es par.\n.\n ",x);
  	}
  	
  	else{
  		printf (".\nEl numero %i es impar.\n.\n ",x);
  	}
  	
  	system("pause");
  	return 0;
  } 
