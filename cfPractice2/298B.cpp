#include<bits/stdc++.h>
using namespace std;

int main(){

    long n, sx, sy, ex, ey;
    string f;

    cin>>n>>sx>>sy>>ex>>ey>>f;

    char xaxis = 'E';
    long goalX = ex - sx;
    if(goalX < 0){goalX = abs(goalX);

    xaxis = 'W';}


    char yaxis = 'N';
    long goalY = ey - sy;
    if(goalY < 0){goalY = abs(goalY);
    yaxis = 'S';}
//cout<<goalX<<"\t"<<goalY<<"\n";
    long distX(0), distY(0);

    long t(0);
    for(t = 0; t <= n; t++){

        if(f[t]==xaxis){++distX;}
        else if(f[t]== yaxis){++distY;}
        if((distX >= goalX) && (distY >= goalY)) //soooper cool ;)
        {break;}
    }

    if(distX >= goalX && distY >= goalY)
    cout<<t+1<<"\n";
    else
    cout<<"-1\n";


    return 0;
}
