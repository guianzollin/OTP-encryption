#include <stdio.h>
#include <string.h>

main () {
  char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
  char message[100], key[100], crypto[100];
  int i;
  
  puts("Entre com a mensagem: ");
  gets(message);
  
  for (i=0 ; i<strlen(message) ; i++)
    key[i] = alphabet[rand() % (strlen(alphabet) - 1)];
  key[i] = '\0';
  puts("Chave: ");
  puts(key);
  
  for (i=0 ; i<strlen(message) ; i++)
    crypto[i] = message[i] ^ key[i];
  crypto[i] = '\0';
  puts("Mensagem encriptada: ");
  puts(crypto);
  
  for (i=0 ; i<strlen(message) ; i++)
    message[i] = crypto[i] ^ key[i];
  message[i] = '\0';
  puts("Mensagem decriptada: ");
  puts(message);
}
