#pragma once
#include <string>
#include <vector>
#include <sstream>

using namespace std;


class LMS400Scan
{
	private: 
	protected:
	//the scann and it's partitioned values
	string scan, parameterBlock, dataBlock, statusBlock;

	//ParameterBlock Values
	double startAngle, angularStep;
	int comandAns, distResolution, measurementNumb;
	int scanRate, reflectivity, startReflectivity, stopReflectivity;
	
	//Status Block Values
	int digitalInputs, reserved1,reserved2, teacVals, reserved3, reserved4;
	int scanCounter, telegramCounter, systemCounter;
		
	//----methods
	string swap2(string toSwap);
	string swap4(string toSwap);
	int hex2Dec(string stringHex);
	float hex2Flo(string stringHex);
	void partition(int start, int startData, int startStatus);
	
	//not defined in base class
	virtual void partition();
	virtual void decodeData();
	virtual void decodeInfoBlocks();
	
	public:
	//-----methods
	
	// Defined in this class
	LMS400Scan(string scanIN);
	LMS400Scan();
	virtual void decode();

	//Setter
	void setScan(string scanIn);

	//getter Methods
	string getScan();
	string getParam();
	string getData();
	string getStats();
	int getComand();
	int getDistanceResolution();
	double getStartAngle();
	double getAngularStep();
	int getMeasurementNumb();
	int getScanRate();
	int getReflectivity();
	int getStartReflectivity();
	int getStopReflectivity();
	int getDigitalInputs();
	int getReserved1();
	int getReserved2();
	int getTeacVals();
	int getReserved3();
	int getReserved4();
	int getScanCounter();
	int getTelegramCounter();
	int getSystemCounter();

	//printing Functions
	string toString();
	string getStatusBlock();

	// not defined in this class
	virtual vector<int> getRemisValues();
	virtual vector<int> getDistValues();

	virtual double getScaler();

};
























