//
// Created by Administrator on 2019/2/24.
//

#ifndef DATASTRUCTURE_KEYWORD_H
#define DATASTRUCTURE_KEYWORD_H

#include<vector>

#define  MAX_LENGTH 20   //单词的最大长度设置为20

class KeyWord {
public:
    char content[MAX_LENGTH] ; //单词内容
    int fluenty;      //出现的频次
    /*
     *  @param flu 出现的频数
     * */
    char* insert(char * words){
        int i=0;
        for (; i < 20; i++){
            if (' ' == *(words++)){
                break;
            }
            content[i]=*(words++);  //获取单词内容
        }
        return words++;
    }
    // 是否与keyword相同
    bool isEqual(char * aim,char * keyword){
        while(*(aim++)!=' '){
            if (*(aim++)!=*(keyword++)){
                return false;
            }
        }
        return true;
    }
};


#endif //DATASTRUCTURE_KEYWORD_H
