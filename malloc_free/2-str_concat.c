#include "main.h"
#include <stdio.h>
#include <stalib.h>

/**
 * str_concat - Entry point
 * @s1: String 1
 * @s2: String 2
 * Returns pointer should point to a newly allocated space in memory or NULL
 */

 char *str_concat(char *s1, char *s2)
char *strnew = NULL;
unsigned int i; int nl;
int n2; int count;
count = 0;
if (s1 == NULL)
51 = "";
if (s2 == NULL)
52 = 11:
for
Cn2
0; 52[n2] # 'ler; n2+)
strnew =
(char
*)malloc((n1 + n2 + 1) * sizeof(char));
if (strnew == NULL)
return (NULL);
for
for {
Ci = o; s1[i] * '\o'; i+)
strnew[i] = s1[i];
C; s2 [count] * '10'; i++)
strnew[i] = s2[count];
count士；
}
return (strnew);
