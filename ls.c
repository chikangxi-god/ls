#include <stdio.h>
#include <dirent.h>

int
main (void)
{
  DIR *dirstream = opendir (".");
  struct dirent *entry;
  while (entry = readdir (dirstream))
    {
      printf ("%s\t", entry->d_name);
    }
  printf("\n");
  return 0;
}
