#pragma once
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

//所有口味、规格、饮料类型的定义
enum Taste { ORANGE, GRAPE, WATERMELON };
static string tastes[3] = { "橙子味","葡萄味","西瓜味" };

enum Drink { SODA, JUICE };
static string drinks[2] = { "汽水","果汁" };

enum Size { LARGE, LITTEL };
static string sizes[2] = { "大瓶","小瓶" };