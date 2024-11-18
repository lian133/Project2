#include "ProfileList.h"
#include <string>

class SocialNetwork
{
public:
	void init(std::string networkName, int minAge);
	void clear();
	std::string getNetworkName() const;
	int getMinAge() const;
	bool addProfile(Profile profile_to_add);
	std::string getWindowsDevices();

private:
	int _minAge;
	Profile _profile_;
	std::string _networkName;
	ProfileList profiles;
	User users;
	Device devices;
	DevicesList poeple;

};


