
#include <string>
#include <vector>
#include <stdexcept>
#include "ParamedicCommander.hpp"
#include <iostream>

using namespace std;
void ParamedicCommander::superDamageOrHilSoldier(vector<vector<Soldier*>>&s,pair<int ,int > location){
        for (int  i = 0; i < s.size(); i++){
        for (int j = 0; j < s.size(); j++){
       if(s[i][j]!=nullptr&&s[location.first][location.second]->_numOfplayer==s[i][j]->_numOfplayer&&s[i][j]->Soldier_name=="Paramedic")     
          s[i][j]->damageOrHilSoldier(s,{i,j});     
          }     
        }
 }
 