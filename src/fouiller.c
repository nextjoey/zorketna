#include "fonctions.h"
extern t_weapon weaponList;
extern t_attack attackList;
extern t_player jena;

void		fouiller()
{
  int		is_muni;
  int   is_medic;
  is_muni = 0;
  is_medic = 0;

  my_putstr("\nJ'ai fouillé la piece... Il y a...\n");
  if(MEDIC_MAP > 0)
    {
      my_putstr(" - un <medicament>\n");
      is_medic = 1;
    }
  if(MUNI_MAP > 0)
    {
      my_putstr(" - des <munitions>.\n");
      is_muni = 1;
    }
      /*SALLE 2*/
  if (SALLE == 2)
    {
      my_putstr("\n - un lit, pour prendre <du repos> [60secondes]\n\n");
      if (CARTE_COM == 0)
        {
	         my_putstr(" - une <carte> d'identification\n\n");
	      }
      return;
    }
  /*FIN SALLE02*/

  /*SALLE 04*/
  if (SALLE == 4)
    {
      if (((jena.weaponTab[1].available == 0) && (jena.weaponTab[2].available == 0)) || (MUNI_ARMU > 0))
	{
	  if ((jena.weaponTab[1].available == 0) && (jena.weaponTab[2].available == 0))
	    {
	      my_putstr("\n - un <pistolet> laser.\n");
	      my_putstr(" - un <fusil> plasma.\n");
	    }
	  if (MUNI_ARMU > 0)
	    {
	      my_putstr(" - des <munitions>.\n\n");
	    }
	}
      else
	my_putstr("\nC'est reparti ! Je vais peut etre finir par m'habituer a ce vaisseau glauque a l'atmosphere oppressante  !... Non ?\n\n");
      return;
    }
  /*FIN SALLE04*/

  /*DEBUT SALLE07*/
  if (SALLE == 7)
    {
      if (BOTTES == 0)
	{
	  my_putstr(" - des <bottes> en cuir.\n\n");
	}
      else
	{
	  my_putstr("\nJ'ai beau chercher, je vois rien a récuperer.\n\n");
	}
      return;
    }

  /*SALLE 08*/
  if (SALLE == 8)
    {
      if (CARTE_ACCES == 0)
	{
	  my_putstr(" - un <badge> d'acces.\n\n");
	}
      else if (MUNI_MAP == 0)
	{
	  my_putstr("\nJ'ai beau chercher, je vois rien a récuperer.\n\n");
	}
      return;
    }
  /*SALLE08*/

  /*SALLE 11 RESERVE*/
  else if (SALLE == 11)
    {
      if (MEDIC_RESE != 0)
	{
	  my_putstr(" - des <médicaments>.\n\n");
	}
      else if (MUNI_MAP == 0)
	{
	  my_putstr("\nJ'ai beau chercher, je vois rien a récuperer.\n\n");
	}
      return;
    }
      /*FIN SALLE11*/

      /*SALLE 24*/
  else if (SALLE == 24)
    {
      if (COMBI == 0)
	{
	  my_putstr(" - une <combinaison> anti-radiation.\n\n");
	}
      else
	{
	  my_putstr("\nJ'ai beau chercher, je vois rien a récuperer.\n\n");
	}
      return;
    }
  /*FIN SALLE24*/

  if (is_muni == 0 && is_medic == 0)
    my_putstr("\nRien.\n\n");
  else
    my_putstr("\n");
}
