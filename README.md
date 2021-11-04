# Mylib
#this illustrates usage of static and dynamic library
//To compile .o files
gcc -c Dll_util.c -o Dll_util.o

//To Create static library
ar rs lib<some_name>.a <file>.o
ar rs libdll.a Dll.o Dll_util.o

//To create Dynamic library
gcc -c -fPIC Dll_util.c -o Dll_util.o
gcc Dll.o Dll_util.o -shared -o libdll.so

PIC - Position independent code Flag

//Linking static library
//To use library use .h file and compile the application
gcc -c appl.c -o appl.o
gcc appl.o -o exe -L . -ldll
"gcc <appl_name>.o -o <executable> -L <path_of_static_lib> -l<lib_name>"


//Linking dynamic library
//Place libdll.so in /usr/lib/ and run command "sudo ldconfig"
//Compile like below
"gcc appl.o -o exe  -ldll"
//run the executable

