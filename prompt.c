#include "fonctions.h"

int             readline(int salle)
{
  char          *entree;
  int           result;

  result = 0;
  while (result == 0)
    {
      entree = malloc(sizeof(char*));
      my_putstr("Entrez votre commande : ");
      my_strcpy(entree, readLine());
      result = comparer(entree, salle);
    }
  return (result);
}