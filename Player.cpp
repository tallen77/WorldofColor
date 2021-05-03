// team clover
// elizabeth rubio, kathryn compton, taylor allen, janaye loper

// implementation file for Player class

#include <iostream>
#include <fstream>
#include <cctype>
#include <string>
#include <unistd.h>
#include <iomanip>
#include "Player.h"
using namespace std;

//////////Player class member functions///////////

// default constructor
Player :: Player()
{
    name="defaultPlayer";
    color="blue";
    weapon="sword";
    coins=0;
}
// setWeaponLevel - changes weapon level and sets weapon stats accordingly
void Player :: setWeaponLevel(int l)
{
  w1.level=l;
  if(weapon=="club")////club levels
  {
    if(l==1)//level one
    {
      w1.damage=2;
      w1.defense=1;
      w1.reliability=2;
    }
    else if(l==2)//level two
    {
      w1.damage=3;
      w1.defense=2;
      w1.reliability=3;
    }
    else if(l==3)//level three
    {
      w1.damage=4;
      w1.defense=3;
      w1.reliability=4;
    }
  }
  else if(weapon=="sword")//sword levels
  {
    if(l==1)//level one
    {
      w1.damage=3;
      w1.defense=2;
      w1.reliability=3;
    }
    else if(l==2)//level two
    {
      w1.damage=4;
      w1.defense=3;
      w1.reliability=4;
    }
    else if(l==3)//level three
    {
      w1.damage=5;
      w1.defense=4;
      w1.reliability=5;
    }
  }
  else if(weapon=="crossbow")//crossbow levels
  {
    if(l==1)//level one
    {
      w1.damage=1;
      w1.defense=3;
      w1.reliability=1;
    }
    else if(l==2)//level two
    {
      w1.damage=2;
      w1.defense=4;
      w1.reliability=2;
    }
    else if(l==3)//level three
    {
      w1.damage=3;
      w1.defense=5;
      w1.reliability=3;
    }
  }
}
