#pragma once
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

namespace WarGame {
 class Soldier
{
const int HP;
public:
int _life;
int _attack;
int _numOfplayer;
string Soldier_name;
Soldier(int life,int attack,int numOfplayer,string name):_life(life),_attack(attack),_numOfplayer(numOfplayer),Soldier_name(name),HP(life){};
void update_fullHp(){_life=HP;}
int Hp(){return HP;}
int DistanceBetween(int r,int c,int i,int j){return sqrt(pow(abs(r-i),2)+pow(abs(c-j),2));};
virtual void damageOrHilSoldier(vector<vector<Soldier*>>&s,pair<int,int> location)=0 ;
virtual void superDamageOrHilSoldier(vector<vector<Soldier*>>&s,pair<int,int> location)=0;
virtual ~Soldier(){};

};
};
