
#pragma once

// #ifndef HEADER_FOOTCOMMANDER_H
// #define HEADER_FOOTCOMMANDER_H
#include <string>
#include <vector>
#include <stdexcept>
#include "FootSoldier.hpp"


namespace WarGame {
class FootCommander:public FootSoldier
{
public:
    FootCommander(int numOfplayer ):FootSoldier(150,20,numOfplayer,"Foot Commander"){};
    void damageOrHilSoldier(vector<vector<Soldier*>>&s,int i,int j )const;
    void superDamageOrHilSoldier(vector<vector<Soldier*>>&s,pair<int ,int > location)override;

     ~FootCommander(){};
};

};
//  #endif
