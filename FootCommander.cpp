
#include <string>
#include <vector>
#include <stdexcept>
#include "FootCommander.hpp"
#include <iostream>

using namespace std;
 namespace WarGame{
void FootCommander::superDamageOrHilSoldier(vector<vector<Soldier*>>&s,pair<int ,int > location){
        for (int  i = 0; i < s.size(); i++){
        for (int j = 0; j < s.size(); j++){
        if(s[i][j]!=nullptr&&s[location.first][location.second]->_numOfplayer==s[i][j]->_numOfplayer&&s[i][j]->Soldier_name=="Foot Soldier"){
              s[i][j]->damageOrHilSoldier(s,{i,j});     
        }
        
         }
      }


}
 };