#include <stdio.h>
#include <dirent.h>
#include <errno.h>

int
main (void)
{
  DIR *dirstream = opendir (".");
  if (dirstream == NULL)
    {
      perror(NULL);
      return -1;
    }
  struct dirent *entry;
  while (entry = readdir (dirstream))
    {
      printf ("%s\t", entry->d_name);
    }
  printf("\n");
  return 0;
}
