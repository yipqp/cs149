#include "../kernel/types.h"
#include "./user.h"

int main(int argc, char *argv[]) {
  if (argc < 2 || argc > 2) {
    fprintf(2, "Usage: sleep numTicks\n");
    exit(1);
  }

  int numTicks = atoi(argv[1]);

  printf("%d", numTicks);

  sleep(numTicks);

  exit(0);
}
