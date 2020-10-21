# SSOO-tarea01
Autor: Ana Muñoz
Correo: ana.munoz@alumnos.uv.cl

La función fork(), aparte de entregar una copia del proceso padre como
proceso hijo, retorna un valor que indica si el fork se ha ejecutado correctamente.
Estos valores son:
####-1:
Es devuelto si se produce algún error en la ejecución del fork.
####0:
Es devuelto si no se produce ningún error y nos encontramos en el proceso hijo.
####default:
Si no se produce ningún error y nos encontramos en el proceso padre, el fork devuelve el PID asignado al proceso hijo.

Luego, con respecto a la función waitpid() detiene el proceso padre y se queda esperando hasta que termine el proceso hijo.
La función strftime() obtiene la hora local y es transformada a string, para luego mostrarla en el printf encargado de mostrar por pantalla cuándo el programa recibió la señal de matar el proceso.

