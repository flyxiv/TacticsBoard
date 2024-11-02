CC = gcc
CFLAGS = -Wall -g -I./src
SRCDIR = src
OBJDIR = obj

# 소스 파일과 오브젝트 파일 목록 생성
SOURCES = $(wildcard $(SRCDIR)/*.c) $(wildcard $(SRCDIR)/components/*.c)
OBJECTS = $(SOURCES:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

# 최종 실행 파일 이름
TARGET = ffxiv_tactic

# 기본 규칙
all: $(TARGET)

# 실행 파일 생성 규칙
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

# 오브젝트 파일 생성 규칙
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

# 청소 규칙
clean:
	rm -rf $(OBJDIR) $(TARGET)

.PHONY: all clean