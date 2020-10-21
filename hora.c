#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <sys/wait.h>

int main() {
        int pid, estado;
        time_t tiempo = time(0);
        struct tm *tlocal = localtime(&tiempo);
        char hora[128];

        pid=fork();
        switch(pid){
		case -1:
			perror("No se ha podido crear el proceso hijo\n");
			break;
		case 0:
			printf("Programa ejecutandose. PID= [%d] \n", getpid());
			printf("listo para recibir señal SIGUSR1 \n");
			for(;;);
			break;
		default:
			waitpid(pid,&estado,0);
			strftime(hora,128, "%d/%m/%y %H:%M:%S", tlocal);
			printf("Señal SIGUSR1 recibida: %s\n", hora);
			break;
	}
}
