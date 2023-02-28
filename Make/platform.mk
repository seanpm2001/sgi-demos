UNAME:=$(shell uname -s)
ifeq ($(UNAME),Linux)
    SDL_LIB=-lSDL2
else
    ifeq ($(UNAME),Darwin)
        SDL_LIB=-F/Library/Frameworks -framework SDL2
    endif
endif

RASTERIZER_SRCS = ../libgl/reference_rasterizer.c ../libgl/sdl_framebuffer.c
EVENTS_SRCS = ../libgl/sdl_gl_events.c
LIBGL_SRC = ../libgl/gl.c ../libgl/vector.c $(RASTERIZER_SRCS) $(EVENTS_SRCS)
LIBGL_INC = -I../sys_include
DEMO_INC = -I../demo_include
BIN_DIR = ./bin
WEB_DIR = ./web
OPT_ZERO = -O0 -g
EM_OPT_ZERO = -O0 -g -g3 -gsource-map 
OPT_TWO = -DNDEBUG -O2
OPT = $(OPT_TWO)
EM_OPT = $(EM_OPT_ZERO)

CC = cc
EMCC = emcc -s ASSERTIONS=2 -s SAFE_HEAP=1 -s SAFE_HEAP_LOG -s STACK_OVERFLOW_CHECK=2 -s DEMANGLE_SUPPORT=1 -s WASM=1 
OLD_CODE_CC = $(CC) -std=c90
OLD_CODE_EMCC = $(EMCC) -std=c90
OLD_CODE_WARN_OFF = -Wno-implicit-function-declaration -Wno-implicit-int -Wno-unused-value -Wno-return-type -Wno-parentheses -Wno-gcc-compat -Wno-pointer-sign -Wno-int-conversion -Wno-out-of-scope-function -Wno-format-extra-args -Wno-unused-command-line-argument 
OLD_CODE_WARN_OFF_EM = $(OLD_CODE_WARN_OFF) -Wno-deprecated-non-prototype