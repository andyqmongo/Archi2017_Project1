#include <iostream>
#include <fstream>
#include "simulator.h"
#include <string>
#include <bitset>
#include <vector>


int main(){
   
    std::ifstream ii("iimage.bin");
    std::ifstream di("dimage.bin");
    std::ofstream snap("snapshot.rpt");
    std::ofstream err("erro_dump.rpt");
    
    int ii_arr[1000];
    int di_arr[1000];

    bool catchFile = true;
    if(!ii){
        std::cout<<"didn't catch iimage.bin"<<std::endl;
        catchFile = false;
    }
    if(!di){
        std::cout<<"didn't catch dimage.bin"<<std::endl;
        catchFile = false;
    }
    if(!catchFile)
        return -1;
   int init;
   int commandNum;
   
   




    return 0;
}
