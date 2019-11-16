#include "bus.h"


uint8_t read(uint16_t address) {
    if (address >= 0x0000 && address <= 0xFFFF) {
        // TODO: map return values for each NES component
        return 
    }
    return 0x00;
}

void write(uint16_t address, uint8_t data);
