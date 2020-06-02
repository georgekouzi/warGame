#include <string>
#include <vector>
#include <stdexcept>
#include "Board.hpp"
#include <iostream>

using namespace std;

 namespace WarGame{

    Soldier*& Board::operator[](std::pair<int,int> location){

 if(board[location.first][location.second]==nullptr){
 
 
//  cout<<location.first<<","<<location.second<<endl;
// board[location.first][location.second]->location_i=location.first;
// board[location.first][location.second]->location_j=location.second;

 return board[location.first][location.second] ;
    
    }
    else
    
     return board[location.first][location.second] ;

    
    }
    Soldier* Board::operator[](std::pair<int,int> location) const{
     Soldier *s= board[location.first][location.second];
     return  s;

    }
    // bool chackNwePoint()
    
//     void  movePlayerOne( std::pair<int,int> source, Board::MoveDIR direction){
//     if(direction==Board::MoveDIR::Up){
// //  chackNwePoint()

//     }
    
    
   // }
    void Board:: move(uint player_number, std::pair<int,int> source, MoveDIR direction){
		if (player_number == 1) {

			switch (direction)
			{

			 case Up:
                if (source.first < board.size()-1)
				{
                    if (board[source.first+1][source.second]==nullptr)
                    {
                        board[source.first +1][source.second] = board[source.first][source.second];
						 board[source.first][source.second] = nullptr;
                        board[source.first +1][source.second]->damageOrHilSoldier(board,{source.first +1,source.second});
                    }
                    else
                    {
                       throw invalid_argument("This location is occupied Please try another location ");
                    }
                }   
                else
                {
                       throw invalid_argument("This position in the board exceeds the limits of the game ");

                }
                    	 break;	 
			case Down:
				if (source.first >0 )
				{
                    if (board[source.first-1][source.second]==nullptr)
                    {
                        board[source.first -1][source.second] = board[source.first][source.second];
						 board[source.first][source.second] = nullptr;
                        board[source.first -1][source.second]->damageOrHilSoldier(board,{source.first -1,source.second});

                    }
                    else
                    {
                       throw invalid_argument("This location is occupied Please try another location ");
                    }
                }   
                else
                {
                       throw invalid_argument("This position in the board exceeds the limits of the game ");

                }
                    	 break;
			case Left:
				if (source.second < board[0].size() - 1)
                {
                    
                    if (board[source.first][source.second+1]==nullptr)
                    {
                        board[source.first ][source.second+1] = board[source.first][source.second];
						 board[source.first][source.second] = nullptr;
                        board[source.first ][source.second+1]->damageOrHilSoldier(board,{source.first ,source.second+1});

                    }
                    else
                    {
                       throw invalid_argument("This location is occupied Please try another location ");
                    }
                }   
                else
                {
                       throw invalid_argument("This position in the board exceeds the limits of the game ");

                }
                    	 break;
			case Right:

                 if (source.second > 0)
                {
                    
                    if (board[source.first][source.second-1]==nullptr)
                    {
                        board[source.first][source.second-1] = board[source.first][source.second];
						 board[source.first][source.second] = nullptr;
                        board[source.first ][source.second-1]->damageOrHilSoldier(board,{source.first,source.second-1});

                    }
                    else
                    {
                       throw invalid_argument("This location is occupied Please try another location ");
                    }
                }   
                else
                {
                       throw invalid_argument("This position in the board exceeds the limits of the game ");

                }
                    	 break;
            }
        }
        else {
            switch (direction)
			{

            case Up:

                if (source.first > 0)
				{
                    if (board[source.first-1][source.second]==nullptr)
                    {
                        board[source.first - 1][source.second] = board[source.first][source.second];
						 board[source.first][source.second] = nullptr;
                        board[source.first -1][source.second]->damageOrHilSoldier(board,{source.first -1,source.second});

                    }
                    else
                    {
                       throw invalid_argument("This location is occupied Please try another location ");
                    }
                }   
                else
                {
                       throw invalid_argument("This position in the board exceeds the limits of the game ");

                }
                    	 break;	 
			case Down:
				if (source.first <  board.size()- 1)
				{
                    if (board[source.first+1][source.second]==nullptr)
                    {
                        board[source.first +1][source.second] = board[source.first][source.second];
						 board[source.first][source.second] = nullptr;
                        board[source.first +1][source.second]->damageOrHilSoldier(board,{source.first +1,source.second});

                    }
                    else
                    {
                       throw invalid_argument("This location is occupied Please try another location ");
                    }
                }   
                else
                {
                       throw invalid_argument("This position in the board exceeds the limits of the game ");

                }
                    	 break;
			case Right:
                if (source.second < board[0].size() - 1){
                    if (board[source.first][source.second+1]==nullptr)
                    {

                        board[source.first ][source.second+1] = board[source.first][source.second];
						 board[source.first][source.second] = nullptr;
                        board[source.first ][source.second+1]->damageOrHilSoldier(board,{source.first ,source.second+1});

                    }
                    else
                    {
                       throw invalid_argument("This location is occupied Please try another location ");
                    }
                }   
                else
                {
                       throw invalid_argument("This position in the board exceeds the limits of the game ");

                }
                    	 break;
			case Left:
				 if (source.second > 0)
                {
                    
                    if (board[source.first][source.second-1]==nullptr)
                    {
                        board[source.first][source.second-1] = board[source.first][source.second];
						 board[source.first][source.second] = nullptr;
                        board[source.first ][source.second-1]->damageOrHilSoldier(board,{source.first,source.second-1});

                    }
                    else
                    {
                       throw invalid_argument("This location is occupied Please try another location ");
                    }
                }   
                else
                {
                       throw invalid_argument("This position in the board exceeds the limits of the game ");

                }
                    	 break;
            }
        }
	}
   
   void Board::printBoard(){
for (int i = 0; i <board.size(); i++){
    for (int  j = 0; j < board[0].size(); j++){
    if(board[i][j]!=0)
    cout<<board[i][j]->_numOfplayer<<"-"<<"s"<<" ,";
    else
    
    cout<<"0-0"<<" ,";
    
    }
cout<<endl;
}
   }
    bool Board::has_soldiers(uint player_number) const {

    for (int i = 0; i <board.size(); i++){
    for (int  j = 0; j < board[0].size(); j++){
    if(board[i][j]!=nullptr&&board[i][j]->_numOfplayer==player_number)
    return true;
    }
    
    }
    return false;
    }
    
    };




 


