// HGTalkAboutButton.h
// Heihaier - admin@heihaier.org
//

#ifndef __HGTALK_ABOUT_BUTTON_H__
#define __HGTALK_ABOUT_BUTTON_H__

#include <gtkmm/linkbutton.h>

class HGTalkAboutButton : public Gtk::LinkButton
{
private:
protected:
	virtual void on_clicked();
public:
	HGTalkAboutButton();
	~HGTalkAboutButton();
};

#endif /* __HGTALK_ABOUT_BUTTON_H__ */
