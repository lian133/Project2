#include "SocialNetwork.h"
#include <string>
#include <iostream>

void SocialNetwork::init(std::string networkName, int minAge)
{
	this->_networkName = networkName;
	this->_minAge = minAge;
}

void SocialNetwork::clear()
{
	this->profiles.clear();
}

std::string SocialNetwork::getNetworkName() const
{
	return this->_networkName;
}

int SocialNetwork::getMinAge() const
{
	return this->_minAge;
}

bool SocialNetwork::addProfile(Profile profile_to_add)
{
    if (this->users.getAge() < this->_minAge)
	{
		this->profiles.add(profile_to_add);
		return true;
	}
	return false;
}

std::string SocialNetwork::getWindowsDevices()
{
    std::string windowDevices;
    ProfileNode* curr = this->profiles.get_first();  
    DeviceNode* curr2;
    while (curr != nullptr) // go through every profile
    {
        curr2 = curr->get_data().getOwner().getDevices().get_first();
        while (curr2 != nullptr) // go through the device
        {
            if (!curr2->get_data().getOS().find("Windows"))
            {
                windowDevices += "[" + std::to_string(curr2->get_data().getID()) + ", " + curr2->get_data().getOS() + "], ";
            }
            curr2 = curr2->get_next(); 
        }
        curr = curr->get_next();  
    }
    if (!windowDevices.empty())
    {
        windowDevices.erase(windowDevices.size() - 2);
    }
    return windowDevices;
}