
#include "DisplayAtConsole.hpp"

DisplayAtConsole::DisplayAtConsole(YoneticiListesi* yonetici) {
    this->yonetici = yonetici;
    if (this->yonetici->Count() < DisplayperOnePage) {
        this->finishOffset = this->yonetici->Count();
    } else {
        this->finishOffset = DisplayperOnePage;
    }

    this->beginOffset = BeginOffset;

}

void DisplayAtConsole::setOffsets() {
    int page = state / DisplayperOnePage;
    this->beginOffset = DisplayperOnePage*page;
    this->finishOffset = DisplayperOnePage * (page + 1);
    if (this->finishOffset >= this->yonetici->Count()) {
        this->finishOffset = this->yonetici->Count();

    }
}

void DisplayAtConsole::setState(Direction dr) {

    if (dr == up) {
        if (state >= this->yonetici->Count() - 1) {
            return;
        }
        ++state;
        setOffsets();
    } else if (dr == down) {
        if (state <= 0) {

            return;
        }
        --state;
        setOffsets();
    } else if (dr == refresh) {
        setOffsets();
    }

}

void DisplayAtConsole::SetPage(PageDirection pdr) {
    if (pdr == downPage) {
        for (int i = 0; i < DisplayperOnePage; ++i) {
            this->setState(down);
        }
    } else if (pdr == upPage) {
        for (int i = 0; i < DisplayperOnePage; ++i) {
            this->setState(up);
        }
    }
}

void DisplayAtConsole::printYoneticiListesi() {

    int count = yonetici->Count();
    system("cls");
    if (count == 0) {
        cout << "Goruntulenecek bir Yonetici listesi yok\n";
        exit(1);
        return;
    }


    ConsolePosition.gotoxy(0, 0);
    if (this->beginOffset == 0) {
        cout << "<--ilk--";
    } else {
        cout << "<---geri--";
    }


    int showingNodeCount = this->finishOffset - this->beginOffset;
    showingNodeCount *= 13;


    ConsolePosition.gotoxy(showingNodeCount, 0);


    if (this->finishOffset == yonetici->Count()) {
        cout << "--son-->";
    } else {
        cout << "--ileri-->";
    }
    for (int i = this->beginOffset; i<this->finishOffset; ++i) {


        int mod = i % DisplayperOnePage;
        this->yonetici->printIndex(i, 15 * mod, 1);

    }
    this->printSelectedSatirListesi((this->state % DisplayperOnePage) *15, 9);
}

 void DisplayAtConsole::printSelectedSatirListesi(int x, int y) {
        this->yonetici->elementAt(this->state)->printSatirListesi(x, y);

    }
  int DisplayAtConsole::DisplayRandomSelectedNode()throw (IndexOutOfBounds, NoSuchElement) {

        int randomSelected = this->yonetici->randomGenerator(this->state);
        int xPosition = ((this->state % DisplayperOnePage) + 1)*15;
        int yPosition = (randomSelected)*6;
        yPosition += 12;
        ConsolePosition.gotoxy(xPosition, yPosition);
        cout << "<--silinecek";
        yPosition = this->yonetici->elementAt(this->state)->Count()*6 + 12;

        ConsolePosition.gotoxy(0, yPosition - 1);


        return randomSelected;

    }
  void DisplayAtConsole::DeleteYoneticiNode() {
        this->yonetici->removeAt(this->state);
       this->setState(refresh);
      
        if(this->state==this->finishOffset){
            this->state--;
        }
         this->setState(refresh);

   

    }
  void DisplayAtConsole::DeleteRandomSelectedNode(int randomIndex)throw (IndexOutOfBounds, NoSuchElement) {
        this->yonetici->randomRemoveAtSatirListesi(this->state, randomIndex);
    }
