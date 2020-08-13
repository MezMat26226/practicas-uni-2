//Bloque 2.4.2

#include<stdio.h>

  int main(){
  	
  	int h,min,seg;
  	
  	printf ("Introduzca el valor horas: ");
  	scanf ("%i",&h);
  	
  	printf ("Introduzca el valor minutos: ");
  	scanf ("%i",&min);
  	
  	printf ("Introduzca el valor segundos: ");
  	scanf ("%i",&seg);
  	
  	if(h<=23 && min<60 && seg<60){
  		seg += 1;
  		if (seg == 60){
  			min += 1;
  			seg = 0;
  		}
  		if (min ==60){
  			h += 1;
  			min = 0;
  		}
  		if (h==24){
  			h = 0;
  		}
  		printf ("La hora aproximadamente es: %i:%i:%i.\n",h,min,seg);
  	}
  	else{
  		printf ("La hora introducida no es correcta");
  	}

  	system("pause");
  	return 0;
  	
  }
