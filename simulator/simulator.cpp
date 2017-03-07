#include <iostream>
#include <fstream>
#include "simulator.h"
#include <string>
#include <bitset>
#include <vector>

class Inst{
    //std::bitset<6> op;
   // std::bitset<5> rs, rt, rd, shamt;
   // std::bitset<6> funct;
    int op, rs, rt, rd ,shamt, funct;
public:
    Inst(){
        std::cout<<"didn't catch binary instruction."<<std::endl;
    }
    Inst(int bs){
	op =  
	rs = 
	rd = 
	shamt = 
	funct = 
    }
    ~Inst();

void decode(){
    
}
}

int main(){
   
    std::ifstream ii("iimage.bin");
    std::ifstream di("dimage.bin");
    std::ofstream snap("snapshot.rpt");
    std::ofstream err("erro_dump.rpt");
    
    std::vector<std::string> str_ii;
    std::vector<std::string> str_di;
    //std::bitset<32> bitstring; 
    
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
    
    //not yet
    ii >> str_ii[0];//load initial state
    ii >> str_ii[1];//load number of instructions
    //not yet
    std::bitset<32> bitstring (str_ii[1]);
    int instrucNo = (int)(bitstring.to_ulong());
    
    




    return 0;
}
