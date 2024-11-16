#include "User.h"
#include <iostream>
#include <string>

void User::init(const unsigned int id, const std::string username, const unsigned int age)
{
	this->id = id;
	this->username = username;
	this->age = age;

}

void User::clear()
{
	devices.clear();
}

unsigned int User::getID() const
{
	return this->id;
}

std::string User::getUserName() const
{
	return this->username;
}

unsigned int User::getAge() const
{
	return this->age;
}

DevicesList& User::getDevices()
{
	return this->devices;
}

void User::addDevice(Device newDevice)
{
	this->devices.add(newDevice);
}

bool User::checkIfDevicesAreOn() const
{
	DeviceNode* curr = devices.get_first();//the first node of the devices
	while (curr != nullptr)
	{
		Device& device = curr->get_data(); // get the data for the node 
		if (!device.isActive())//check if the device is active
		{
			return false;
		}
		curr = curr->get_next();//go to the bext node
	}
	return true;

}


