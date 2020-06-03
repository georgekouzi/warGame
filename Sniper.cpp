#include <string>
#include <vector>
#include <stdexcept>
#include "Sniper.hpp"
#include <iostream>

using namespace std;
 pair<int ,int > Sniper:: enemy_fullLife_location(vector<vector<Soldier*>>&s,pair<int,int> location ) {
double enMaxLife=0;
pair<int ,int > distneiton;
for (int  i = 0; i < s.size(); i++){
for (int j = 0; j < s[0].size(); j++){
if(s[i][j]!=nullptr&&s[location.first][location.second]->_numOfplayer!=s[i][j]->_numOfplayer&&enMaxLife<s[i][j]->_life){
enMaxLife=s[i][j]->_life;
distneiton={i,j};
}
}
}

return distneiton;
};
 
 void Sniper::damageOrHilSoldier(vector<vector<Soldier*>>&s,pair<int ,int > location) {
pair<int ,int > distneiton_Attak=enemy_fullLife_location(s,{location.first,location.second});
cout<<distneiton_Attak.first<<distneiton_Attak.second<<endl;

s[distneiton_Attak.first][distneiton_Attak.second]->_life-=s[location.first][location.second]->_attack;
cout<<"A "<<s[location.first][location.second]->Soldier_name<<" of Group number: "<<s[location.first][location.second]->_numOfplayer<<" Attaking "<< s[distneiton_Attak.first][distneiton_Attak.second]->Soldier_name<<" from Group number: "<<s[distneiton_Attak.first][distneiton_Attak.second]->_numOfplayer<<" in  position:  "<<distneiton_Attak.first<<","<<distneiton_Attak.second<<" on the board and he lose: "<<s[location.first][location.second]->_attack  <<" HP, and his update life now his: "<< s[distneiton_Attak.first][distneiton_Attak.second]->_life<<"/"<<s[distneiton_Attak.first][distneiton_Attak.second]->Hp()<<endl;

if(s[distneiton_Attak.first][distneiton_Attak.second]->_life<=0){
cout<<s[distneiton_Attak.first][distneiton_Attak.second]->Soldier_name<<" of Group number "<<s[distneiton_Attak.first][distneiton_Attak.second]->_numOfplayer<<" died!!!!! "<<endl;
    delete s[distneiton_Attak.first][distneiton_Attak.second];
    s[distneiton_Attak.first][distneiton_Attak.second]=nullptr;
}
if(s[location.first][location.second]->Soldier_name=="Sniper Commander") s[location.first][location.second]->superDamageOrHilSoldier(s, {location.first,location.second});

}



 