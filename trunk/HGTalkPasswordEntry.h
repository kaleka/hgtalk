// HGTalkPasswordEntry.h
// Heihaier - admin@heihaier.org
//

#ifndef __HGTALK_PASSWORD_ENTRY_H__
#define __HGTALK_PASSWORD_ENTRY_H__

#include <gtkmm/entry.h>

class HGTalkPasswordEntry : public Gtk::Entry
{
private:
protected:
	virtual void on_hide();

public:
	HGTalkPasswordEntry();
	~HGTalkPasswordEntry();
};

#endif /* __HGTALK-PASSWORD_ENTRY_H__ */