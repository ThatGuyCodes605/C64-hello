# C64-hello
An overly complicated Hello World program for the C64 maxi
Running it on the C64

You can simply open your favorite C64 emulator, then drag and drop the test.prg file or put that file into a tape or floppy, then plug it into your C64 and run:

   LOAD "TEST.PRG",8,1  
   RUN

Building from source

Make sure CC65 is installed for this: To install for Debian-based systems, run:

sudo apt install cc65

For arch-based systems, use:

sudo pacman -S cc65

then run:

cl65 -t c64 -o test.prg test.c
