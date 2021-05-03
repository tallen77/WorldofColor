// team clover
// elizabeth rubio, kathryn compton, taylor allen, janaye loper

// header file for Player class

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <fstream>
#include <cctype>
#include <string>
#include <unistd.h>
#include <iomanip>
#include "Player.h"
using namespace std;

// WeaponStats struct declaration 
// (needed in .h bc of WeaponStats struct object in Player class)
struct WeaponStats
{
	int damage;
    int defense;
    int reliability;
    int level;
};

// Player class declaration
class Player
{
  private:
    string name;
    string color;
    string weapon;
    WeaponStats w1; // WeaponStats struct object
    int coins;
 public:
    ////////////////////////////getters
    string getName()
    {return name;}
    string getColor()
    {return color;}
    string getWeapon()
    {return weapon;}
    int getCoins()
    {return coins;}
    int getDamage()
    {return w1.damage;}
    int getDefense()
    {return w1.defense;}
    int getReliability()
    {return w1.reliability; }
    int getWeaponLevel()
    {return w1.level;}
    ////////////////////////////setters
    void setName(string playerName)
    {name=playerName;}
    void setColor(string colorChoice)
    {color=colorChoice;}
    void setWeapon(string weaponChoice)
    {weapon=weaponChoice;}
    ///////////////////////////////default constructor
    Player();
    /////////////////////////////////copy constructor
    Player(const Player &obj)
    {
        name=obj.name;
        color=obj.color;
        weapon=obj.weapon;
        w1.damage=obj.w1.damage;
        w1.defense=obj.w1.defense;
        w1.reliability=obj.w1.reliability;
        w1.level=obj.w1.level;
        coins=obj.coins; 
    }
    ////////////////////////////////set coin amount
    void setCoins(int c)
    {coins=c;}
    //////////////////////////////////set weapon level & change stats
    void setWeaponLevel(int);
};

#endif
