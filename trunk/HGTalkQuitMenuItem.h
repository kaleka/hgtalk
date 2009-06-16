// HGTalkQuitMenuItem.h
// Heihaier - admin@heihaier.org
//

#ifndef __HGTALK_QUIT_MENU_ITEM_H__
#define __HGTALK_QUIT_MENU_ITEM_H__

#include <gtkmm/imagemenuitem.h>

class HGTalkQuitMenuItem : public Gtk::ImageMenuItem
{
private:
protected:
	virtual void on_activate();

public:
	HGTalkQuitMenuItem();
	~HGTalkQuitMenuItem();
};

#endif /* __HGTALK_QUIT_MENU_ITEM_H__ */
