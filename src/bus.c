#include "bus.h"

bus *createBus(struct _6502 *cpu6502, struct ) {
    bus *b = {cpu6502, };
    return b;
}
uint8_t read(uint16_t address) {
    if (address >= 0x0000 && address <= 0xFFFF) {
        // TODO: map return values for each NES component
        return 
    }
    return 0x00;
}

void write(uint16_t address, uint8_t data) {
    if (address >= 0x0000 && address <= 0xFFFF) {
        bus->ram[address] = data;
    } else {
        // TODO: handle error
    }
}
