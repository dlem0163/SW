gtk = `pkg-config --libs --cflags gtk+-2.0`
dir = /home/dlem0163/2016SW/Project/SW/GSJ/

Card_GUI : Card_Gui.c
	gcc -g -Wall Card_Gui.c -o Card_GUI -L../lib -lfuncs -I../include $(gtk)

clean:
	rm Card_GUI
