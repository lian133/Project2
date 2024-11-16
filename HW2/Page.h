#pragma once
#include <string>
class Profile
{
public:
	void init();
	std::string getPosts();
	std::string getStatus();
	void clearPage();
	void setStatus(std::string status);
	void addLineToPosts(std::string new_line);

private:
	std::string status;
	std::string posts;

};