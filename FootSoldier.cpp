#include <string>
#include <vector>
#include <stdexcept>
#include "FootSoldier.hpp"
#include <iostream>
#include<float.h>
#include <cmath>
using namespace std;
 namespace WarGame{
 

pair<int ,int > FootSoldier:: closerLocation(vector<vector<Soldier*>>&s,pair<int,int> location ) {
double mindis=__DBL_MAX__;
int enr,enc;
pair<int ,int > distneiton;
for (int  i = 0; i < s.size(); i++){
for (int j = 0; j < s[0].size(); j++){
if(s[i][j]!=nullptr&&s[location.first][location.second]->_numOfplayer!=s[i][j]->_numOfplayer&&mindis>DistanceBetween( location.first, location.second , i, j)){
mindis=DistanceBetween( location.first, location.second , i, j);
distneiton={i,j};
}
}
}
return distneiton;
};
 
 
 
 void FootSoldier::damageOrHilSoldier(vector<vector<Soldier*>>&s,pair<int ,int > location) {
pair<int ,int > distneiton_Attak=closerLocation(s,{location.first,location.second});
s[distneiton_Attak.first][distneiton_Attak.second]->_life-=s[location.first][location.second]->_attack;
cout<<"A "<<s[location.first][location.second]->Soldier_name<<" of Group number: "<<s[location.first][location.second]->_numOfplayer<<" Attaking "<< s[distneiton_Attak.first][distneiton_Attak.second]->Soldier_name<<" from Group number: "<<s[distneiton_Attak.first][distneiton_Attak.second]->_numOfplayer<<" in  position:  "<<distneiton_Attak.first<<","<<distneiton_Attak.second<<" on the board and he lose: "<<s[location.first][location.second]->_attack  <<" HP, and his update life now his: "<< s[distneiton_Attak.first][distneiton_Attak.second]->_life<<"/"<<s[distneiton_Attak.first][distneiton_Attak.second]->Hp()<<endl;

if(s[distneiton_Attak.first][distneiton_Attak.second]->_life<=0){
cout<<s[distneiton_Attak.first][distneiton_Attak.second]->Soldier_name<<" of Group number "<<s[distneiton_Attak.first][distneiton_Attak.second]->_numOfplayer<<" died!!!!! "<<endl;
    delete s[distneiton_Attak.first][distneiton_Attak.second];
    s[distneiton_Attak.first][distneiton_Attak.second]=nullptr;
}

if(s[location.first][location.second]->Soldier_name=="Foot Commander") s[location.first][location.second]->superDamageOrHilSoldier(s, {location.first,location.second});

}
      


 };