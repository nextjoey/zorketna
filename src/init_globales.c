#include "fonctions.h"

int	xpNeeded(int lvl)
{
  const	int EXP[10] = {15,30,45,60,75,90,110,130,150,200};

  return lvl < 10 ? EXP[lvl] : -1;
}

t_weapon weaponList[NB_WEAPON] = {
  //Available, NAME, Attaque, Munition utilisee
  {1, "MAINS", 1, 0},
  {0, "PISTOLET LASER", 30, 1},
  {0, "FUSIL A PLASMA", 40, 2}
};

t_player jena[1]= {
  //lvl, exp, exp next lvl,hp, hp max, medicaments, munitions, munitionsmax, tab d'armes
  {1, 0, 100, 100, 0, 0, 0, 50, weaponList}
};

void	init_globales()
{
  /*VARIABLES GLOBALES*/
  ARME_EQUIP = 0;
  BOTTES = 0;
  COMBI = 0;
  CARTE_ACCES = 0;
  CARTE_COM = 0;
  DOUCHE_TAKEN = 0;
  DIAG_S09A08 = 0;
  DIAG_S12A09 = 0;
  DIAG_S03A02 = 0;
  ERREUR_PROMPT = 0;
  MUNI_ARMU = 16;
  MUNI_MAP = 0;
  MEDIC_MAP = 0;
  MEDIC_RESE = 5;
  QUISUISJE = 0;
  SCORE = 0;
  /*FIN*/
}

/*MAP*/
t_map g_map[10][4] = {
  {
    {0, 7, {0,0,0,0}, 0, 0}, {1, 7, {0,0,1,0}, 0, 0}, {0, 7, {0,0,0,0}, 0, 0}, {0, 7, {0,0,0,0}, 0, 0}
  }, {
    {1, 7, {0,1,0,0}, 0, 0}, {1, 7, {1,1,1,1}, 0, 0}, {1, 7, {0,0,0,1}, 0, 0}, {0, 7, {0,0,0,0}, 0, 0}
  }, {
    {1, 7, {0,1,1,0}, 0, 0}, {1, 7, {1,1,0,1}, 0, 0}, {1, 7, {0,0,1,1}, 0, 0}, {0, 7, {0,0,0,0}, 0, 0}
  }, {
    {1, 7, {1,1,1,0}, 0, 0}, {1, 7, {0,1,1,1}, 0, 0}, {1, 7, {1,0,0,1}, 0, 0}, {0, 7, {0,0,0,0}, 0, 0}
  }, {
    {1, 7, {1,0,0,0}, 0, 0}, {1, 7, {1,0,1,0}, 0, 0}, {0, 7, {0,0,0,0}, 0, 0}, {0, 7, {0,0,0,0}, 0, 0}
  }, {
    {1, 7, {0,1,1,0}, 0, 0}, {1, 7, {1,1,1,1}, 0, 0}, {1, 7, {0,0,1,1}, 0, 0}, {0, 7, {0,0,0,0}, 0, 0}
  }, {
    {1, 7, {1,0,1,0}, 0, 0}, {1, 7, {1,0,1,0}, 0, 0}, {1, 7, {1,0,0,0}, 0, 0}, {0, 7, {0,0,0,0}, 0, 0}
  }, {
    {1, 7, {1,0,0,0}, 0, 0}, {1, 7, {1,0,1,0}, 0, 0}, {0, 7, {0,0,0,0}, 0, 0}, {0, 7, {0,0,0,0}, 0, 0}
  }, {
    {0, 7, {0,0,0,0}, 0, 0}, {1, 7, {1,1,1,0}, 0, 0}, {1, 7, {0,0,1,1}, 0, 0}, {0, 7, {0,0,0,0}, 0, 0}
  }, {
    {0, 7, {0,0,0,0}, 0, 0}, {1, 7, {1,1,0,0}, 0, 0}, {1, 7, {1,0,0,1}, 0, 0}, {0, 7, {0,0,0,0}, 0, 0}
  }
};
