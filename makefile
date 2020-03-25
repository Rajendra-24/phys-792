.PHONY: all clean install debug
CXXFLAGS = -Wall -02
CXXFLAGS+= $(shell root-config --cflags)
LDLIBS = $(shell root-config --libs)

SRC = $(wildcard *.cc) 
EXE = $(SRC:.cc=)      

all: $(EXE)	
info:
	@echo $(SRC)
	@echo $(EXE)
	@echo $(LIBS)
	@echo $(CXXFLAGS)
clean:
	$(RM) $(EXE)

install:
	install $(EXE) ~/bin
	@echo Please add $(shell root-config --libdir)
	@echo to your LD_LIBRARY_PATH before you run any executable


