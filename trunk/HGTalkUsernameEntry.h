// HGTalkUsernameEntry.h
// Heihaier - admin@heihaier.org
//

#ifndef __HGTALK_USERNAME_ENTRY_H__
#define __HGTALK_USERNAME_ENTRY_H__

#include <gtkmm/entry.h>

class HGTalkUsernameEntry : public Gtk::Entry
{
private:
protected:
	virtual void on_hide();

public:
	HGTalkUsernameEntry();
	~HGTalkUsernameEntry();
};

#endif /* __HGTALK_USERNAME_ENTRY_H__ */
