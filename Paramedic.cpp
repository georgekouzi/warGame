#include <string>
#include <vector>
#include <stdexcept>
#include "Paramedic.hpp"
#include <iostream>

using namespace std;

 
 void Paramedic::damageOrHilSoldier(vector<vector<Soldier*>>&s,pair<int ,int > location) {
  for (int  i = 0; i < s.size(); i++){
    for (int j = 0; j < s.size(); j++){
     if(s[i][j]!=nullptr&&s[location.first][location.second]->_numOfplayer==s[i][j]->_numOfplayer&&s[i][j]&&DistanceBetween(location.first,location.second,i,j)==1){ 
     s[i][j]->update_fullHp();
     cout<<"A "<<s[location.first][location.second]->Soldier_name<<" of Group number "<<s[location.first][location.second]->_numOfplayer<<" Heals "<< s[i][j]->Soldier_name<<" in  position:  "<<i<<","<<j<< " on the board and his update life his full: "<< s[i][j]->_life <<endl;

     }
        }
     }

if(s[location.first][location.second]->Soldier_name=="Paramedic Commander") s[location.first][location.second]->superDamageOrHilSoldier(s, {location.first,location.second});


 }


 