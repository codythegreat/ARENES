#if !defined( 6502_H )
# define 6502_H


/////////// FLAGS ///////////
// the 6502 processor uses
// a single byte to keep 
// track of several key 
// pieces of information
typedef enum
{
    C = (1<<0), // Carry
    Z = (1<<1), // Zero
    I = (1<<2), // Disable Interupts
    D = (1<<3), // Decimal Mode
    B = (1<<4), // Break
    U = (1<<5), // Unused
    V = (1<<6), // Overflow
    N = (1<<7), // Negative
} FLAGS;

struct _6502 {
    /////////// REGISTERS ///////////
    // the 6502 processor has three
    // primary registers, a (the 
    // accumulator) is used for math
    // operations, x and y are used
    // for looping. They are mostly
    // the same.
    uint8_t a = 0x00;
    uint8_t x = 0x00;
    uint8_t y = 0x00;
    // The stack points to current 
    // location on the bus
    uint8_t stackPtr = 0x00;
    uint16_t programCounter = 0x00;
    uint8_t status = 0x00;

    // pointer to the bus so that
    // our cpu can access the other
    // components
    struct bus *bus;

    FLAGS flags;
}

/////////// Opcodes ///////////
// there are 56 legal opcodes
// and a few illegal opcodes 
// that we will cover. anything
// not covered here will be 
// captured with NIO (Non Impl-
// emented Opcode)

// add with carry
uint8_t ADC();
// and (with accumulator)
uint8_t AND();
// arithmetic shift left
uint8_t ASL();
// branch on carry clear
uint8_t BCC();
// branch on carry set
uint8_t BCS();
// branch on equal
uint8_t BEQ();
// bit test
uint8_t BIT();
// branch on minus (negative set)
uint8_t BMI();
// branch on not equal (zero clear)
uint8_t BNE();
// branch on plus (negative clear)
uint8_t BPL();
// break
uint8_t BRK();
// branch on overflow clear
uint8_t BVC();
// branch on overflow set
uint8_t BVS();
// clear carry
uint8_t CLC();
// clear decimal
uint8_t CLD();
// clear interrupt disable
uint8_t CLI();
// clear overflow
uint8_t CLV();
// compare with accumulator
uint8_t CMP();
// compare with X
uint8_t CPX();
// compare with y
uint8_t CPY();
// decrement accumulator
uint8_t DEC();
// decrement x
uint8_t DEX();
// decrement y
uint8_t DEY();
// exclusive or with accumulator
uint8_t EOR();
// increment accumulator
uint8_t INC();
// increment x
uint8_t INX();
// increment y
uint8_t INY();
// jump
uint8_t JMP();
// jump to subroutine
uint8_t JSR();
// load accumulator
uint8_t LDA();
// load x
uint8_t LDX();
// load y
uint8_t LDY();
// logical shift right
uint8_t LSR();
// no operation
uint8_t NOP();
// or with accumulator
uint8_t ORA();
// push accumulator
uint8_t PHA();
// push processor status
uint8_t PHP();
// pull accumulator
uint8_t PLA();
// pull processor status
uint8_t PLP();
// rotate one bit left
uint8_t ROL();
// rotate one bit right
uint8_t ROR();
// return from interrupt
uint8_t RTI();
// return from subroutine
uint8_t RTS();
// subtract with carry
uint8_t SBC();
// set carry
uint8_t SEC();
// set decimal
uint8_t SED();
// set interrupt disable
uint8_t SEI();
// store accumulator
uint8_t STA();
// store x
uint8_t STX();
// store y
uint8_t STY();
// transfer accumulator to x
uint8_t TAX();
// transfer accumulator to y
uint8_t TAY();
// transfer stack pointer to X
uint8_t TSX();
// transfer x to accumulator
uint8_t TXA();
// transfer x to stack pointer
uint8_t TXS();
// transfer y to accumulator
uint8_t TYA();

// TODO: build out any illegal opcodes we need
// TODO: build out NIO opcode
