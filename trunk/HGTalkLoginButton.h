// HGTalkLoginButton.h
// Heihaier - admin@heihaier.org
//

#ifndef __HGTALK_LOGIN_BUTTON_H__
#define __HGTALK_LOGIN_BUTTON_H__

#include <gtkmm/button.h>

class HGTalkLoginButton : public Gtk::Button
{
private:
protected:
	virtual void on_clicked();
public:
	HGTalkLoginButton();
	~HGTalkLoginButton();
};

#endif /* __HGTALK_LOGIN_BOTTON_H__ */
