// HGTalkAboutMenuItem.h
// Heihaier - admin@heihaier.org
//

#ifndef __HGTALK_ABOUT_MENU_ITEM_H__
#define __HGTALK_ABOUT_MENU_ITEM_H__

#include <gtkmm/imagemenuitem.h>

class HGTalkAboutMenuItem : public Gtk::ImageMenuItem
{
private:
protected:
	virtual void on_activate();

public:
	HGTalkAboutMenuItem();
	~HGTalkAboutMenuItem();
};

#endif /* __HGTALK_ABOUT_MENU_ITEM_H__ */
