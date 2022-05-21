#include <iostream>
#include <string.h>
using namespace std;

class physcData{
    public:
        physcData(string name, int height, double vision);

        double aveHeight(physcData* data); // same type dynamic array
        void distVision(physcData *data, int *dist);


    private:
        string name;
        int height;
        double vision;
};

int main(){


}

physcData::physcData(string name, int height, double vision) : name(name), height(height), vision(vision) {

};

double physcData::aveHeight(physcData *data){
    double sum = 0;

    for (int i = 0; i < _msize(data) / sizeof(physcData);i++){
        sum += data[i].height;

        return sum / _msize(data) / sizeof(physcData);
    }
};

void physcData::distVision(physcData* data, int* dist){
    int i = 0;
    dist[i] = 0;
    for (i = 0; i < _msize(data) / sizeof(physcData);i++){
        if (data[i].vision >=0.0 && data[i].vision <= )
    }
}