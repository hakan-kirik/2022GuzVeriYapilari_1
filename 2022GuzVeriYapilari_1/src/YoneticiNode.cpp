
#include "YoneticiNode.hpp"


YoneticiNode::YoneticiNode(SatirListesi* data, YoneticiNode *next , YoneticiNode *prev) {
    this->data = data;
    this->next = next;
    this->prev = prev;
    this->average = calculateAverage();
}

YoneticiNode::YoneticiNode(SatirListesi* data, YoneticiNode *next ) {
    this->data = data;
    this->next = next;
    this->prev = prev;
    this->average = calculateAverage();
}

YoneticiNode::YoneticiNode(SatirListesi* data) {
    this->data = data;
    this->next = next;
    this->prev = prev;
    this->average = calculateAverage();
}
double YoneticiNode::calculateAverage() {
    double total = 0;
    if (this->data->isEmpty())
        return total;

    int count = this->data->Count();
    for (int i = 0; i < count; ++i) {
        total += this->data->elementAt(i);
    }
    return total / count;
}
