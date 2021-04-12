# vee-em Makefile
# James Mosedale

build_dir = build
source_dir = src

objects = $(build_dir)/main.o

all: vee-em 

vee-em: $(objects)
	cc -o $(build_dir)/vee-em $(objects)

$(objects): $(build_dir)/%.o : $(source_dir)/%.c
	cc -c $< -o $@
