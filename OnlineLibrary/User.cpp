#include "User.h"

User::User()
{
}

User::User(String _username)
{
	username = _username;
}

void User::setUsername(String _username)
{
	username = _username;
}

String User::getUsername() const
{
	return username;
}
