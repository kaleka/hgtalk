// HGTalkRempassButton.h
// Heihaier - admin@heihaier.org
//

#ifndef __HGTALK_REMPASS_BUTTON_H__
#define __HGTALK_REMPASS_BUTTON_H__

#include <gtkmm/checkbutton.h>

class HGTalkRempassButton : public Gtk::CheckButton
{
private:
protected:
	virtual void on_hide();

public:
	HGTalkRempassButton();
	~HGTalkRempassButton();
};

#endif /* __HGTALK_REMPASS_BUTTON_H__ */
