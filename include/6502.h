#if !defined( 6502_H )
# define 6502_H



/////////// FLAGS ///////////
// the 6502 processor uses
// a single byte to keep 
// track of several key 
// pieces of information
enum FLAGS
{
    C = (1<<0), // Carry
    Z = (1<<1), // Zero
    I = (1<<2), // Disable Interupts
    D = (1<<3), // Decimal Mode
    B = (1<<4), // Break
    U = (1<<5), // Unused
    V = (1<<6), // Overflow
    N = (1<<7), // Negative
};

/////////// Opcodes ///////////
// there are 56 legal opcodes
// and a few illegal opcodes 
// that we will cover. anything
// not covered here will be 
// captured with NIO (Non Impl-
// emented Opcode)

// TODO: build out 56 opcodes

// TODO: build out any illegal opcodes we need
