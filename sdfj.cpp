#include <iostream>
#include <string>
#include <windows.h>
#include <cstdlib>
#include "BanChoi.h"

using namespace std;

string ban[12];
int banso[12][12];
int diem=0,bom;
bool dathua=0;



BanChoi banchoi;
void thua()
{
    system("cls");
    banchoi.in_ban();
    cout<<"Ban da thua ! Diem so hien tai la "<<diem;
    dathua=1;
}
void lat_o(int x,int y)
{
    if (banchoi.banso[x][y]==-1)
    {
        banchoi.ban[x][1+(y-1)*2]='X';
        thua();
    }
    else
    {
        banchoi.ban[x][1+(y-1)*2]='0'+banchoi.banso[x][y];
        diem++;
    }
}

int main()
{
    banchoi.tao_ban();
    cout<<"Chon so luong bom(<=100) :";
    cin>>bom;
    banchoi.khoitao(bom);
    diem=0;
    while (!dathua)
    {
        int x,y;
        system("cls");
        banchoi.in_ban();
        cout<<"Hay chon o ban muon lat (Hang truoc, cot sau):";
        cin>>x>>y;
        lat_o(x,y);
    }
}
