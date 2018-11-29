
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <iostream>
#include <string>

using namespace std;

int main(){

	string com = "play /home/andres/Desktop/Autosound/zelda_sound.mp3";
	cout << "Command: " << com << endl;
	system(com.c_str());
	return 0;

}
