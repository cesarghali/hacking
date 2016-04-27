#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("Usage: %s <password>\n", argv[0]);
    exit(0);
  }

  char password_buffer[100];
  int auth_flag = 0;

  strcpy(password_buffer, argv[1]);

  if (strcmp(password_buffer, "brilling") == 0)
    auth_flag = 1;
  if (strcmp(password_buffer, "outgrabe") == 0)
    auth_flag = 1;

  if (auth_flag) {
    printf("Access Granted.\n");
  } else {
    printf("Access Denied.\n");
  }
}
