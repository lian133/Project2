#pragma once
#include "DeviceList.h"
#include <string>

class User
{
private:
	unsigned int id;
	std::string username;
	unsigned int age;
	DevicesList devices;

public:
	void init(const unsigned int id,const std::string username, const unsigned int age);
	void clear();
	unsigned int getID() const;
	std::string getUserName() const;
	unsigned int getAge() const;
	DevicesList& getDevices();
	void addDevice(Device newDevice);
	bool checkIfDevicesAreOn() const;
};