//
// Created by Administrator on 2019/2/24.
//

#include "FileUtils.h"

#include "fstream"
#include<iostream>
#include <string>


using namespace std;

vector<string> FileUtils::readFile(string filepath){
    char buffer[256];
    ifstream    file1(filepath,ios::out);   //创建一个fstream文件流对象
    vector<string>  words; //创建一个vector<string>
    string  line; //保存读入的每一行
    while(!file1.eof())
    {
        file1.getline(buffer,20);
        words.push_back(buffer);
    }
    return words;
}
string  FileUtils::readAimFile(string filepath){
    string resultStr="";
    char buffer[256];
    ifstream    file1(filepath,ios::out);
    string  line;
    while(!file1.eof())
    {
        file1.getline(buffer,80);
        resultStr+=buffer; //获得所有行
    }
    return resultStr;
}
