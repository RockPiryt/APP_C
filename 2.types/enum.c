#include <stdio.h>

int main()
{   
    enum LOGICZNA {NIE = 0, TAK = 1};
    enum LOGICZNA flaga = NIE;

    int x;
    if(x==10)
        flaga=TAK;
    //////////////////////////////////////
    enum {PN=1, WT, SR, CZW, PT, SB, ND};
    int dzien=CZW;

    /////////////////////////////////////
    enum _ERROR{_ERR_FILE=1, _ERR_ACCESS=2, _ERR_MEMORY=4, _ERR_OTHER=8};
    return 0;
}