CC      := gcc
LD      := ld
CFLAGS  :=
LDFLAGS := -shared -fPIC
SOURCE  := $(wildcard *.c)
OBJS    := $(patsubst %.c,%.o,$(SOURCE))
TARGET_LIB := main.so
CFLAGS += -fPIC
all:$(OBJS)
	echo $(OBJS)
	$(LD) $(LDFLAGS) -o $(TARGET_LIB) $(OBJS)

%.o:%.c
	@echo Compiling $< ...
	$(CC) -c $(CFLAGS)  $< -o $*.o

.PHONY: clean

clean:
	rm *.so *.o -rf