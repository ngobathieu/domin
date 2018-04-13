#include "BanChoi.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <cstdlib>

using namespace std;

void BanChoi::tao_ban()
{
    for (int i=1; i<=10; i++)
    {
        ban[i]=" ";
        for (int j=1; j<=10; j++)
        {
            ban[i]+="* ";
            banso[i][j]=0;
        }
    }
}
void BanChoi::in_ban()
{
    cout<<"   ";
    for (int i=1; i<=10; i++)
        cout<<i<<" ";
    cout<<endl;
    for (int i=1; i<=9; i++)
        cout<<i<<" "<<ban[i]<<endl;
    cout<<10<<ban[10]<<endl;
}
void BanChoi::capnhat(int x,int y)
{
    if (banso[x-1][y-1]!=-1)
        banso[x-1][y-1]++;
    if (banso[x-1][y]!=-1)
        banso[x-1][y]++;
    if (banso[x-1][y+1]!=-1)
        banso[x-1][y+1]++;
    if (banso[x][y-1]!=-1)
        banso[x][y-1]++;
    if (banso[x][y+1]!=-1)
        banso[x][y+1]++;
    if (banso[x+1][y-1]!=-1)
        banso[x+1][y-1]++;
    if (banso[x+1][y]!=-1)
        banso[x+1][y]++;
    if (banso[x+1][y+1]!=-1)
        banso[x+1][y+1]++;
}
void BanChoi::dat_min(int x,int y)
{
    banso[x][y]=-1;
    capnhat(x,y);
}
void BanChoi::khoitao(int bom)
{
    for (int i=1; i<=bom; i++)
    {
        int x=rand()%10+1;
        int y=rand()%10+1;
        while (banso[x][y]==-1)
        {
            x=rand()%10+1;
            y=rand()%10+1;
        }
        dat_min(x,y);
    }
}
