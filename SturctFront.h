//
// Created by c76 on 2021/10/21.
//

#ifndef CET46_STURCTFRONT_H
#define CET46_STURCTFRONT_H
#include <string>
#include <utility>
#include <vector>
#include <random>
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cstdio>
#include <fstream>
#include <chrono>
#pragma once

//结构体储存
struct  individual{
    std::string eng;
    std::string ch;
    bool flag1= false;
    bool flag2= false;
    bool isSelect= false;
    individual(std::string eng, std::string ch):eng(std::move(eng)),ch(std::move(ch)),flag1(false),flag2(false),isSelect(false){};
};
//声明该vector，extern关键词在别处定义
extern std::vector<individual> words;




class SturctFront {

};


#endif //CET46_STURCTFRONT_H
