CC = gcc
PKGCONFIG = pkg-config
CFLAGS = -Wall -g -I./src $(shell $(PKGCONFIG) --cflags gtk4)
CFLAGS += -D_WIN32_WINNT=0x0601 -DWINVER=0x0601
CFLAGS += -mwindows
LIBS = $(shell $(PKGCONFIG) --libs gtk4)
SRCDIR = src
OBJDIR = obj

# 소스 파일과 오브젝트 파일 목록 생성
SOURCES = $(wildcard $(SRCDIR)/*.c) $(wildcard $(SRCDIR)/components/*.c)
OBJECTS = $(SOURCES:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

# 최종 실행 파일 이름
TARGET = ffxiv_tactic.exe

# 오브젝트 디렉토리 생성
$(shell mkdir -p $(OBJDIR) $(OBJDIR)/components)

# 기본 규칙
all: $(TARGET)

# 실행 파일 생성 규칙
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)

# 오브젝트 파일 생성 규칙
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

# 청소 규칙
clean:
	rm -rf $(OBJDIR) $(TARGET)

.PHONY: all clean