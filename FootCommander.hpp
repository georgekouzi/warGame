
#pragma once
#include <string>
#include <vector>
#include <stdexcept>
#include "FootSoldier.hpp"


class FootCommander:public FootSoldier
{
public:
    FootCommander(int numOfplayer ):FootSoldier(150,20,numOfplayer,"Foot Commander"){};
    void damageOrHilSoldier(vector<vector<Soldier*>>&s,int i,int j )const;
    void superDamageOrHilSoldier(vector<vector<Soldier*>>&s,pair<int ,int > location)override;

     ~FootCommander(){};
};


