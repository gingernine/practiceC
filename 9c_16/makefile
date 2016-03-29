#reference:
#http://www.ie.u-ryukyu.ac.jp/~e085739/c.makefile.tuts.html#id8
#http://minus9d.hatenablog.com/entry/20140203/1391436293

#define macros
vpath %.h include
vpath %.c code
CPPFLAGS = -I include
SOURCES = \
	structure2_2.c\
	stringcopy.c
OBJECTS = $(subst .c, .obj, $(SOURCES))

#create exe
structure2_2.exe: $(OBJECTS)

#read .d file
-include $(subst .c, .d, $(SOURCES))

%.d: %.c
	cl -M $(CPPFLAGS) $< > $@.$$$$; \
	sed 's,\($*\)\.obj[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
	rm -f $@.$$$$

.PHONY: clean
clean:
	del *.obj
