//Practica

#include<stdio.h>

  int main(){
  	
  	int a,b,c,may,men;
  	
  	printf ("Introduzca el valor a: .\n");
  	scanf ("%i",&a);
  	
  	printf ("Introduzca el valor b: .\n");
  	scanf ("%i",&b);
  	
  	printf ("Introduzca el valor c: .\n");
  	scanf ("%i",&c);
  	
  	if (a>b && a>c){
  		may = a;
  		if (b>c){
  			men = c;
  		}
  		else{
  			men = b;
  		}
  	}
  	
  	else{
  		if (b>c){
  			may = b;
  			if (a>c){
  				men = c;
  			}
  			else{
  				men = a;
  			}
  		}
  		else{
  			may = c;
  			if (b>a){
  				men = a;
  			}
  		}
  	}
  	
  	printf ("El numero mayor es: %i.\n",may);
  	printf ("El numero menor es: %i.\n",men);
  	
  	system("pause");
  	return 0;
  }
