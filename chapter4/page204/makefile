all: oggswing swing.ogg

oggswing: oggswing.c oggswing.h
	gcc oggswing.c -o oggswing -lcurl

swing.ogg: whitennerdy.ogg oggswing
	./oggswing whitennerdy.ogg swing.ogg
