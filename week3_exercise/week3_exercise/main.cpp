#include <iostream>
#include<math.h>
using namespace std;

struct Point{
    double x;
    double y;
    
};
double  distance(Point a, Point b){
    double dx = a.x-b.x;
    double dy = a.y-b.y;
    
    return sqrt(dx*dx+dy*dy);
}

Point moveUp(Point a, double distance){
    a.y += distance;
    return a;
}

void moveDown(Point& a, double distance){
    a.y-=distance;
}
int main(int argc, const char * argv[]) {
    Point a{1.0,0.0};
    Point b;
    b.x = 2.0;
    b.y = 0.0;
    
    std::cout << a.x<<","<<a.y<< endl;
    std::cout << b.x<<","<<b.y<< endl;
    
    cout<<distance(a,b)<<endl;
    
    a = moveUp(a,1.0);
    std::cout << a.x<<","<<a.y<< endl;
    
    moveDown(a,1.0);
    std::cout << a.x<<","<<a.y<< endl;
    return 0;
}
