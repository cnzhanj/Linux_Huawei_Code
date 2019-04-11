#include <cstdio>
#include"Cal.h"
#include <iostream>
using namespace std;

string basePath = "/home/ubuntu/cpp_HUAWEI/data/2-map-training-1/";
//string basePath = "F:\\Ë¶Ê¿×ÊÁÏ\\2018-2019\\HUAWEI\\2-training-training-1-answer\\";
string carPath = basePath + "car.txt";
string crossPath = basePath + "cross.txt";
string roadPath = basePath + "road.txt";
string presetAnswerPath = basePath + "presetAnswer.txt";
string answerPath = basePath + "answer.txt";
int main()
{
	Cal cal;

	cal.init(carPath, crossPath, roadPath, presetAnswerPath);

	cal.mainFunction();
	cal.writeAns(answerPath);

	return 0;
}