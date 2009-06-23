// HGTalkApp.h
// Heihaier - admin@heihaier.org
//

#ifndef __HGTALK_APP_H__
#define __HGTALK_APP_H__

#include "HGTalkConfig.h"
#include "HGTalkStatusIcon.h"
#include "HGTalkWindow.h"
#include "HGTalkFileTransfersWindow.h"

class HGTalkApp
{
private:
	HGTalkConfig * m_pConfig;
	HGTalkStatusIcon * m_pStatusIcon;
	HGTalkWindow * m_pWindow;
	HGTalkFileTransfersWindow * m_pFileTransfersWindow;

protected:
public:
	HGTalkApp();
	~HGTalkApp();

	void init();
	void term();

	HGTalkWindow * get_window();
	HGTalkConfig * get_config();
	HGTalkFileTransfersWindow * get_file_transfers_window();
};

#endif /* __HGTALK_APP_H__ */
