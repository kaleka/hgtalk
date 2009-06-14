// HGTalkSettingsButton.h
// Heihaier - admin@heihaier.org
//

#ifndef __HGTALK_SETTINGS_BUTTON_H__
#define __HGTALK_SETTINGS_BUTTON_H__

#include <gtkmm/linkbutton.h>

class HGTalkSettingsButton : public Gtk::LinkButton
{
private:
protected:
	virtual void on_clicked();
public:
	HGTalkSettingsButton();
	~HGTalkSettingsButton();
};

#endif /* __HGTALK_SETTINGS_BUTTON_H__ */
