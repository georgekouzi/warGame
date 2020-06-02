#pragma once
#include <string>
#include <vector>
#include <stdexcept>
#include "Soldier.hpp"

namespace WarGame {

class FootSoldier: public Soldier
{
public:
    
     FootSoldier(int numOfplayer ):Soldier(100,10,numOfplayer,"Foot Soldier"){};
     FootSoldier(int life,int attak ,int numOfplayer,string name):Soldier(life,attak,numOfplayer,name){};
      void damageOrHilSoldier(vector<vector<Soldier*>>&s,pair<int,int> location)override;
      void superDamageOrHilSoldier(vector<vector<Soldier*>>&s,pair<int,int> location)override{};      
      pair<int ,int >closerLocation(vector<vector<Soldier*>>&s,pair<int,int> location);

     ~FootSoldier(){};

};
};

