
#include <iostream>
#include <string>
#include "Board.hpp"
using namespace ariel;
using namespace std;

int main()
{
    Board loh;
    loh.post(1,0,Direction::Vertical,"Hey");
    loh.post(1,0,Direction::Horizontal,"Hey");
    loh.post(5,5,Direction::Horizontal,"eemp");
    cout<<loh.read(5,4,Direction::Horizontal,4)<<endl;
    cout<<loh.read(0,0,Direction::Horizontal,4)<<endl;
    cout<<endl;
    loh.show();
    
}
