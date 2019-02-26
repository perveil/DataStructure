//
// Created by Administrator on 2019/2/24.
//

#ifndef DATASTRUCTURE_KEYWORDS_H
#define DATASTRUCTURE_KEYWORDS_H

#include<iostream>

#include<vector>
#include "KeyWord.h"

using namespace std;

class KeyWords {
public:
    vector<KeyWord> wordArray; //单词集合
    //插入
    void insertWord(KeyWord word){
        wordArray.push_back(word);  //向向量后边插入
    }
};


#endif
