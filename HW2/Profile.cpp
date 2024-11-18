#include "Profile.h"
#include <string>
#include <iostream>

void Profile::init(User owner)
{
	this->owner = owner;
}

void Profile::clear()
{
	friends.clear();
}

User Profile::getOwner() const
{
	return this->owner;
}

void Profile::setStatus(std::string new_status)
{
	this->pages.setStatus(new_status);

}

void Profile::addPostToProfilePage(std::string post)
{
	this->pages.addLineToPosts(post);
}

void Profile::addFriend(User const friend_to_add)
{
	this->friends.add(friend_to_add);

}

std::string Profile::getPage() const
{
	std::string page = "Status: " + this->pages.status + "\n*******************\n*******************\n" + this->pages.posts;
	return page;
}

std::string Profile::getFriends() const
{
	std::string friends;
	UserNode* curr = this->friends.get_first();
	while (curr != nullptr)
	{
		friends += curr->get_data().getUserName() + ",";
		curr = curr->get_next();
	}
	friends.erase(friends.size() - 1);
	return friends;
}

std::string Profile::getFriendsWithSameNameLength() const
{
	std::string sameLength;
	UserNode* curr = this->friends.get_first();
	while (curr != nullptr)
	{
		if (this->owner.getUserName().length() == curr->get_data().getUserName().length())
			sameLength += curr->get_data().getUserName() + ',';
		curr = curr->get_next();
	}
	if (!sameLength.empty())
	{
		sameLength.erase(sameLength.size() - 1);
	}
	
	return sameLength;
}

void Profile::changeAllWordsInStatus(std::string word)
{
}

void Profile::changeWordInStatus(std::string word_to_replace, std::string new_word)
{
}
