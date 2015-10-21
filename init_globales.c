#include "fonctions.h"


t_weapon weaponList[NB_WEAPON] = {
  {1, "Mains", 1},
  {0, "Pistolet Laser", 30},
  {0, "Fusil a plasma", 40}
};

// idem ici pour l'enemi
t_attack attackList[NB_ATTACK] = {
  {"Charge", 20},
  {"Melee", 35}
};

t_player jena[1]= {
  {1, 100, 100, 2, weaponList}
};

void	init_globales()
{
  /*VARIABLES GLOBALES*/
  COMBI = 0;
 CARTE_ACCES = 0;
 CARTE_COM = 0;
 MEDIC_RESE = 2;
 DIAG_S09A08 = 0;
 DIAG_S12A09 = 0;
 SCORE = 0;
 ARME_EQUIP = 0;
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
