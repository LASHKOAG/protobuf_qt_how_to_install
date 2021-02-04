1. Install protobuf

	================================================================================================================
	https://www.youtube.com/watch?v=KPoBaBpr2XI&t=303s

	Commands to install protocol Buffer on terminal (linux):

	$ sudo apt-get install autoconf automake libtool curl make g++ unzip
	$ wget https://github.com/protocolbuffers/pr...​
	$ tar -xvzf protobuf-cpp-3.11.0.tar.gz
		or:
		download:
		https://github.com/protocolbuffers/protobuf/releases/tag/v2.6.0
	$ cd protobuf-cpp-3.11.0
	$ ./configure
	$ make -j10
	$ make check -j10
	$ sudo make install -j10
	$ sudo ldconfig

	protoc --version

	if failed
		if it shows error "protoc: error while loading shared libraries: libprotoc.so.9: cannot open shared object file: No such file or directory"
	sudo updatedb locate libprotoc.so.9
	/usr/local/lib/libprotoc.so.9 /usr/local/lib/libprotoc.so.9.0.1
		we need add it to LD_LIBRARY_PATH
			sudo nano ~/.bashrc
		and add
			export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/lib
	source ~/.bashrc

2. Test
	create hello.proto
	if was installed protobuf compiler = 2 then see --> addressbook.proto
	if was installed protobuf compiler = 3 then see --> hello.proto

	$ protoc --cpp_out=. hello.proto

	next step:
	create hi.cpp
	--> include hello.pb.h
	--> see example hi.cpp
	--> g++ -std=c++17 C_file.cpp protofile.pb.cc -o binaryfilename `pkg-config --cflags --libs protobuf`
	--> ./binaryfilename
	
	for example:
		$ g++ -std=c++17 hi.cpp hello.pb.cc -o out_name `pkg-config --cflags --libs protobuf`

		$ ./out_name
3. Install QT

	Install QTCreator on Ubuntu 20.04 / 18.04

	or run script qt_install.sh

	:~$ sudo apt install qtcreator
	:~$ sudo apt install build-essential
	:~$ sudo apt install qt5-default
	:~$ sudo apt install qt5-doc qt5-doc-html qtbase5-doc-html qtbase5-examples

	run programm from terminal:
		--> sudo qtcreator

4. proto + qt
	create non-qt c++ project:
	$ sudo chmod 777 -R project_name_folder/

	
		--> include hello.pb.h in main.cpp
	
	in .pro file added:

		--> INCLUDEPATH += /usr/local/include
		--> LIBS += -L/usr/local/include/google/protobuf -lprotobuf
	see
		qt_proto_example folder