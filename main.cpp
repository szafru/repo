#include "graphics.hpp"
#include<cmath>
using namespace genv;

int main()
{
    gout.open(400,400);
    for(int i=0; i<10000; i++)
    {
    double PI=3.14;
    double acc = 0.01;
    int r =0.1+(i*0.01);
    int ox=200;
    int oy=200;
    gout << move_to(ox+r,oy) << color(255,0,0);
    for(int i=0; i<=2*PI/acc*4; i++){
        gout << line_to(cos((double)i*acc)*r + ox, -sin((double)i*acc)*r + oy);
        }
    }
    gout << refresh;
    event ev;

    while(gin >> ev){
    }
    return 0;
}
