@echo off
g++ -c src/main.cpp -o obj/main.o
g++ obj/main.o -o bin/gui_wrapper
cd bin
gui_wrapper
pause