#ifndef BANCHOI_H_INCLUDED
#define BANCHOI_H_INCLUDED



#endif // BANCHOI_H_INCLUDED

#include <iostream>
#include <string>
#include <windows.h>
#include <cstdlib>

using namespace std;

class BanChoi
{
public:
    string ban[12];
    int banso[12][12];
    int bom();
    void tao_ban();
    void in_ban();
    void capnhat(int x,int y);
    void dat_min(int x,int y);
    void khoitao(int bom);
};
