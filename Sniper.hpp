#pragma once
#include <string>
#include <vector>
#include <stdexcept>
#include "Soldier.hpp"

namespace WarGame {

class Sniper: public Soldier
{
public:
    Sniper(int numOfplayer ):Soldier(100,50,numOfplayer,"Sniper"){};
    Sniper(int life,int attak ,int numOfplayer,string name):Soldier(life,attak,numOfplayer,name){};
    void damageOrHilSoldier(vector<vector<Soldier*>>&s,pair<int,int> location)override;
    void superDamageOrHilSoldier(vector<vector<Soldier*>>&s,pair<int,int> location)override{};
    pair<int ,int >enemy_fullLife_location(vector<vector<Soldier*>>&s,pair<int,int> location);

     ~Sniper(){};

};
};

