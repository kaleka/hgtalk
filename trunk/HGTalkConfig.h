// HGTalkConfig.h
// Heihaier - admin@heihaier.org
//

#ifndef __HGTALK_CONFIG_H__
#define __HGTALK_CONFIG_H__

#include <glibmm.h>

class HGTalkConfig
{
private:
	char m_Username[32];
	char m_Password[32];
	bool m_Rempass;

	Glib::ustring get_config_path();

public:
	HGTalkConfig();
	~HGTalkConfig();

	void load();
	void save();

	Glib::ustring get_username();
	Glib::ustring get_password();
	bool get_rempass();
	void set_username(Glib::ustring username);
	void set_password(Glib::ustring password);
	void set_rempass(bool rempass);
};

#endif /* __HGTALK_CONFIG_H__ */
