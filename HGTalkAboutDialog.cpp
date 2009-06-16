// HGTalkAboutDialog.cpp
// Heihaier - admin@heihaier.org
//

#include "HGTalkAboutDialog.h"
#include "Common.h"

HGTalkAboutDialog::HGTalkAboutDialog()
{
	set_icon_from_file(HGTALK_ICON_48);
	set_name(HGTALK_NAME);
	set_program_name(HGTALK_NAME);
	set_version(HGTALK_VERSION);
	set_copyright(HGTALK_COPYRIGHT);
	set_license(HGTALK_LICENSE);
	set_website(HGTALK_WEBSITE);
	
	std::vector <Glib::ustring> authors;
	authors.push_back(HGTALK_AUTHOR_HEIHAIER);
	set_authors(authors);
}

HGTalkAboutDialog::~HGTalkAboutDialog()
{
}
