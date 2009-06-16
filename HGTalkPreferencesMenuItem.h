// HGTalkPreferencesMenuItem.h
// Heihaier - admin@heihaier.org
//

#ifndef __HGTALK_PREFERENCES_MENU_ITEM_H__
#define __HGTALK_PREFERENCES_MENU_ITEM_H__

#include <gtkmm/imagemenuitem.h>

class HGTalkPreferencesMenuItem : public Gtk::ImageMenuItem
{
private:
protected:
	virtual void on_activate();

public:
	HGTalkPreferencesMenuItem();
	~HGTalkPreferencesMenuItem();
};

#endif /* __HGTALK_PREFERENCES_MENU_ITEM_H__ */
