// HGTalkLoginButton.h
// Heihaier - admin@heihaier.org
//

#include "HGTalkLoginButton.h"
#include "Common.h"
#include "main.h" // Test
#include "HGTalkApp.h" // Test

HGTalkLoginButton::HGTalkLoginButton()
{
	set_label(HGTALK_LOGIN);
}

HGTalkLoginButton::~HGTalkLoginButton()
{
}

void HGTalkLoginButton::on_clicked()
{
	g_pHGTalkApp->get_window()->signal_login_ok.emit(); // Test
}
