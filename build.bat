@echo off
g++ -c src/window/window.cpp -o obj/window.o
g++ -c src/test_1.cpp -o obj/test_1.o
g++ obj/test_1.o obj/window.o -o bin/test_1
pause