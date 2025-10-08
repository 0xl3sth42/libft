#include "libft.h"

char *strcpt(char *dest, const char *src)
{
  size_t  i;

  i = 0;
  while(src[i])
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return (dest);
}
