#include <string>
#include <vector>
#include <stdexcept>
#include "SniperCommander.hpp"
#include <iostream>

using namespace std;
 namespace WarGame{
void SniperCommander::superDamageOrHilSoldier(vector<vector<Soldier*>>&s,pair<int ,int > location){
        for (int  i = 0; i < s.size(); i++){
        for (int j = 0; j < s.size(); j++){
        if(s[i][j]!=nullptr&&s[location.first][location.second]->_numOfplayer==s[i][j]->_numOfplayer&&s[i][j]->Soldier_name=="Sniper"){
        s[i][j]->superDamageOrHilSoldier(s,{i,j});
             
        }
        }
        }
 }
 };