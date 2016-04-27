#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_auth(char *password) {
  char password_buffer[100];
  int auth_flag = 0;

  strcpy(password_buffer, password);

  if (strcmp(password_buffer, "brilling") == 0)
    auth_flag = 1;
  if (strcmp(password_buffer, "outgrabe") == 0)
    auth_flag = 1;

  return auth_flag;
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("Usage: %s <password>\n", argv[0]);
    exit(0);
  }

  if (check_auth(argv[1])) {
    printf("Access Granted.\n");
  } else {
    printf("Access Denied.\n");
  }
}
