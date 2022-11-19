#include <iostream>

using namespace std;

int main() {
	

 /*  int tempo, horas, horas_seg, minutos, segundos;
   horas_seg=3600;//horas em segundos
   printf("Entre com o n�mero de segundos: ");
   scanf("%d", &tempo);
   horas = (tempo/horas_seg); //resultado da hora
   minutos = (tempo -(horas_seg*horas))/60;
   segundos = (tempo -(horas_seg*horas)-(minutos*60));
   printf("%dh : %dm :%ds \n",horas,minutos,segundos);
 */
	// Digita os segundos
	int horas_temp, segundos_t, segundos, horas, dias_temp, dias, minutos;
	
	segundos_t = 144067;
	horas_temp = 3600;
	dias_temp = 86400;
	
	dias = (segundos_t / dias_temp);
	horas = (segundos_t / horas_temp) - (dias * 24);
	minutos = dias - ((segundos_t / horas_temp) / 60);
	segundos = dias - ((segundos_t / 60) / 60);	
	
	
	cout << dias << "d" << horas << "h" << minutos << "m" << segundos << "s";

	return 0;
}
