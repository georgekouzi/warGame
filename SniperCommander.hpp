
#pragma once
#include <string>
#include <vector>
#include <stdexcept>
#include "Sniper.hpp"
class SniperCommander:public Sniper
{
public:
    SniperCommander(int numOfplayer ):Sniper(120,100,numOfplayer,"Sniper Commander"){};
    void damageOrHilSoldier(vector<vector<Soldier*>>&s,int i,int j )const;
    void superDamageOrHilSoldier(vector<vector<Soldier*>>&s,pair<int ,int > location)override;
     ~SniperCommander(){};
};


