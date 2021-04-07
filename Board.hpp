#pragma once
#include <string>
#include "Direction.hpp"
#include <unordered_map>
using namespace std;


namespace ariel
{
    class Board
    {
    private:
    unsigned int rowsize, colsize;
    unordered_map<unsigned int,unordered_map<unsigned int,char>>board;

    public:    
        Board();
        void post(unsigned int row, unsigned int col, Direction direction, std::string str);
        std::string read(unsigned int row, unsigned int col, Direction direction, unsigned int length);
        void show();
    };
}