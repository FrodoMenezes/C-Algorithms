#include <stdio.h> 
  
int main() 
{ 
      // Digita os segundos
  int segundos_t, horas, dias, minutos;
  cin >> segundos_t;

  horas = segundos_t / 3600;
  dias = horas / 864000;

  cout << horas << dias;
   
    return 0; 
} 
