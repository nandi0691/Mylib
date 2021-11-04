TARGET:exe
exe:	appl.o libd_ll.a
	gcc appl.o -o exe -L . -ld_ll 
appl.o:	appl.c
	gcc -c appl.c -o appl.o
libd_ll.a:	Dll_util.o Dll.o
	ar rs libd_ll.a Dll_util.o Dll.o
Dll_util.o:	Dll_util.c
	gcc -c Dll_util.c -o Dll_util.o
Dll.o:	Dll.c
	gcc -c Dll.c -o Dll.o
clean:	
	rm -rf Dll.o
	rm -rf Dll_util.o
	rm -rf libd_ll.a
	rm -rf appl.o

