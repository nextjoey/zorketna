#include "fonctions.h"

extern t_map g_map[10][4];

void            salle04(int salle, t_player *player)
{
  int           action;

  action = 0;
  g_map[1][2].visited = 1;
  g_map[1][2].content = 1;
  look(salle);
  while (action == 0)
    {
      /*On propose ici le prompt au joueur*/
      action = readline(salle, player);
      /*Traitement de laction :*/
      if (action == 1)
        {
	  my_putstr("\nVous etes sur ? Je trouvais la presence de toutes ces armes presque rassurante !\n");
	  g_map[1][2].content = 0;
	  salle = 3;
          salle03(salle, player);
        }
      if (action == 5)
        {
          prendre(salle, player);
	  action = 0;
        }
      if ((action >= 2) && (action <= 4))
        {
          erreur_depla(salle);
	  action = 0;
	}
    }
}
