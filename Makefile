all:
	go build -o libgo.so -buildmode=c-shared go.go
maclualib:
	gcc -fPIC -dynamiclib -Wl,-undefined,dynamic_lookup -o xlua.so xlua.c -lgo -L.
	lua -e "l=require('xlua'); l.c_print()"
clean:
	-rm libgo.so xlua.so go.h
