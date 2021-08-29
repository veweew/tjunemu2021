#include "cpu/exec/template-start.h"

#define instr jne

static void do_execute(){
    if(!cpu.eflags.ZF){
        cpu.eip+=op_src->val;
        if(ops_decoded.is_operand_size_16)
            cpu.eip=cpu.eip&0x0000FFFF;
    }
    print_asm_template1();
}
make_instr_helper(si)

#include "cpu/exec/template-end.h"