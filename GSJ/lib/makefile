Rc = RandomCard
Wi = Widget
gtk = `pkg-config --libs --cflags gtk+-2.0`
dir = /home/dlem0163/2016SW/Project/SW/GSJ/include
lib = libfuncs.a
gw = -g -Wall
$(lib) : $(Wi).o
	ar rv $(lib) $(Wi).o

$(Wi).o : $(Wi).c 
	gcc -g -Wall -c $(Wi).c  -I$(dir) $(gtk)

clean:
	rm *.o libfuncs.a
