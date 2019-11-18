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
    uint8_t programCounter = 0x00;
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

// TODO: build out 56 opcodes

// TODO: build out any illegal opcodes we need
