## SGI demos from long ago, running in your browser [today](https://sgi-demos.github.io).
_Old problems require modern solutions._ 

This is the original SGI demo source code, compiled for the web using Emscripten and SDL2.  Rendering is done using an IRIS GL software rasterizer from the [Alice 4 project](https://lkesteloot.github.io/alice/alice4/libgl.html).  Event handling is done by SDL2, with events translated into GL's event system.  Each demo is a separate web page, with its own Javascript + WASM compiled by Emscripten from the original C/C++ source.  Minimal modifications have been made to the original source, in order to run in the browser and to work with compilers 35 years newer.

Working demos:
- [Buttonfly](https://sgi-demos.github.io/)
- [Bounce](https://sgi-demos.github.io/sgi-demos/bounce/web/bounce_full.html)
- [Ideas](https://sgi-demos.github.io/sgi-demos/ideas/web/ideas_full.html)
- [Insect](https://sgi-demos.github.io/sgi-demos/insect/web/insect_full.html)
- [Jello](https://sgi-demos.github.io/sgi-demos/jello/web/jello_full.html)
- [Logo](https://sgi-demos.github.io/sgi-demos/logo/web/logo_full.html)
- [Twilight](https://sgi-demos.github.io/sgi-demos/twilight/web/twilight_full.html) 

Work in progress demos:
- [Flight](https://sgi-demos.github.io/sgi-demos/flight/web/flight_full.html) (cockpit glitches, planes too slow in web version, night mode 'shimmers', no network play)
- [Newave](https://sgi-demos.github.io/sgi-demos/newave/web/newave_full.html) (no mesh editing, no popup menus, only wireframe)
- [Arena](https://sgi-demos.github.io/sgi-demos/arena/web/arena_full.html) (no network play)

Next up:
- Electropaint, Cedit, any other IRIS GL demos I can find

To do:
- Arbitrary window size
- Triangle rendering via OpenGLES/WebGL
- Popup menus
- Rudimentary context for each demo: name, author, year (as text in lower corner), code link
- Virtual mouse and keyboard:
  - Only display virtual keys and mouse functions used by the demo; use demo's qdevice() calls to determine this
  - Displayed as transparent virtual mouse and key pictures overlaid on demo
  - On always for touch devices
  - On/off for mouse/keyboard devices, as hints
- More demos, _all the demos_. WIP: IRIS GL, TBD: OpenGL, GLUT, Inventor, Performer
- Run GL demo in its own WASM worker, to avoid slicing up the code for SDL's event loop
- Description/history/context for each demo - can obtain some descriptions from .Info slide files
- Man pages

Credits:
- Everyone who worked at [SGI](https://en.wikipedia.org/wiki/Silicon_Graphics), for the eye candy and the baller computers.
- The [Alice 4 folks](https://lkesteloot.github.io/alice/alice4/), for the inspiration and the GL implementation.
- [Emscripten](https://emscripten.org) and [SDL](https://www.libsdl.org) teams, for making a web port possible.
- [Internet Archive](https://archive.org/search?query=sgi&and%5B%5D=mediatype%3A%22software%22), [Bitsavers](https://bitsavers.org/bits/SGI/mips/cd/), [WinWorld](https://winworldpc.com/search?q=irix), [IRIXNet](https://irixnet.org/files.html), and others, for saving the history.
