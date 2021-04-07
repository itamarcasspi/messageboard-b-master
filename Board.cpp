#include <iostream>
#include <string>
#include "Direction.hpp"
#include "Board.hpp"

using namespace std;
namespace ariel
{
    
    Board::Board()
    {
        rowsize=1;
        colsize=0;
    }

    

    void Board::post(unsigned int row, unsigned int col, Direction direction, string str)
    {
        unsigned int r = row;
        unsigned int c = col;
        if(direction==Direction::Horizontal){
            if(row>rowsize){
                rowsize=row;
            }
            if(col+str.length()>colsize){
                colsize=col+str.length()-1;
            }
            for(unsigned int i = 0;i<str.length();i++){
                board[r][c++]=str.at(i);
            }
        }
        if(direction==Direction::Vertical){
            if(row+str.length()>rowsize){
                rowsize = row+str.length()-1;
            }
            if(col>colsize){
                colsize=col;
            }
            for(unsigned int i = 0;i<str.length();i++){
                board[r++][c]=str.at(i);
            }
        }
    }

    string Board::read(unsigned int row, unsigned int col, Direction direction, unsigned int length)
    {
        string ans;
        unsigned int r = row;
        unsigned int c = col;
        if(direction==Direction::Horizontal){
            for (unsigned int i = 0; i < length; i++)
            {
                if(board.count(r)!=0){
                    if(board.at(r).count(c)!=0){
                        
                        ans += board[r][c++];
                        
                        
                    }
                    else{
                        ans+='_';
                        c++;
                    }
                }
                else{
                    ans+='_';
                    c++;
                }
            }   
        }
        if(direction==Direction::Vertical){
            for (unsigned int i = 0; i < length; i++)
            {          
                if(board.count(r)!=0){
                    if(board.at(r).count(c)!=0){
                        ans += board[r++][c];
                    }
                    else{
                        ans+='_';
                        r++;
                    }
                }
                else{
                    ans+='_';
                    r++;
                }
            }   
        }
        
        return ans;
    }

    void Board::show()
    {
      for (unsigned int i = 0; i <=rowsize; i++)
      {
          cout<<this->read(i,0,Direction::Horizontal,colsize+1)<<endl;
      }
      cout<<endl;
    }

}