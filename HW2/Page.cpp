#include "Page.h"
#include <iostream>
#include <string>

void Page::init()
{
	this->posts = nullptr;
	this->status = nullptr;
}

std::string Page::getPosts()
{
	return this->posts;
}

std::string Page::getStatus()
{
	return this->status;
}

void Page::clearPage()
{
	this->posts = nullptr;
}

void Page::setStatus(std::string status)
{
	this->status = status;
}

void Page::addLineToPosts(std::string new_line)
{
	this->posts += new_line + "/n";
}
