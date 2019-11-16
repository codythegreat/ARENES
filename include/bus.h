#if !defined( BUS_H )
# define BUS_H

/////////// bus struct ///////////
// Connects components together
// for reading and writing of
// data
struct bus {
    struct cpu6502 *cpu6502;
    struct memory6502 *mem6502;
    struct apu *apu;
    struct cartridge *cartridge;
    struct ppu *ppu;
}

uint8_t read(uint16_t address);
void write(uint16_t address, uint8_t data);

#endif
