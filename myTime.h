/**
 * @file myTime.h
 * @date 16-Jun-2016
 * @author Vichagorn lupponglung
 *
 * 
 * Rimand (c) by Vichagorn lupponglung
 */

#ifndef _MY_TIME_H_
#define _MY_TIME_H_

#include <Arduino.h>
#include <time.h>

class myTime{
	public:
		myTime(void);
		bool begin(int timeZone,int dst);
		char* getTime();
		int getTime_hour();
		int getTime_min();
		int getTime_sec();
	private:
		time_t _now;
		struct tm* p_tm;
};

#endif
