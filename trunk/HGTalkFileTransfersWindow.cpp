// HGTalkFileTransfersWindow.h
// Heihaier - admin@heihaier.org
//

#include "HGTalkFileTransfersWindow.h"
#include "Common.h"

HGTalkFileTransfersWindow::HGTalkFileTransfersWindow()
{
	set_icon_from_file(HGTALK_ICON_16);
	set_title(HGTALK_FILE_TRANSFERS);

	signal_show_hide.connect(sigc::mem_fun(this, &HGTalkFileTransfersWindow::on_show_hide));
}

HGTalkFileTransfersWindow::~HGTalkFileTransfersWindow()
{
}

void HGTalkFileTransfersWindow::on_show_hide()
{
	if(is_visible())
	  hide();
	else
	  show();
}

