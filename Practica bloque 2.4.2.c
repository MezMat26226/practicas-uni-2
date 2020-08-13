//Práctica 2.4.2

#include<stdio.h>

  int main(){
  	
  	int a,b,c;
  	
  	printf (".\nIntroduzca un valor en horas: ");
  	scanf ("%i",&a);
  	
  	printf ("Introduzca un valor en minutos: ");
  	scanf ("%i",&b);
  	
  	printf ("Introduzca un valor en segundos: ");
  	scanf ("%i",&c);
  	
  	if (a<24 && b<60 && c<60){
  		c++;
  		if (c==60){
  			c=0;
  			b++;
  			if(b==60){
  				b=0;
  				a++;
  				if(a==24){
  					a=0;
  				}
  			}
  		}
  		printf (".\nLa hora es: %i:%i:%i.\n.\n",a,b,c);
  		
  	}
  	
  	else{
  		printf (".\nLos valores ingresados son incorrectos.\n.\n");
  	}
  	
  	system("pause");
  	return 0;
  }
