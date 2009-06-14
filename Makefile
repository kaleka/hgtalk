# Toolchain Setup
PP=cpp
CX=g++
LD=$(CX)
RM=rm -f

# Compilation Configurations
CXFLAGS=-g `pkg-config --cflags gtkmm-2.4 jinglebase-0.3 jinglexmpp-0.3`
LDFLAGS=-g `pkg-config --libs gtkmm-2.4 jinglebase-0.3 jinglexmpp-0.3`

# Objectives
TARGET=hgtalk
OBJECT=main.o \
	   HGTalkWindow.o \
	   HGTalkLoginBox.o \
	   HGTalkMainBox.o \
	   HGTalkStatusIcon.o \
	   HGTalkSettingsButton.o \
	   HGTalkAboutButton.o \
	   HGTalkLoginButton.o \
	   HGTalkConfig.o \
	   HGTalkUsernameEntry.o \
	   HGTalkPasswordEntry.o \
	   HGTalkRempassButton.o \
	   HGTalkAboutDialog.o \
	   HGTalkSettingsDialog.o \
	   HGTalkUserdata.o \
	   HGTalkTalkWindow.o
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

