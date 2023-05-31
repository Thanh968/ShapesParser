#ifndef OBJECT_H
#define OBJECT_H

#include<iostream>
#include<string>
#include<sstream>
#include<iomanip>

using std::string;
using std::exception;
using std::stringstream;
using std::stod;
using std::setw;
using std::setfill;
using std::right;
using std::left;
using std::cin;
using std::cout;
using std::to_string;
using std::endl;
using std::swap;
using std::setprecision;
using std::fixed;

/// <summary>
/// Interface của tất cả class trong chương trình
/// </summary>
class Object {
public:
	virtual string toString() = 0;
};

#endif // !OBJECT_H
