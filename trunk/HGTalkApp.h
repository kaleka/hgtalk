// HGTalkApp.h
// Heihaier - admin@heihaier.org
//

#ifndef __HGTALK_APP_H__
#define __HGTALK_APP_H__

#include "HGTalkConfig.h"
#include "HGTalkStatusIcon.h"
#include "HGTalkWindow.h"

class HGTalkApp
{
private:
	HGTalkConfig * m_pConfig;
	HGTalkStatusIcon * m_pStatusIcon;
	HGTalkWindow * m_pWindow;

protected:
public:
	HGTalkApp();
	~HGTalkApp();

	void init();
	void term();

	HGTalkWindow * get_window();
	HGTalkConfig * get_config();
};

#endif /* __HGTALK_APP_H__ */
