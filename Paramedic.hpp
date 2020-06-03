#pragma once
#include <string>
#include <vector>
#include <stdexcept>
#include "Soldier.hpp"


class Paramedic: public Soldier
{

public:
 
    Paramedic(int numOfplayer ):Soldier(100,0,numOfplayer,"Paramedic"){};
    Paramedic(int life,int attak ,int numOfplayer,string name):Soldier(life,attak,numOfplayer,name){};
    void damageOrHilSoldier(vector<vector<Soldier*>>&s,pair<int,int> location)override;
    void superDamageOrHilSoldier(vector<vector<Soldier*>>&s,pair<int,int> location)override{};
     ~Paramedic(){};

};


