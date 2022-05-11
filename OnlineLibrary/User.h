#pragma once
#include "String.h"
class User {
private:
	String username;
	// bool is_admin = false;
public:
	User();
	User(String _username);
	//do i need getters and setters
	void setUsername(String _username);
	String getUsername()const;
};