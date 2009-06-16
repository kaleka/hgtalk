// HGTalkPreferencesButton.h
// Heihaier - admin@heihaier.org
//

#ifndef __HGTALK_PREFERENCES_BUTTON_H__
#define __HGTALK_PREFERENCES_BUTTON_H__

#include <gtkmm/linkbutton.h>

class HGTalkPreferencesButton : public Gtk::LinkButton
{
private:
protected:
	virtual void on_clicked();
public:
	HGTalkPreferencesButton();
	~HGTalkPreferencesButton();
};

#endif /* __HGTALK_PREFERENCES_BUTTON_H__ */
