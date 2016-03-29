main.exe: main.obj myclass.obj hoge.obj
	link.exe main.obj myclass.obj hoge.obj

main.obj: code\main.cpp code\myclass.cpp
	cl.exe /c code\\main.cpp

myclass.obj: code\myclass.cpp code\hoge.cpp
	cl.exe /c code\\myclass.cpp

hoge.obj: code\hoge.cpp
	cl.exe /c code\\hoge.cpp
