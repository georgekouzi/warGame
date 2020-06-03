#pragma once
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

 class Soldier
{
const int HP;
public:
int _life;
int _attack;
int _numOfplayer ;
string Soldier_name;
Soldier( const int life=0, const int attack=0, const int numOfplayer=0, const string name="Soldier"):_life(life),_attack(attack),_numOfplayer(numOfplayer),Soldier_name(name),HP(life){};
void update_fullHp(){_life=HP;}
int Hp(){return HP;}
double DistanceBetween(int r,int c,int i,int j){return sqrt(pow(abs(r-i),2)+pow(abs(c-j),2));};
virtual void damageOrHilSoldier(vector<vector<Soldier*>>&s,pair<int,int> location){};
virtual void superDamageOrHilSoldier(vector<vector<Soldier*>>&s,pair<int,int> location){};
virtual~Soldier(){};

};

