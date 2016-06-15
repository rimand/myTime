/**
 * @file myTime.h
 * @date 16-Jun-2016
 * @author Vichagorn lupponglung
 *
 * 
 * Rimand (c) by Vichagorn lupponglung
 */
 
#include "myTime.h"

myTime::myTime(){
	
}

bool myTime::begin(int timeZone,int dst){
	configTime(timeZone*3600, dst, "pool.ntp.org", "time.nist.gov");
	while(!time(nullptr)){
		delay(500);
	}
	return true;
}
char* myTime::getTime(){
	_now = time(nullptr);
	return ctime(&_now);
}

int myTime::getTime_sec(){
	_now = time(nullptr);
	p_tm = localtime(&_now);
	return p_tm->tm_sec;
}

int myTime::getTime_min(){
	_now = time(nullptr);
	p_tm = localtime(&_now);
	return p_tm->tm_min;
}

int myTime::getTime_hour(){
	_now = time(nullptr);
	p_tm = localtime(&_now);
	return p_tm->tm_hour;
}


