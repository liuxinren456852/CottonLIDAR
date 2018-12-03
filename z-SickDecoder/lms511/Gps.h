#pragma once
#include <string>
#include <sstream>
#include <stdio.h>
#include <math.h>
using namespace std;

class GPS
{
	private:
	protected:
	string GPS_String, ID;
	double latitude, longitude;
	int utc;
	string latDirection, longDirection, checkSum;
	float northing, easting;
	

	//Defined
	float string2Float(string stringIN);
	public:
	GPS();
	void setString(string GPS_IN);
	
	string getID();
	double getLat();
	double getLong();
	double getUTC();
	float getNorthing();
	float getEasting();

	void latLongToUTM();

	//not defined
	virtual void decode();
	virtual string toString();
};




