#pragma once
#include<map>
#include<vector>
#include"Car.h"
#include"Cross.h"
#include"Road.h"


class Initial
{
public:
	Initial();
	void initialCar(string pathCar);
	void initialCross(string pathCross);
	void initialRoad(string pathRoad);
	void setPresetCarRoute(vector<int> destToIntRoute);
	void initialPresetAnswer(string pathPresetAnswer);
	vector<Car> getCar();
	vector<Cross> getCross();
	vector<Road> getRoad();
	//vector<Road> getRoad();
	~Initial();
private:
	vector<Car> mCar;
	map <int, int> mMapCarIdToIndex;
	vector<Cross> mCross;
	vector<Road> mRoad;
};

