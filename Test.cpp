#include "doctest.h"
#include "FootSoldier.hpp"
#include "FootCommander.hpp"
#include"Paramedic.hpp"
#include"ParamedicCommander.hpp"
#include"Sniper.hpp"
#include"SniperCommander.hpp"
#include "Board.hpp"
#include <iostream>
using namespace std;
namespace WarGame{



TEST_CASE("Test-1-soldiers")
{
    		Board board(8,8);

            CHECK(board.has_soldiers(1)==false);
            board[{0,0}] = new FootSoldier(1);
            board[{0,1}] = new FootSoldier(1);
			board[{0,2}] = new SniperCommander(1);
            board[{0,3}] = new FootCommander(1);
			board[{0,4}] = new FootSoldier(1);
            board[{0,5}] = new Sniper(1);
            board[{0,6}] = new ParamedicCommander(1);
			board[{0,7}] = new Paramedic(1);
            CHECK(board.has_soldiers(1)==true);
            
            CHECK(board.has_soldiers(2)==false);
            board[{7,0}] = new FootSoldier(2);
            board[{7,1}] = new FootSoldier(2);
			board[{7,2}] = new SniperCommander(2);
            board[{7,3}] = new FootCommander(2);
			board[{7,4}] = new FootSoldier(2);
            board[{7,5}] = new Sniper(2);
            board[{7,6}] = new ParamedicCommander(2);
			board[{7,7}] = new Paramedic(2);
            CHECK(board.has_soldiers(2)==true);
   
    CHECK(board[{0,0}]->_numOfplayer == 1);
    CHECK(board[{0,1}]->_numOfplayer == 1);
	CHECK(board[{0,2}]->_numOfplayer == 1);
	CHECK(board[{0,3}]->_numOfplayer == 1);
	CHECK(board[{0,4}]->_numOfplayer == 1);
	CHECK(board[{0,5}]->_numOfplayer == 1);
	CHECK(board[{0,6}]->_numOfplayer == 1);
	CHECK(board[{0,7}]->_numOfplayer == 1);
    CHECK(board[{7,0}]->_numOfplayer == 2);
    CHECK(board[{7,1}]->_numOfplayer == 2);
	CHECK(board[{7,2}]->_numOfplayer == 2);
	CHECK(board[{7,3}]->_numOfplayer == 2);
	CHECK(board[{7,4}]->_numOfplayer == 2);
	CHECK(board[{7,5}]->_numOfplayer == 2);
	CHECK(board[{7,6}]->_numOfplayer == 2);
	CHECK(board[{7,7}]->_numOfplayer == 2);
    
    CHECK(board[{0,2}]->_life == 120);//SniperCommander
	CHECK(board[{0,3}]->_life == 150);//FootCommander
	CHECK(board[{0,4}]->_life == 100);//FootSoldier
	CHECK(board[{0,5}]->_life == 100);//Sniper
	CHECK(board[{0,6}]->_life == 200);//ParamedicCommander
	CHECK(board[{0,7}]->_life == 100);//Paramedic
    
    CHECK(board[{0,2}]->_attack == 100);//SniperCommander
	CHECK(board[{0,3}]->_attack == 20);//FootCommander
	CHECK(board[{0,4}]->_attack == 10);//FootSoldier
	CHECK(board[{0,5}]->_attack == 50);//Sniper
	CHECK(board[{0,6}]->_attack == 0);//ParamedicCommander
	CHECK(board[{0,7}]->_attack == 0);//Paramedic

    CHECK(board[{7,2}]->_life == 120);//SniperCommander
	CHECK(board[{7,3}]->_life == 150);//FootCommander
	CHECK(board[{7,4}]->_life == 100);//FootSoldier
	CHECK(board[{7,5}]->_life == 100);//Sniper
	CHECK(board[{7,6}]->_life == 200);//ParamedicCommander
	CHECK(board[{7,7}]->_life == 100);//Paramedic

    CHECK(board[{7,2}]->_attack == 100);//SniperCommander
	CHECK(board[{7,3}]->_attack == 20);//FootCommander
	CHECK(board[{7,4}]->_attack == 10);//FootSoldier
	CHECK(board[{7,5}]->_attack == 50);//Sniper
	CHECK(board[{7,6}]->_attack == 0);//ParamedicCommander
	CHECK(board[{7,7}]->_attack == 0);//Pa



board.move(1, {0,1}, Board::MoveDIR::Up); 
    CHECK(board[{7,1}]->_life == 90);

board.move(2, {7,1}, Board::MoveDIR::Down);    
    CHECK(board[{0,1}]->_life == 90);

board.move(1, {0,3}, Board::MoveDIR::Up);
CHECK(board[{0,1}]->_life == 90);

board.move(2, {7,3}, Board::MoveDIR::Left);
CHECK(board[{0,1}]->_life == 90);

board.move(1, {0,1}, Board::MoveDIR::Up); 
    CHECK(board[{7,1}]->_life == 90);

board.move(2, {7,1}, Board::MoveDIR::Down);    
    CHECK(board[{0,1}]->_life == 90);

board.move(1, {0,3}, Board::MoveDIR::Up);
CHECK(board[{0,1}]->_life == 90);

board.move(2, {7,3}, Board::MoveDIR::Left);
CHECK(board[{0,1}]->_life == 90);

board.move(1, {0,1}, Board::MoveDIR::Up); 
    CHECK(board[{7,1}]->_life == 90);

board.move(2, {7,1}, Board::MoveDIR::Down);    
    CHECK(board[{0,1}]->_life == 90);

board.move(1, {0,3}, Board::MoveDIR::Up);
CHECK(board[{0,1}]->_life == 90);

board.move(2, {7,3}, Board::MoveDIR::Left);
CHECK(board[{0,1}]->_life == 90);

board.move(1, {0,1}, Board::MoveDIR::Up); 
    CHECK(board[{7,1}]->_life == 90);

board.move(2, {7,1}, Board::MoveDIR::Down);    
    CHECK(board[{0,1}]->_life == 90);

board.move(1, {0,3}, Board::MoveDIR::Up);
CHECK(board[{0,1}]->_life == 90);

board.move(2, {7,3}, Board::MoveDIR::Left);
CHECK(board[{0,1}]->_life == 90);





//59







}


TEST_CASE("Test -2-soldiers")
{
    		Board board(10,10);

            CHECK(board.has_soldiers(1)==false);
            board[{0,0}] = new FootSoldier(1);
            board[{0,1}] = new FootSoldier(1);
			board[{0,2}] = new SniperCommander(1);
            board[{0,3}] = new FootCommander(1);
			board[{0,4}] = new FootSoldier(1);
            board[{0,5}] = new Sniper(1);
            board[{0,6}] = new ParamedicCommander(1);
			board[{0,7}] = new Paramedic(1);
            board[{0,8}] = new Paramedic(1);
            board[{0,9}] = new Sniper(1);
            board[{5,0}] = new FootSoldier(1);
            board[{1,0}] = new FootSoldier(1);

            
            CHECK(board.has_soldiers(1)==true);
            
            CHECK(board.has_soldiers(2)==false);
            board[{7,0}] = new FootSoldier(2);
            board[{7,1}] = new FootSoldier(2);
			board[{7,2}] = new SniperCommander(2);
            board[{7,3}] = new FootCommander(2);
            board[{1,3}] = new FootCommander(2);
            board[{4,3}] = new FootCommander(2);
			board[{7,4}] = new FootSoldier(2);
            board[{7,5}] = new Sniper(2);
            board[{7,6}] = new ParamedicCommander(2);
			board[{7,7}] = new Paramedic(2);
            board[{5,6}] = new ParamedicCommander(2);
			board[{6,7}] = new Paramedic(2);
            board[{6,6}] = new ParamedicCommander(2);
            CHECK(board.has_soldiers(2)==true);
   
    CHECK(board[{0,0}]->_numOfplayer == 1);
    CHECK(board[{0,1}]->_numOfplayer == 1);
	CHECK(board[{0,2}]->_numOfplayer == 1);
	CHECK(board[{0,3}]->_numOfplayer == 1);
	CHECK(board[{0,4}]->_numOfplayer == 1);
	CHECK(board[{0,5}]->_numOfplayer == 1);
	CHECK(board[{0,6}]->_numOfplayer == 1);
	CHECK(board[{0,7}]->_numOfplayer == 1);
    CHECK(board[{5,0}]->_numOfplayer == 1);
	CHECK(board[{1,0}]->_numOfplayer == 1);
    
    
    
    
    // CHECK(board[{6,5}]->_numOfplayer == 2);
    CHECK(board[{6,6}]->_numOfplayer == 2);
    CHECK(board[{6,7}]->_numOfplayer == 2);
    CHECK(board[{7,0}]->_numOfplayer == 2);
    CHECK(board[{7,1}]->_numOfplayer == 2);
	CHECK(board[{7,2}]->_numOfplayer == 2);
	CHECK(board[{7,3}]->_numOfplayer == 2);
	CHECK(board[{7,4}]->_numOfplayer == 2);
	CHECK(board[{7,5}]->_numOfplayer == 2);
	CHECK(board[{7,6}]->_numOfplayer == 2);
	CHECK(board[{7,7}]->_numOfplayer == 2);
    
    
    
    
    
    
    CHECK(board[{5,0}]->_life == 100);//FootSoldier
	CHECK(board[{1,0}]->_life == 100);//FootSoldier
    CHECK(board[{0,2}]->_life == 120);//SniperCommander
	CHECK(board[{0,3}]->_life == 150);//FootCommander
	CHECK(board[{0,4}]->_life == 100);//FootSoldier
	CHECK(board[{0,5}]->_life == 100);//Sniper
	CHECK(board[{0,6}]->_life == 200);//ParamedicCommander
	CHECK(board[{0,7}]->_life == 100);//Paramedic
    
    CHECK(board[{5,0}]->_attack == 10);//FootSoldier
	CHECK(board[{1,0}]->_attack == 10);//FootSoldier
    CHECK(board[{0,2}]->_attack == 100);//SniperCommander
	CHECK(board[{0,3}]->_attack == 20);//FootCommander
	CHECK(board[{0,4}]->_attack == 10);//FootSoldier
	CHECK(board[{0,5}]->_attack == 50);//Sniper
	CHECK(board[{0,6}]->_attack == 0);//ParamedicCommander
	CHECK(board[{0,7}]->_attack == 0);//Paramedic

    CHECK(board[{7,2}]->_life == 120);//SniperCommander
	CHECK(board[{7,3}]->_life == 150);//FootCommander
	CHECK(board[{7,4}]->_life == 100);//FootSoldier
	CHECK(board[{7,5}]->_life == 100);//Sniper
	CHECK(board[{7,6}]->_life == 200);//ParamedicCommander
	CHECK(board[{7,7}]->_life == 100);//Paramedic

    CHECK(board[{7,2}]->_attack == 100);//SniperCommander
	CHECK(board[{7,3}]->_attack == 20);//FootCommander
	CHECK(board[{7,4}]->_attack == 10);//FootSoldier
	CHECK(board[{7,5}]->_attack == 50);//Sniper
	CHECK(board[{7,6}]->_attack == 0);//ParamedicCommander
	CHECK(board[{7,7}]->_attack == 0);//Pa




}

};