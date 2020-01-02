#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

/*
 * Compiler : gcc -Wall RebootPhp.c -o RebootPhp
 * chown www-data:www-data RebootPhp
 * chmod 777 RebootPhp
 */

int main() {
   setuid(0); // Passe en uid root, 0
   sleep(5);
   char *command = "/sbin/reboot"; // Pointeur
   execl(command, command, NULL); // Premiere commande qui se situe dans le Path, le deuxième argument est la commande
   return 0; // Evite l'erreur (since never returns)
}
