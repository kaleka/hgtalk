// HGTalkCofnig.cpp
// Heihaier - admin@heihaier.org
//

#include "HGTalkConfig.h"
#include "Common.h"
#include <stdio.h>
#include <string.h>

HGTalkConfig::HGTalkConfig()
{
	load();
}

HGTalkConfig::~HGTalkConfig()
{
	save();
}

void HGTalkConfig::load()
{
	FILE * p = fopen(get_config_path().data(), "r");
	if(p)
	{
		fread(this, sizeof(HGTalkConfig), 1, p);
		fclose(p);
	}
}

void HGTalkConfig::save()
{
	if(!m_Rempass)
	  m_Password[0] = 0;

	FILE * p = fopen(get_config_path().data(), "w+");
	if(p)
	{
		fwrite(this, sizeof(HGTalkConfig), 1, p);
		fclose(p);
	}
}

Glib::ustring HGTalkConfig::get_config_path()
{
	return Glib::get_user_config_dir() + 
		G_DIR_SEPARATOR_S + HGTALK_CONFIG_FILE;
}

Glib::ustring HGTalkConfig::get_username()
{
	return m_Username;
}

Glib::ustring HGTalkConfig::get_password()
{
	return m_Password;
}

bool HGTalkConfig::get_rempass()
{
	return m_Rempass;
}

void HGTalkConfig::set_username(Glib::ustring username)
{
	strncpy(m_Username, username.data(), username.size());
	m_Username[username.size()] = 0;
}

void HGTalkConfig::set_password(Glib::ustring password)
{
	strncpy(m_Password, password.data(), password.size());
	m_Password[password.size()] = 0;
}

void HGTalkConfig::set_rempass(bool rempass)
{
	m_Rempass = rempass;
}
