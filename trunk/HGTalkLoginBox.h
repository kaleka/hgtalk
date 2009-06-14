// HGTalkLoginBox.h
// Heihaier - admin@heihaier.org
//

#ifndef __HGTALK_LOGIN_BOX_H__
#define __HGTALK_LOGIN_BOX_H__

#include <gtkmm.h>

class HGTalkLoginBox : public Gtk::VBox
{
private:
	Gtk::Entry * m_pUsername;
	Gtk::Entry * m_pPassword;
	Gtk::CheckButton * m_pRemPass;
	Gtk::Label * m_pTip;
public:
	HGTalkLoginBox();
	~HGTalkLoginBox();
};

#endif /* __HGTALK_LOGIN_BOX_H__ */
