//
// Created by Administrator on 2019/2/24.
//

#ifndef DATASTRUCTURE_FILEUTILS_H
#define DATASTRUCTURE_FILEUTILS_H

#include "../entity/KeyWords.h"

class FileUtils {
public:
    static  vector<string> readFile(string filepath);
    static   string  readAimFile(string filepath);
};


#endif //DATASTRUCTURE_FILEUTILS_H
