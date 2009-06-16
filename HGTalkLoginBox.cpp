// HGTalkLoginBox.cpp
// Heihaier - admin@heihaier.org
//

#include "HGTalkLoginBox.h"
#include "Common.h"
#include "HGTalkPreferencesButton.h"
#include "HGTalkAboutButton.h"
#include "HGTalkLoginButton.h"
#include "HGTalkUsernameEntry.h"
#include "HGTalkPasswordEntry.h"
#include "HGTalkRempassButton.h"

HGTalkLoginBox::HGTalkLoginBox()
{
	Gtk::Image * pImage = Gtk::manage(new Gtk::Image(HGTALK_ICON_128));
	pack_start(*pImage, FALSE, TRUE, 0);
	pImage->set_size_request(-1, 180);

	Gtk::Label * pTemp = Gtk::manage(new Gtk::Label(HGTALK_USERNAME));
	pTemp->set_alignment(0.0, 0.5);
	pack_start(*pTemp, FALSE, TRUE, 0);
	m_pUsername = Gtk::manage(new HGTalkUsernameEntry);
	pack_start(*m_pUsername, FALSE, TRUE, 0);

	pTemp = Gtk::manage(new Gtk::Label(HGTALK_PASSWORD));
	pTemp->set_alignment(0.0, 0.5);
	pack_start(*pTemp, FALSE, TRUE, 0);
	m_pPassword = Gtk::manage(new HGTalkPasswordEntry);
	pack_start(*m_pPassword, FALSE, TRUE, 0);

	m_pRemPass = 
		Gtk::manage(new HGTalkRempassButton);
	pack_start(*m_pRemPass, FALSE, TRUE, 0);

	Gtk::ButtonBox * pButtonBox =
		Gtk::manage(new Gtk::HButtonBox);
	pack_start(*pButtonBox, FALSE, TRUE, 0);
	Gtk::Button * pButton = 
		Gtk::manage(new HGTalkLoginButton);
	pButtonBox->pack_start(*pButton, FALSE, FALSE, 0);

	m_pTip = Gtk::manage(new Gtk::Label());
	pack_start(*m_pTip, TRUE, TRUE, 0);

	pButtonBox = Gtk::manage(new Gtk::HButtonBox);
	pButtonBox->set_layout(Gtk::BUTTONBOX_END);
	pack_start(*pButtonBox, FALSE, TRUE, 0);

	Gtk::LinkButton * pLinkButton =
		Gtk::manage(new HGTalkPreferencesButton);
	pButtonBox->pack_start(*pLinkButton, FALSE, FALSE, 0);
	pLinkButton = Gtk::manage(new HGTalkAboutButton);
	pButtonBox->pack_start(*pLinkButton, FALSE, FALSE, 0);

	show_all();
}

HGTalkLoginBox::~HGTalkLoginBox()
{
}

