// HGTalkFileTransfersWindow.h
// Heihaier - admin@heihaier.org
//

#ifndef __HGTALK_FILETRANSFERS_WINDOW_H__
#define __HGTALK_FILETRANSFERS_WINDOW_H__

#include <gtkmm/window.h>

class HGTalkFileTransfersWindow : public Gtk::Window
{
private:
protected:
	virtual void on_show_hide();

public:
	HGTalkFileTransfersWindow();
	~HGTalkFileTransfersWindow();

	sigc::signal <void> signal_show_hide;
};

#endif /* __HGTALK_FILETRANSFERS_WINDOW_H__ */
