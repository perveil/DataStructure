//
// Created by Administrator on 2018/12/13.
//

#include "Exammation.h"

int Test::CommFactor(int n1, int n2) {
    int r =n1%n2;
    while (r!=0){
        n1=n2;
        n2=r;
        r=n1%n2;
    }
    return  n2;
}

