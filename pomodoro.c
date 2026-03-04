/* Primeiro projeto em C.
   
   Criar um sistema de Pomodoro com temporizador.
*/

#include <stdio.h>
#include <windows.h>

/*	
struct Tarefa{
*/
int main(){
	int tempo;
	printf("%s", "\e[0;31m...Tumate...\n\e[0;32m Digite o tempo desejado(em minutos.): ");
	scanf("%d", &tempo);
	Sleep(60000*tempo); // Using the WinAPI to call a Sleep functions. Notice the Sleep function works with miliseconds.
	printf("%s", "Feito!");
	return 0;
}

