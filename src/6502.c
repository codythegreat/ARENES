#include "6502.h"
#include "bus.h"

// create an instance of our 6502 struct to emulate all cpu related operations
struct _6502 *create6502() {
    struct _6502 *cpu = malloc(sizeof(_6502));
    // TODO: assign initial variables
    return cpu;
}

void resetCPU() {
    // TODO: reset variables back to initial state
}

// interupts
void interuptCPU() {
    // TODO
}

// non-maskable interupts (I need to read up more on how these are handled
void nonMaskableInteruptCPU() {
    // TODO
}

// handle one clock cycle of emulation
void performClockCycle() {
    // TODO
}

// TODO: add getters/setters for flags

// TODO: add functions for addressing modes

// TODO: add functions for opcodes
