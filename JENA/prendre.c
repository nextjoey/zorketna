#include "fonctions.h"
#include "fonctions.h"

int		prendre(int salle, t_player *player)
{
  char		*entree;

  entree = malloc(sizeof(char*));
  entree = readline_prendre();

  /*debut des salles*/
  /*DEBUT 02*/
  if(salle == 02)
    {
      if (strcmp(entree, "douche") == 0)
	{
	  system("cat douche.txt");
	  my_putstr("\n\n");
	  SCORE = SCORE + 20;
	}
      else if (strcmp(entree, "carte") == 0)
	{
	  if (CARTE_COM == 0)
	    {
	      my_putstr("\nEcoutez, je ne sais pas si c'est important mais j'ai trouver une carte d'acces avec mon nom dessus !\n\n");
	      system("cat carte_com.txt");
	      my_putstr("\n");
	      CARTE_COM = 1;
	      SCORE = SCORE + 5;
	    }
	  else
	    {
	      my_putstr("Je ne vois pas de ");
	      my_putstr(entree);
	      my_putstr(" dans cette salle !\n\n");
	    }
	  return (0);
	}
    }
  /*FIN 02*/

  /*DEBUT 08*/
  if(salle == 8)
    {
      if (strcmp(entree, "badge") == 0)
	{
	  if (CARTE_ACCES == 0)
	    {
	      my_putstr("\nVous etes sur ? Beurk.\nTres bien ! Je prend le badge d'acces du sergent Colas.\n\n");
	      CARTE_ACCES = 1;
	      SCORE = SCORE + 5;
	    }
	  else
	    {
	      my_putstr("\nJ'ai deja pris le badge.\nNe m'obligez pas a fouiller le cadavre d'avantage.\n\n");
	    }
	}
      else
	{
	  my_putstr("Je ne vois pas de ");
	  my_putstr(entree);
	  my_putstr(" dans cette salle !\n\n");
	}
      return (0);
    }
  /*FIN 08*/

  /*DEBUT 24*/
  if(salle == 24)
    {
      if (strcmp(entree, "combinaison") == 0)
	{
	  if (COMBI == 0)
	    {
	      my_putstr("Bonne idee, une combinaison anti-radiation ne pourra que m'etre utile !\n\n");
	      COMBI = 1;
	      SCORE = SCORE + 10;
	    }
	  else
	    {
	      my_putstr("J'ai deja pris la combinaison !\n\n");
	    }
	}
      else
	{
	  my_putstr("Je ne vois pas de ");
	  my_putstr(entree);
	  my_putstr(" dans cette salle !\n\n");
	}
      return (0);
    }
  /*FIN 24*/

  /*DEBUT 11*/
  if(salle == 11)
    {
      if (strcmp(entree, "medicaments") == 0)
	{
	  if (MEDIC_RESE > 0)
	    {
	      my_putstr("J'ai fouillé dans les armoires, et ai trouvé [x1] Médicament !\n\n");
	      player->medicaments = + 1;
	      MEDIC_RESE--;
	      SCORE = SCORE + 1;
	    }
	  else
	    {
	      my_putstr("Il n' y a plus de médicaments dans la piece !\n\n");
	    }
	}
      else
	{
	  my_putstr("Je ne vois pas de ");
	  my_putstr(entree);
	  my_putstr(" dans cette salle !\n\n");
	}
      return (0);
    }
  /*FIN 11*/
  my_putstr("\nIl n'y a rien a prendre dans cette salle vous savez...\n\n");
  return (1);
}