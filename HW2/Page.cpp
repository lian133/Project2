#include "Page.h"
#include <iostream>
#include <string>

void Profile::init()
{
	this->posts = nullptr;
	this->status = nullptr;
}

std::string Profile::getPosts()
{
	return this->posts;
}

std::string Profile::getStatus()
{
	return this->status;
}

void Profile::clearPage()
{
	this->posts = nullptr;
}

void Profile::setStatus(std::string status)
{
	this->status = status;
}

void Profile::addLineToPosts(std::string new_line)
{
	this->posts += new_line + "/n";
}