//
// Created by Administrator on 2019/2/24.
//

#include "CaculateUtils.h"
#include "math.h"

//计算成绩
double CaculateUtils::CaculateScore(KeyWords words1, KeyWords words2) {
     int nums=words1.wordArray.size(); //关键词个数
     double  score=0.0;
    for (int i = 0; i < nums; ++i) {
        score+=pow(words1.wordArray[i].fluenty-words2.wordArray[i].fluenty,2);
    }
    return sqrt(score);
}