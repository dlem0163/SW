
gtk = `pkg-config --libs --cflags gtk+-2.0`
dir = /home/dlem0163/2016SW/Project/SW/GSJ/

Card_GUI : Card_Gui.c
	gcc Card_Gui.c -o Card_GUI $(gtk) -L./lib -lfuncs -I./include 

clean :
	rm Card_GUI
