
#include "ReadAndAdd.hpp"

YoneticiListesi* ReadAndAdd::GetFillYoneticiListesi(){
    readLine();
    YoneticiListesi *tmp=new YoneticiListesi();
    int count=lineCount();
    for(int i=0;i<count;++i){
        tmp->add(this->lines[i]);
    }
    return tmp;
    
}



ReadAndAdd::ReadAndAdd(std::string fileName) {
    this->fileName = fileName;


    int numlines = lineCount();
    this->lines = new SatirListesi*[numlines];
    for (int i = 0; i < numlines; i++) {
        this->lines[i] = new SatirListesi();
    }
}

int ReadAndAdd::lineCount() {
    int counter = 0;
    std::ifstream file(this->fileName);
    std::string unused;
    while (std::getline(file, unused))
        ++counter;

    file.close();
    return counter;
}

void ReadAndAdd::readLine() {
    std::string token;
    std::ifstream file(this->fileName);
    std::string str;
    int index = 0;
    while (std::getline(file, token)) {
        std::istringstream ss(token);

        while (std::getline(ss, str, ' ')) {
            this->lines[index]->add(stoi(str));

        }
        index++;

    }
    file.close();
}

ReadAndAdd::~ReadAndAdd(){
	if(lines!=0){
		int count =lineCount();
		for (int i = 0; i < count; i++){
			if(lines[i]!=0) delete lines[i];
		}
		delete[] lines;
	}
	
}
