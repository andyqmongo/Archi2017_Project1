#ifndef instruction_h
#define instruction_h

//set return as int, just for temp
int add();
int addu();
int sub();
int _and_();//add _ _ for logic operator
int _or_();
int _xor_();
int _nor_();
int _nand_();//add _ _ for logic operator
int slt();
int sll();
int srl();
int sra();
int jr();
int mult();
int multu();
int mhfi();
int mflo();
int addi();
int addii();
int lw();
int lh();
int lhu();
int lb();
int lbu();
int sw();
int sh();
int sb();
int lui();
int andi();
int ori();
int nori();
int slti();
int beq();
int bne();
int bgtz();
int _j_();//prevent from being mistake from index j
int jal();
int halt();

#endif
