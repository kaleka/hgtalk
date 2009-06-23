// HGTalkFileTransfersMenuItem.h
// Heihaier - admin@heihaier.org
//

#ifndef __HGTALK_FILE_TRANSFERS_MENU_ITEM_H__
#define __HGTALK_FILE_TRANSFERS_MENU_ITEM_H__

#include <gtkmm/imagemenuitem.h>

class HGTalkFileTransfersMenuItem : public Gtk::ImageMenuItem
{
private:
protected:
	virtual void on_activate();

public:
	HGTalkFileTransfersMenuItem();
	~HGTalkFileTransfersMenuItem();
};

#endif /* __HGTALK_FILE_TRANSFERS_MENU_ITEM_H__ */
