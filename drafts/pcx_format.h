
#ifndef CPP_PRINCIPLES_PCX_FORMAT_H
#define CPP_PRINCIPLES_PCX_FORMAT_H

typedef  unsigned char Byte;
typedef unsigned short Word;

typedef struct {
    Byte
        pcx_sign,       // 0x0A for correct PCX file
        version,        // PCX file version
        is_encode_rle,  // 1 for RLE image encode
        bits_per_pixel; // Bits per one pixel

    Word x1, y1, x2, y2; // Image corners position

    Word h_res, v_res;   // Image resolution

    Byte palette[48]; // 16 colors image palette (3x16)

    Byte
        screen_mode,    // not used
        planes_num;     // number of image planes

    Word
        bytes_per_line, // bytes per 1 image line
        color_flag,     // 1 - color palette; 2 - gray scale image
        screen_h_res, screen_v_res; // screen size, not used

    Byte unused[54]; // reserved, fill to 128 bytes
} PCX;

#endif //CPP_PRINCIPLES_PCX_FORMAT_H

// static Byte palette[256][3];
