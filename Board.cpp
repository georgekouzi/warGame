#include <string>
#include <vector>
#include <stdexcept>
#include "Board.hpp"
#include <iostream>

using namespace std;

 namespace WarGame{

    Soldier*& Board::operator[](std::pair<int,int> location){
 return board[location.first][location.second] ;
    }
    
    
    Soldier* Board::operator[](std::pair<int,int> location) const{
     if(board[location.first][location.second]==nullptr){
 
 return board[location.first][location.second] ;
    
    }
    else
    
        throw invalid_argument("This location is occupied Please try another location ");
    }
    
    
    void Board:: move(uint player_number, std::pair<int,int> source, MoveDIR direction){
                      if(source.first>=board.size()||source.second>=board.size()||board[source.first][source.second]==nullptr)
                       throw invalid_argument("There is no soldier in this place ");
        
        else
            switch (direction){
			                    

			 case Up:
                if (source.first < board.size()-1)
				{
                    if (board[source.first+1][source.second]==nullptr)
                    {
                        board[source.first +1][source.second] = board[source.first][source.second];
						 board[source.first][source.second] = nullptr;
                        if(has_soldiers(enplnum(board[source.first+1 ][source.second]->_numOfplayer))){
                        board[source.first +1][source.second]->damageOrHilSoldier(board,{source.first +1,source.second});
                     }
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
                      if(has_soldiers(enplnum(board[source.first -1][source.second]->_numOfplayer))){
                        board[source.first -1][source.second]->damageOrHilSoldier(board,{source.first -1,source.second});
                      }
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
                         if(has_soldiers(enplnum(board[source.first ][source.second+1]->_numOfplayer))){
                        board[source.first ][source.second+1]->damageOrHilSoldier(board,{source.first ,source.second+1});
                         }
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
                      if(has_soldiers(enplnum(board[source.first ][source.second-1]->_numOfplayer))){
                        board[source.first ][source.second-1]->damageOrHilSoldier(board,{source.first,source.second-1});
                      }
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
     int Board::enplnum(uint n){
         if(n==1)return 2;
         else return 1;
     } 
 
    //////////////////////////this my move function!!!
    // void Board:: move(uint player_number, std::pair<int,int> source, MoveDIR direction){
	// 	if (player_number == 1) {

	// 		switch (direction)
	// 		{

	// 		 case Up:
    //             if (source.first < board.size()-1)
	// 			{
    //                 if (board[source.first+1][source.second]==nullptr)
    //                 {
    //                     board[source.first +1][source.second] = board[source.first][source.second];
	// 					 board[source.first][source.second] = nullptr;
    //                     board[source.first +1][source.second]->damageOrHilSoldier(board,{source.first +1,source.second});
    //                 }
    //                 else
    //                 {
    //                    throw invalid_argument("This location is occupied Please try another location ");
    //                 }
    //             }   
    //             else
    //             {
    //                    throw invalid_argument("This position in the board exceeds the limits of the game ");

    //             }
    //                 	 break;	 
	// 		case Down:
	// 			if (source.first >0 )
	// 			{
    //                 if (board[source.first-1][source.second]==nullptr)
    //                 {
    //                     board[source.first -1][source.second] = board[source.first][source.second];
	// 					 board[source.first][source.second] = nullptr;
    //                     board[source.first -1][source.second]->damageOrHilSoldier(board,{source.first -1,source.second});

    //                 }
    //                 else
    //                 {
    //                    throw invalid_argument("This location is occupied Please try another location ");
    //                 }
    //             }   
    //             else
    //             {
    //                    throw invalid_argument("This position in the board exceeds the limits of the game ");

    //             }
    //                 	 break;
	// 		case Left:
	// 			if (source.second < board[0].size() - 1)
    //             {
                    
    //                 if (board[source.first][source.second+1]==nullptr)
    //                 {
    //                     board[source.first ][source.second+1] = board[source.first][source.second];
	// 					 board[source.first][source.second] = nullptr;
    //                     board[source.first ][source.second+1]->damageOrHilSoldier(board,{source.first ,source.second+1});

    //                 }
    //                 else
    //                 {
    //                    throw invalid_argument("This location is occupied Please try another location ");
    //                 }
    //             }   
    //             else
    //             {
    //                    throw invalid_argument("This position in the board exceeds the limits of the game ");

    //             }
    //                 	 break;
	// 		case Right:

    //              if (source.second > 0)
    //             {
                    
    //                 if (board[source.first][source.second-1]==nullptr)
    //                 {
    //                     board[source.first][source.second-1] = board[source.first][source.second];
	// 					 board[source.first][source.second] = nullptr;
    //                     board[source.first ][source.second-1]->damageOrHilSoldier(board,{source.first,source.second-1});

    //                 }
    //                 else
    //                 {
    //                    throw invalid_argument("This location is occupied Please try another location ");
    //                 }
    //             }   
    //             else
    //             {
    //                    throw invalid_argument("This position in the board exceeds the limits of the game ");

    //             }
    //                 	 break;
    //         }
    //     }
    //     else {
           
           
           
    //        /////////////////////////////////////////////////////////
    //         switch (direction)
	// 		{

    //         case Up:

    //             if (source.first > 0)
	// 			{
    //                 if (board[source.first-1][source.second]==nullptr)
    //                 {
    //                     board[source.first - 1][source.second] = board[source.first][source.second];
	// 					 board[source.first][source.second] = nullptr;
    //                     board[source.first -1][source.second]->damageOrHilSoldier(board,{source.first -1,source.second});

    //                 }
    //                 else
    //                 {
    //                    throw invalid_argument("This location is occupied Please try another location ");
    //                 }
    //             }   
    //             else
    //             {
    //                    throw invalid_argument("This position in the board exceeds the limits of the game ");

    //             }
    //                 	 break;	 
	// 		case Down:
	// 			if (source.first <  board.size()- 1)
	// 			{
    //                 if (board[source.first+1][source.second]==nullptr)
    //                 {
    //                     board[source.first +1][source.second] = board[source.first][source.second];
	// 					 board[source.first][source.second] = nullptr;
    //                     board[source.first +1][source.second]->damageOrHilSoldier(board,{source.first +1,source.second});

    //                 }
    //                 else
    //                 {
    //                    throw invalid_argument("This location is occupied Please try another location ");
    //                 }
    //             }   
    //             else
    //             {
    //                    throw invalid_argument("This position in the board exceeds the limits of the game ");

    //             }
    //                 	 break;
	// 		case Right:
    //             if (source.second < board[0].size() - 1){
    //                 if (board[source.first][source.second+1]==nullptr)
    //                 {

    //                     board[source.first ][source.second+1] = board[source.first][source.second];
	// 					 board[source.first][source.second] = nullptr;
    //                     board[source.first ][source.second+1]->damageOrHilSoldier(board,{source.first ,source.second+1});

    //                 }
    //                 else
    //                 {
    //                    throw invalid_argument("This location is occupied Please try another location ");
    //                 }
    //             }   
    //             else
    //             {
    //                    throw invalid_argument("This position in the board exceeds the limits of the game ");

    //             }
    //                 	 break;
	// 		case Left:
	// 			 if (source.second > 0)
    //             {
                    
    //                 if (board[source.first][source.second-1]==nullptr)
    //                 {
    //                     board[source.first][source.second-1] = board[source.first][source.second];
	// 					 board[source.first][source.second] = nullptr;
    //                     board[source.first ][source.second-1]->damageOrHilSoldier(board,{source.first,source.second-1});

    //                 }
    //                 else
    //                 {
    //                    throw invalid_argument("This location is occupied Please try another location ");
    //                 }
    //             }   
    //             else
    //             {
    //                    throw invalid_argument("This position in the board exceeds the limits of the game ");

    //             }
    //                 	 break;
    //         }
    //     }
	// }
   
  
    bool Board::has_soldiers(uint player_number)const{

    for (int i = 0; i <board.size(); i++){
    for (int  j = 0; j < board[0].size(); j++){
    if(board[i][j]!=nullptr&&board[i][j]->_numOfplayer==player_number)
    return true;
    }
    
    }
    return false;
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
 };


