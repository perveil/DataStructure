#include <iostream>
#include <regex>
#include <fstream>
#include <string>
#include <math.h>

#include "curriculumDesign/utils/FileUtils.h"


/*
 * 项目的入口处
 * */
using  namespace std;
vector<string>  words;
int main() {
    //读取关键字
    vector<string> keywords=FileUtils::readFile("C:\\Users\\Administrator\\CLionProjects\\DataStructure\\curriculumDesign\\files\\keywords.so");  //读入所有关键字
    //读取目标文件的所有行
    string s1=FileUtils::readAimFile("C:\\Users\\Administrator\\CLionProjects\\DataStructure\\curriculumDesign\\files\\test1.cpp");
    string s2=FileUtils::readAimFile("C:\\Users\\Administrator\\CLionProjects\\DataStructure\\curriculumDesign\\files\\test2.cpp");
    //得出关键字的个数
    int nums=keywords.size();
    int socre[2][nums];
    for (int k = 0; k <2; ++k) {
        for (int i = 0; i <nums ; ++i) {
            socre[k][i]=0;
        }
    }
    for (int i = 0; i <nums ; ++i) {
        regex regex1("\\b"+keywords[i]+"*\\b");  //正则表达式
        smatch match1;
        smatch match2;

        string::const_iterator iterStart = s1.begin();
        string::const_iterator iterEnd = s1.end();
        int socre1=0;
        while (regex_search(iterStart, iterEnd, match1, regex1)){
            socre1++;
            iterStart=match1[0].second;
        }
        int socre2=0;
        string::const_iterator iterStart2 = s2.begin();
        string::const_iterator iterEnd2 = s2.end();
        while (regex_search(iterStart2, iterEnd2, match2, regex1)){
            socre2++;
            iterStart2=match2[0].second;
        }

        socre[0][i]=socre1;
        socre[1][i]=socre2;
    }
    double  score=0.0;
    for (int j = 0; j < nums; ++j) {
        score+= pow(abs(socre[0][j]-socre[1][j]),2);
    }
    cout<<sqrt(score)<<endl;

}