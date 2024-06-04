#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
private:
	int			my_idx;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

public:
	Contact();
	Contact(const int idx, const std::string& first_name, const std::string& last_name, const std::string& nick_name, const std::string& phone_number, const std::string& darkest_secret);
	~Contact();

	void	SetMyIdx(const int idx);
	void	SetFirstName(const std::string& first_name);
	void	SetLastName(const std::string& last_name);
	void	SetNickname(const std::string& nick_name);
	void	SetPhoneNumber(const std::string& phone_number);
	void	SetDarkestSecret(const std::string& darkest_secret);

	const int&			GetMyIdx() const;
	const std::string&	GetFirstName() const;
	const std::string&	GetLastName() const;
	const std::string&	GetNickname() const;
	const std::string&	GetPhoneNumber() const;
	const std::string&	GetDarkestSecret() const;

	void	DisplayOneContact() const;
};

#endif