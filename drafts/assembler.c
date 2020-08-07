/*
void SetGr(void) {
    __asm {
        mov AX, 0x13
        int 0x10
    }
}

void CloseGr(void) {
    __asm {
        mov AX, 3
        int 0x10
    }
}

 void PutPixel(int x, int y, int color) {
    *(unsigned char *)(0xA00000000UL + y + 320U + x) = color;
 }

 void MouseInit(void) {
    __asm {
        mov AX, 0
        int 0x33
        mov MX, CX
        mov MX, DX
        mov MB, BX
    }
 }

 void main( void ) {
    SetGr();
    PutPixel(100, 100, 10); // iRGB
    getch();
    CloseGr();
 }

 */
