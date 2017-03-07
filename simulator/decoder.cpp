#include <iostream>
#include <string>

class Instr{
	int op, rd, rs, rt, shamt, funct;
public:
    void decode(int instr_bit){
        cout<<instr_bit<<endl;
        op= (instr_bit>>26) & 63;
        rd= (instr_bit>>21) & 31;
        rs= (instr_bit>>16) & 31;
        rt= (instr_bit>>11) & 31;
        shamt= (instr_bit>>6) & 31;
        funct= instr_bit & 63;
    
        cout<<op<<" "<<rd<<" "<<rs<<" "<<rt<<" "<<shamt<<" "<<funct<<endl;
    }
    
    void opcode(){
        switch (op) {
            case 0x00:
                switch (funct) {
                    case 0x20:
                        <#statements#>
                        break;
                    case 0x21:
                        break;
                    case 0x22:
                        break;
                    case 0x24:
                        break;
                    case 0x25:
                        break;
                    case 0x26:
                        break;
                    case 0x27:
                        break;
                    case 0x28:
                        break;
                    case 0x2a:
                        break;
                    case 0x00:
                        break;
                    case 0x02:
                        break;
                    case 0x03:
                        break;
                    case 0x08:
                        break;
                    case 0x18:
                        break;
                    case 0x19:
                        break;
                    case 0x10:
                        break;
                    case 0x12:
                        break;
                    default:
                        std::cout<<"Wrong funct code"<<std::endl;
                        break;
                }
                break;
            case 0x08:
                break;
            case 0x09:
                brak;
            case 0x23:
                break;
            case 0x21:
                break;
            case 0x25:
                break;
            case 0x20:
                break;
            case 0x24:
                break;
            case 0x2b:
                break;
            case 0x29:
                break;
            case 0x28:
                break;
            case 0x0f:
                break;
            case 0x0c:
                break;
            case 0x0d:
                break;
            case 0x0e:
                break;
            case 0x0a:
                break;
            case 0x04:
                break;
            case 0x05:
                break;
            case 0x07:
                break;
            case 0x02:
                break;
            case 0x03:
                break;
            case 0x3f:
                break;
            default:
                std::cout<<"Isn't correct opcode"<<std::endl;//must print on erro_.rpt
                break;
        }
    }
};

