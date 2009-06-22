// HGTalkApp.cpp
// Heihaier - admin@heihaier.org
//

#include "HGTalkApp.h"
#include "Common.h"

HGTalkApp::HGTalkApp()
{
}

HGTalkApp::~HGTalkApp()
{
}

void HGTalkApp::init()
{
	m_pConfig = new HGTalkConfig;
	m_pStatusIcon = new HGTalkStatusIcon(HGTALK_STATUS_AVAILABLE);
	m_pWindow = new HGTalkWindow;
}

void HGTalkApp::term()
{
	delete m_pStatusIcon;
	delete m_pWindow;
	delete m_pConfig;
}

HGTalkWindow * HGTalkApp::get_window()
{
	return m_pWindow;
}


HGTalkConfig * HGTalkApp::get_config()
{
	return m_pConfig;
}

