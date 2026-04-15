@echo off
chcp 65001 > nul
g++ main.cpp -o main.exe
main.exe < input.txt > output.txt