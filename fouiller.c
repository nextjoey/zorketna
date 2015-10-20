#include "fonctions.h"

void		fouiller(int salle)
{
  /*SALLE 2*/
  if (salle == 2)
    {
      if (CARTE_COM == 0)
        {
          my_putstr("\nJe pense que je peux récuperer :\n");
          my_putstr(" - une <carte> d'identification\n\n");
        }
      else
        {
          my_putstr("\nJ'ai beau chercher, je vois rien a récuperer.\n\n");
        }
      return;
    }
  /*FIN SALLE02*/

  /*SALLE 08*/
  if (salle == 8)
    {
      if (CARTE_ACCES == 0)
	{
	  my_putstr("\nJe pense que je peux récuperer :\n");
	  my_putstr(" - un <badge> d'acces\n\n");
	}
      else
	{
	  my_putstr("\nJ'ai beau chercher, je vois rien a récuperer.\n\n");
	}
      return;
    }
  /*SALLE08*/

  /*SALLE 11 RESERVE*/
  else if (salle == 11)
    {
      if (MEDIC_RESE != 0)
        {
          my_putstr("\nJe pense que je peux récuperer :\n");
          my_putstr(" - des <medicaments>\n\n");
        }
      else
        {
          my_putstr("\nJ'ai beau chercher, je vois rien a récuperer.\n\n");
        }
      return;
    }
  /*FIN SALLE11*/

  /*SALLE 24*/
  else if (salle == 24)
    {
      if (COMBI == 0)
        {
          my_putstr("\nJe pense que je peux récuperer :\n");
          my_putstr(" - une <combinaison> anti-radiation\n\n");
        }
      else
        {
          my_putstr("\nJ'ai beau chercher, je vois rien a récuperer.\n\n");
        }
      return;
    }
  /*FIN SALLE24*/
  
  /*SINON*/
  else
    {
      my_putstr("\nJ'ai fouillé toute la piece : RAS.\n\n");
    }
}