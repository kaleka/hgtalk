# Toolchain Setup
PP=cpp
CX=g++
LD=$(CX)
RM=rm -f

# Compilation Configurations
CXFLAGS=-g `pkg-config --cflags gtkmm-2.4`
LDFLAGS=-g `pkg-config --libs gtkmm-2.4`

# Objectives
TARGET=hgtalk
OBJECT=main.o \
	   HGTalkApp.o \
	   HGTalkWindow.o \
	   HGTalkLoginBox.o \
	   HGTalkMainBox.o \
	   HGTalkStatusIcon.o \
	   HGTalkPreferencesButton.o \
	   HGTalkAboutButton.o \
	   HGTalkLoginButton.o \
	   HGTalkConfig.o \
	   HGTalkUsernameEntry.o \
	   HGTalkPasswordEntry.o \
	   HGTalkRempassButton.o \
	   HGTalkAboutDialog.o \
	   HGTalkPreferencesDialog.o \
	   HGTalkUserdata.o \
	   HGTalkTalkWindow.o \
	   HGTalkAddBuddyWindow.o \
	   HGTalkAddGroupWindow.o \
	   HGTalkFileTransfersWindow.o \
	   HGTalkUserinfoWindow.o \
	   HGTalkStatusMenu.o \
	   HGTalkAboutMenuItem.o \
	   HGTalkPreferencesMenuItem.o \
	   HGTalkQuitMenuItem.o \
	   HGTalkMainMenuBar.o \
	   HGTalkAddBuddyMenuItem.o \
	   HGTalkAddGroupMenuItem.o \
	   HGTalkFileTransfersMenuItem.o
DEPEND=$(OBJECT:.o=.dep)

# Procedures
all : $(OBJECT)
	$(LD) -o $(TARGET) $(OBJECT) $(LDFLAGS)

clean :
	$(RM) $(TARGET) $(OBJECT) $(DEPEND)

help :
	@echo "make [all | clean | help}"
	@echo "all : Build HGTalk. (default)"
	@echo "	clean : Clean linux-fetion *.o *.dep"
	@echo "	help : Show help information."

# Standard Procedures
%.dep : %.cpp
	@$(PP) $(CXFLAGS) -MM -MT $(@:.dep=.o) -o $@ $<

%.o : %.cpp
	$(CX) $(CXFLAGS) -c -o $@ $<

-include $(DEPEND)

