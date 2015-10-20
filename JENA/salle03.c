#include "fonctions.h"

extern t_map g_map[10][4];

void            salle03(int salle, t_player *player)
{
  int           action;
  char 		*entree;

  entree = malloc(sizeof(char*));
  action = 0;
  g_map[1][1].visited = 1;
  g_map[1][1].content = 1;
  look(salle);
  while (action == 0)
    {
      /*On propose ici le prompt au joueur*/
      action = readline(salle, player);
      /*Traitement de laction :*/
      if (action == 1)
        {
	  system("cat code_com.txt");
	  my_putstr("\n");
	  entree = readLine_code();
	  if ((strcmp(entree, "jena") == 0) || ((strcmp(entree, "JENA") == 0)))
	    {
	      my_putstr("Oh mais jai trouver le code, c'est mon propres prenom donc cela veut dire que ...\n");
	      sleep(2);
	      my_putstr("Je");
	      sleep(2);
	      my_putstr("\n...\n");
	      sleep(2);
	      my_putstr("C'est mon quartier ?\n\n");
	      g_map[1][1].content = 0;
	      salle = 2;
	      salle02(salle, player);
	    }
	  else
	    {
	      my_putstr("\nMAUVAIS CODE.\nOups, on dirait que ce n'est pas demain la veille que l'ont trouvera le code!\n\n");
	      action = 0;
	    }
	}
      if (action == 2)
	{
	  if (CARTE_COM == 0)
	    {
	      my_putstr("\nVous avez besoin d'une carte pour entrer.\n\n");
	      action = 0;
	    }
	  else
	    {
	      my_putstr("\nTien c'ette porte un detecteur de carte magnetique, et si j'esayer la mienne...\n");
	      sleep(3);
	      my_putstr("\nMais c'ette carte me donne un grand acces on dirait.\n\n");
	      g_map[1][1].content = 0;
	      salle = 4;
	      salle04(salle, player);
	    }
	}
      if (action == 3)
	{
	  system("cat code_pil.txt");
	  my_putstr("\n");
	  entree = readLine_code();
	  if ((strcmp(entree, "ICARUS") == 0))
	    {
	      my_putstr("\nApparament aucuns code ne me resiste !\n\n");
	      g_map[1][1].content = 0;
	      salle = 1;
	      salle01(salle, player);
	    }
	  else
	    {
	      my_putstr("\nMAUVAIS CODE.\nLe protocole de securite est trop dur pour moi ...\n\n");
	      action = 0;
	    }
	}
      if (action == 4)
	{
	  my_putstr("\nJe suis presque sur d'avoir fini avec ces trois salles.\n\n");
	  g_map[1][1].content = 0;
	  salle = 6;
	  salle06(salle, player);
	}
      if (action == 5)
	{
	  prendre(salle, player);
	  action = 0;
	}
    }
}