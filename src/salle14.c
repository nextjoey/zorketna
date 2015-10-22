#include "fonctions.h"

extern t_map g_map[10][4];
extern t_weapon weaponList;
extern t_attack attackList;
extern t_player jena;

void            salle14(int salle)
{
  int           action;
  int           b;
  char		*mort;
  int		choix;

  choix = 0;
  mort = NULL;
  action = 0;
  g_map[5][0].visited = 1;
  g_map[5][0].content = 1;
  look(salle);
  srand(time(NULL));
  b = rand();
  if ((b%4 == 0) && ((jena.weaponTab[1].available == 1) || (jena.weaponTab[2].available == 1)))
    {
      start_battle();
    }
  while (action == 0)
    {
      /*On propose ici le prompt au joueur*/
      action = readline(salle);
      /*Traitement de laction :*/
      if (action == 2)
        {
	  my_putstr("\nCe hangard ne m'inspire vraiment pas,je prefere faire demi-tour.\n\n");
	  g_map[5][0].content = 0;
	  salle = 13;
          salle13(salle);
        }
      if (action == 4)
        {
	  my_putstr("\nVous etes sur de vouloir aller par la ???\nL'air c'est extrement rafrechie ici... ce n'est pas un bon signe\n\n");
	  my_putstr("Dois-je continuer ???\n   >");
	  while (choix == 0)
	    {
	      mort = readLine();
	      if (strcmp(mort, "oui") == 0)
		choix = 1;
	      else if (strcmp(mort, "non") == 0)
		choix = 2;
	    }
	  if (choix == 1)
	    {
	      if (COMBI == 0)
		{
		  my_putstr("J'entre dans le hangar !\nIl y a un enorme trou dans la coque !\n");
		  my_putstr("Je me sens mal !...\n");
		  sleep(3);
		  my_putstr("Je...\n");
		  gameover();
		  score();
		}
	      else
		{
		  my_putstr("\nPfiou!!! Heureusement que j'ai ma combinaison sinon je ne pense pas survivre.\n\n");
		  g_map[5][0].content = 0;
		  salle = 15;
		  salle15(salle);
		  choix = 0;
		}
	    }
	  else
	    {
	      my_putstr("\nVous avez surement raison une foi de plus,je vais vous ecouter\n\n");
	      choix = 0;
	      action = 0;
	    }
	}
      /*Prendre*/
      if (action == 5)
        {
          prendre(salle);
          action = 0;
        }
      /*fin prendre*/
      if ((action == 1) || (action == 3))
	{
	  erreur_depla(salle);
	  action = 0;
	}
    }
}
