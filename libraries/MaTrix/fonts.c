#include <avr/pgmspace.h>

unsigned const char font5x8[781] PROGMEM={
        0x05,0x08,0x20,0x8f,0x06,           // ширина, высота, смещение, количество символов, max количество символов в строке
        0x00,0x05,0x02,0x07,0x04,0x01,      // сдвиг относительно самого левого бита (младшей) матрицы
        0x00,0x00,0x01,0x01,0x02,0x03,      // номер матрицы, которая участвует в формировании символа (младшая)
        0x05,0x01,0x05,0x02,0x03,0x05,      // номер матрицы, которая участвует в формировании символа (старшая)
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // <Space>
        0x04,0x04,0x04,0x04,0x00,0x04,0x04,0x00, // !
        0x0A,0x0A,0x00,0x00,0x00,0x00,0x00,0x00, // "
        0x00,0x06,0x0F,0x06,0x0F,0x06,0x00,0x00, // #
        0x02,0x06,0x0A,0x06,0x05,0x06,0x04,0x00, // $
        0x00,0x0C,0x0D,0x02,0x04,0x0B,0x03,0x00, // %
        0x00,0x04,0x0A,0x04,0x0B,0x0A,0x05,0x00, // &
        0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00, // '
        0x02,0x04,0x08,0x08,0x08,0x08,0x04,0x02, // (
        0x08,0x04,0x02,0x02,0x02,0x02,0x04,0x08, // )
        0x00,0x04,0x15,0x0E,0x0E,0x15,0x04,0x00, // *
        0x00,0x04,0x04,0x1F,0x04,0x04,0x00,0x00, // +
        0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x08, // ,
        0x00,0x00,0x00,0x1F,0x00,0x00,0x00,0x00, // -
        0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x00, // .
        0x00,0x00,0x01,0x02,0x04,0x08,0x10,0x00, // /
        0x06,0x09,0x09,0x09,0x09,0x09,0x06,0x00, // 0
        0x02,0x06,0x0A,0x02,0x02,0x02,0x0F,0x00, // 1
        0x06,0x09,0x01,0x01,0x02,0x04,0x0F,0x00, // 2
        0x06,0x09,0x01,0x06,0x01,0x09,0x06,0x00, // 3
        0x01,0x03,0x05,0x09,0x0F,0x01,0x01,0x00, // 4
        0x0F,0x08,0x08,0x0E,0x01,0x01,0x0E,0x00, // 5
        0x06,0x09,0x08,0x0E,0x09,0x09,0x06,0x00, // 6
        0x0F,0x01,0x02,0x04,0x08,0x08,0x08,0x00, // 7
        0x06,0x09,0x09,0x06,0x09,0x09,0x06,0x00, // 8
        0x06,0x09,0x09,0x07,0x01,0x09,0x06,0x00, // 9
        0x00,0x00,0x04,0x04,0x00,0x04,0x04,0x00, // :
        0x00,0x00,0x04,0x04,0x00,0x04,0x04,0x08, // ;

        0x00,0x01,0x02,0x04,0x08,0x04,0x02,0x01, // <
        0x00,0x00,0x00,0x0F,0x00,0x0F,0x00,0x00, // =
        0x00,0x08,0x04,0x02,0x01,0x02,0x04,0x08, // >
        0x06,0x09,0x01,0x02,0x04,0x00,0x04,0x04, // ?
        0x00,0x06,0x09,0x0B,0x0B,0x0B,0x08,0x07, // @
        0x06,0x09,0x09,0x09,0x09,0x0F,0x09,0x09, // A
        0x0E,0x09,0x09,0x0E,0x09,0x09,0x09,0x0E, // B
        0x06,0x09,0x08,0x08,0x08,0x08,0x09,0x06, // C
        0x0E,0x09,0x09,0x09,0x09,0x09,0x09,0x0E, // D
        0x0F,0x08,0x08,0x0F,0x08,0x08,0x08,0x0F, // E
        0x0F,0x08,0x08,0x0F,0x08,0x08,0x08,0x08, // F
        0x06,0x09,0x08,0x08,0x0B,0x09,0x09,0x06, // G
        0x09,0x09,0x09,0x09,0x0F,0x09,0x09,0x09, // H
        0x07,0x02,0x02,0x02,0x02,0x02,0x02,0x07, // I
        0x0F,0x01,0x01,0x01,0x01,0x01,0x09,0x06, // J
        0x09,0x09,0x0A,0x0C,0x0A,0x09,0x09,0x09, // K
        0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x0F, // L
        0x11,0x11,0x1B,0x15,0x15,0x11,0x11,0x11, // M
        0x09,0x09,0x09,0x0D,0x0B,0x09,0x09,0x09, // N
        0x06,0x09,0x09,0x09,0x09,0x09,0x09,0x06, // O
        0x0E,0x09,0x09,0x09,0x0E,0x08,0x08,0x08, // P
        0x06,0x09,0x09,0x09,0x09,0x09,0x0B,0x07, // Q
        0x0E,0x09,0x09,0x09,0x0E,0x09,0x09,0x09, // R
        0x06,0x09,0x08,0x06,0x01,0x01,0x09,0x06, // S
        0x1F,0x04,0x04,0x04,0x04,0x04,0x04,0x04, // T
        0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x06, // U
        0x11,0x11,0x11,0x11,0x11,0x11,0x0A,0x04, // V
        0x11,0x11,0x11,0x11,0x15,0x15,0x0A,0x0A, // W
        0x11,0x11,0x0A,0x04,0x0A,0x11,0x11,0x11, // X
        0x11,0x11,0x11,0x0A,0x04,0x04,0x04,0x04, // Y
        0x0F,0x01,0x01,0x02,0x04,0x08,0x08,0x0F, // Z
        0x0E,0x08,0x08,0x08,0x08,0x08,0x08,0x0E, // [
        0x08,0x08,0x04,0x04,0x02,0x02,0x01,0x01, // b_slash
        0x0E,0x02,0x02,0x02,0x02,0x02,0x02,0x0E, // ]
        0x04,0x0A,0x11,0x00,0x00,0x00,0x00,0x00, // ^
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F, // _
        0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00, // '
        0x00,0x00,0x00,0x07,0x09,0x09,0x09,0x07, // a
        0x08,0x08,0x08,0x0E,0x09,0x09,0x09,0x0E, // b
        0x00,0x00,0x00,0x07,0x08,0x08,0x08,0x07, // с
        0x01,0x01,0x01,0x07,0x09,0x09,0x09,0x07, // d
        0x00,0x00,0x00,0x06,0x09,0x0F,0x08,0x07, // e
        0x03,0x04,0x04,0x0E,0x04,0x04,0x04,0x04, // f
        0x00,0x00,0x07,0x09,0x09,0x07,0x01,0x0E, // g
        0x08,0x08,0x08,0x0E,0x09,0x09,0x09,0x09, // h
        0x00,0x02,0x00,0x02,0x02,0x02,0x02,0x02, // i
        0x00,0x02,0x00,0x02,0x02,0x02,0x02,0x04, // j
        0x08,0x08,0x08,0x09,0x0A,0x0C,0x0A,0x09, // k
        0x04,0x0C,0x04,0x04,0x04,0x04,0x04,0x03, // l
        0x00,0x00,0x00,0x1E,0x15,0x15,0x15,0x15, // m
        0x00,0x00,0x00,0x0E,0x09,0x09,0x09,0x09, // n
        0x00,0x00,0x00,0x06,0x09,0x09,0x09,0x06, // o
        0x00,0x00,0x00,0x0E,0x09,0x09,0x0E,0x08, // p
        0x00,0x00,0x00,0x07,0x09,0x09,0x07,0x01, // q
        0x00,0x00,0x00,0x0E,0x09,0x08,0x08,0x08, // r
        0x00,0x00,0x00,0x07,0x08,0x06,0x01,0x0E, // s
        0x04,0x04,0x0E,0x04,0x04,0x04,0x04,0x03, // t
        0x00,0x00,0x00,0x09,0x09,0x09,0x09,0x07, // u
        0x00,0x00,0x00,0x11,0x11,0x11,0x0A,0x04, // v
        0x00,0x00,0x00,0x11,0x11,0x15,0x15,0x0A, // w
        0x00,0x00,0x00,0x11,0x0A,0x04,0x0A,0x11, // x
        0x00,0x00,0x00,0x09,0x09,0x07,0x01,0x06, // y
        0x00,0x00,0x00,0x0F,0x02,0x04,0x08,0x0F, // z
        0x00,0x02,0x04,0x04,0x08,0x04,0x04,0x02, // {
        0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04, // |
        0x00,0x08,0x04,0x04,0x02,0x04,0x04,0x08, // }
};

unsigned const char font6x8[1260] PROGMEM={
        0x06,0x08,0x20,0x99,0x05,            // ширина, высота, смещение, количество символов, max количество символов в строке
        0x00,0x06,0x04,0x02,0x00,0x00,       // сдвиг относительно самого левого бита (младшей) матрицы
        0x00,0x00,0x01,0x02,0x03,0x00,       // номер матрицы, которая участвует в формировании символа (младшая)
        0x05,0x01,0x02,0x05,0x05,0x00,       // номер матрицы, которая участвует в формировании символа (старшая)
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // sp
        0x04,0x04,0x04,0x04,0x00,0x04,0x04,0x00, // !
        0x0A,0x0A,0x00,0x00,0x00,0x00,0x00,0x00, // "
        0x00,0x0A,0x1F,0x0A,0x1F,0x0A,0x00,0x00, // #
        0x04,0x0E,0x14,0x0E,0x05,0x0E,0x04,0x00, // $
        0x18,0x19,0x02,0x04,0x08,0x13,0x03,0x00, // %
        0x00,0x0C,0x12,0x0C,0x13,0x12,0x0D,0x00, // &
        0x04,0x08,0x00,0x00,0x00,0x00,0x00,0x00, // '
        0x02,0x04,0x08,0x08,0x08,0x08,0x04,0x02, // (
        0x08,0x04,0x02,0x02,0x02,0x02,0x04,0x08, // )
        0x00,0x04,0x15,0x0E,0x0E,0x15,0x04,0x00, // *
        0x00,0x00,0x04,0x04,0x1F,0x04,0x04,0x00, // +
        0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x08, // ,
        0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x00, // -
        0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x00, // .
        0x00,0x01,0x02,0x04,0x08,0x10,0x20,0x00, // /
        0x0E,0x11,0x11,0x11,0x11,0x11,0x0E,0x00, // 0
        0x04,0x0C,0x14,0x04,0x04,0x04,0x1F,0x00, // 1
        0x0E,0x11,0x01,0x02,0x04,0x08,0x1F,0x00, // 2
        0x0E,0x11,0x01,0x06,0x01,0x11,0x0E,0x00, // 3
        0x01,0x03,0x05,0x09,0x1F,0x01,0x01,0x00, // 4
        0x1F,0x10,0x10,0x1E,0x01,0x01,0x1E,0x00, // 5
        0x0E,0x11,0x10,0x1E,0x11,0x11,0x0E,0x00, // 6
        0x1F,0x01,0x02,0x04,0x08,0x08,0x08,0x00, // 7
        0x0E,0x11,0x11,0x0E,0x11,0x11,0x0E,0x00, // 8
        0x0E,0x11,0x11,0x0F,0x01,0x11,0x0E,0x00, // 9
        0x00,0x00,0x04,0x04,0x00,0x04,0x04,0x00, // :
        0x00,0x00,0x04,0x04,0x00,0x04,0x04,0x08, // ;
        0x02,0x04,0x08,0x10,0x08,0x04,0x02,0x00, // <
        0x00,0x00,0x1F,0x00,0x1F,0x00,0x00,0x00, // =
        0x10,0x08,0x04,0x02,0x04,0x08,0x10,0x00, // >
        0x0E,0x11,0x01,0x02,0x04,0x00,0x04,0x00, // ?
        0x0E,0x11,0x17,0x17,0x17,0x10,0x0F,0x00, // @
        0x0E,0x11,0x11,0x11,0x1F,0x11,0x11,0x00, // A
        0x1E,0x11,0x11,0x1E,0x11,0x11,0x1E,0x00, // B
        0x0E,0x11,0x10,0x10,0x10,0x11,0x0E,0x00, // C
        0x1E,0x11,0x11,0x11,0x11,0x11,0x1E,0x00, // D
        0x1F,0x10,0x10,0x1E,0x10,0x10,0x1F,0x00, // E
        0x1F,0x10,0x10,0x1E,0x10,0x10,0x10,0x00, // F
        0x0E,0x11,0x10,0x10,0x17,0x11,0x0E,0x00, // G
        0x11,0x11,0x11,0x1F,0x11,0x11,0x11,0x00, // H
        0x0E,0x04,0x04,0x04,0x04,0x04,0x0E,0x00, // I
        0x0E,0x02,0x02,0x02,0x02,0x12,0x0C,0x00, // J
        0x11,0x12,0x14,0x18,0x14,0x12,0x11,0x00, // K
        0x10,0x10,0x10,0x10,0x10,0x10,0x1F,0x00, // L
        0x11,0x11,0x1B,0x15,0x11,0x11,0x11,0x00, // M
        0x11,0x11,0x19,0x15,0x13,0x11,0x11,0x00, // N
        0x0E,0x11,0x11,0x11,0x11,0x11,0x0E,0x00, // O
        0x1E,0x11,0x11,0x1E,0x10,0x10,0x10,0x00, // P
        0x0E,0x11,0x11,0x11,0x11,0x15,0x0E,0x01, // Q
        0x1E,0x11,0x11,0x1E,0x11,0x11,0x11,0x00, // R
        0x0E,0x11,0x10,0x0E,0x01,0x11,0x0E,0x00, // S
        0x1F,0x04,0x04,0x04,0x04,0x04,0x04,0x00, // T
        0x11,0x11,0x11,0x11,0x11,0x11,0x0E,0x00, // U
        0x11,0x11,0x11,0x11,0x11,0x0A,0x04,0x00, // V
        0x11,0x11,0x15,0x15,0x15,0x15,0x0A,0x00, // W
        0x11,0x11,0x0A,0x04,0x0A,0x11,0x11,0x00, // X
        0x11,0x11,0x11,0x0A,0x04,0x04,0x04,0x00, // Y
        0x1F,0x01,0x02,0x04,0x08,0x10,0x1F,0x00, // Z
        0x0E,0x08,0x08,0x08,0x08,0x08,0x0E,0x00, // [
        0x00,0x20,0x10,0x08,0x04,0x02,0x01,0x00, // b_slash
        0x0E,0x02,0x02,0x02,0x02,0x02,0x0E,0x00, // ]
        0x04,0x0A,0x11,0x00,0x00,0x00,0x00,0x00, // ^
        0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x00, // _
        0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00, // '
        0x00,0x00,0x0E,0x01,0x0F,0x11,0x0F,0x00, // a
        0x10,0x10,0x1E,0x11,0x11,0x11,0x1E,0x00, // b
        0x00,0x00,0x0F,0x10,0x10,0x10,0x0F,0x00, // c
        0x01,0x01,0x0F,0x11,0x11,0x11,0x0F,0x00, // d
        0x00,0x00,0x0E,0x11,0x1F,0x10,0x0E,0x00, // e
        0x03,0x04,0x0E,0x04,0x04,0x04,0x04,0x00, // f
        0x00,0x00,0x0F,0x11,0x11,0x0F,0x01,0x1E, // g
        0x10,0x10,0x1E,0x11,0x11,0x11,0x11,0x00, // h
        0x04,0x00,0x04,0x04,0x04,0x04,0x0E,0x00, // i
        0x04,0x00,0x04,0x04,0x04,0x04,0x04,0x18, // j
        0x10,0x10,0x11,0x12,0x1C,0x12,0x11,0x00, // k
        0x18,0x08,0x08,0x08,0x08,0x08,0x06,0x00, // l
        0x00,0x00,0x1E,0x15,0x15,0x15,0x15,0x00, // m
        0x00,0x00,0x1E,0x11,0x11,0x11,0x11,0x00, // n
        0x00,0x00,0x0E,0x11,0x11,0x11,0x0E,0x00, // o
        0x00,0x00,0x1E,0x11,0x11,0x1E,0x10,0x10, // p
        0x00,0x00,0x0F,0x11,0x11,0x0F,0x01,0x01, // q
        0x00,0x00,0x16,0x19,0x10,0x10,0x10,0x00, // r
        0x00,0x00,0x0E,0x10,0x0E,0x01,0x1E,0x00, // s
        0x04,0x04,0x0E,0x04,0x04,0x04,0x03,0x00, // t
        0x00,0x00,0x11,0x11,0x11,0x11,0x0E,0x00, // u
        0x00,0x00,0x11,0x11,0x11,0x0A,0x04,0x00, // v
        0x00,0x00,0x11,0x11,0x15,0x15,0x0A,0x00, // w
        0x00,0x00,0x11,0x0A,0x04,0x0A,0x11,0x00, // x
        0x00,0x00,0x11,0x11,0x11,0x0F,0x01,0x0E, // y
        0x00,0x00,0x1F,0x02,0x04,0x08,0x1F,0x00, // z
        0x02,0x04,0x04,0x08,0x04,0x04,0x02,0x00, // {
        0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x00, // |
        0x08,0x04,0x04,0x02,0x04,0x04,0x08,0x00, // }
        0x00,0x00,0x19,0x26,0x00,0x00,0x00,0x00, // ~
        0x06,0x09,0x06,0x00,0x00,0x00,0x00,0x00, // градус 127	0x7F
        0x1F,0x10,0x10,0x1E,0x11,0x11,0x1E,0x00, // Б	128	0x80
        0x1F,0x10,0x10,0x10,0x10,0x10,0x10,0x00, // Г	129	0x81
        0x07,0x09,0x09,0x09,0x09,0x09,0x1F,0x11, // Д	130	0x82
        0x0A,0x00,0x1F,0x10,0x1E,0x10,0x1F,0x00, // Ё	131	0x83
        0x15,0x15,0x15,0x0E,0x15,0x15,0x15,0x00, // Ж	132	0x84
        0x0E,0x11,0x01,0x06,0x01,0x11,0x0E,0x00, // З	133	0x85
        0x11,0x11,0x11,0x13,0x15,0x19,0x11,0x00, // И	134	0x86
        0x0E,0x00,0x11,0x13,0x15,0x19,0x11,0x00, // Й	135	0x87
        0x07,0x09,0x09,0x09,0x09,0x09,0x11,0x00, // Л	136	0x88
        0x1F,0x11,0x11,0x11,0x11,0x11,0x11,0x00, // П	137	0x89
        0x11,0x11,0x11,0x0F,0x01,0x02,0x1C,0x00, // У	138	0x8A
        0x0E,0x15,0x15,0x15,0x0E,0x04,0x0E,0x00, // Ф	139	0x8B
        0x11,0x11,0x11,0x11,0x11,0x11,0x1F,0x01, // Ц	140 0x8C
        0x11,0x11,0x11,0x0F,0x01,0x01,0x01,0x00, // Ч	141	0x8D
        0x15,0x15,0x15,0x15,0x15,0x15,0x1F,0x00, // Ш	142	0x8E
        0x15,0x15,0x15,0x15,0x15,0x15,0x1F,0x01, // Щ	143	0x8F
        0x18,0x08,0x08,0x0E,0x09,0x09,0x0E,0x00, // Ъ	144	0x90
        0x11,0x11,0x11,0x19,0x15,0x15,0x19,0x00, // Ы	145	0x91
        0x10,0x10,0x10,0x1E,0x11,0x11,0x1E,0x00, // Ь	146	0x92
        0x0E,0x11,0x01,0x07,0x01,0x11,0x0E,0x00, // Э	147	0x93
        0x12,0x15,0x15,0x1D,0x15,0x15,0x12,0x00, // Ю	148	0x94
        0x0F,0x11,0x11,0x0F,0x11,0x11,0x11,0x00, // Я	149	0x95
        0x01,0x0E,0x10,0x1E,0x11,0x11,0x0E,0x00, // б	150	0x96
        0x00,0x00,0x1E,0x11,0x1E,0x11,0x1E,0x00, // в	151	0x97
        0x00,0x00,0x1F,0x10,0x10,0x10,0x10,0x00, // г	152	0x98
        0x00,0x00,0x07,0x09,0x09,0x09,0x1F,0x11, // д	153	0x99
        0x0A,0x00,0x0E,0x11,0x1F,0x10,0x0E,0x00, // ё	154	0x9A
        0x00,0x00,0x15,0x15,0x0E,0x15,0x15,0x00, // ж	155	0x9B
        0x00,0x00,0x1E,0x01,0x0E,0x01,0x1E,0x00, // з	156	0x9C
        0x00,0x00,0x11,0x13,0x15,0x19,0x11,0x00, // и	157	0x9D
        0x0E,0x00,0x11,0x13,0x15,0x19,0x11,0x00, // й	158	0x9E
        0x00,0x00,0x11,0x12,0x1C,0x12,0x11,0x00, // к	159	0x9F
        0x00,0x00,0x07,0x09,0x09,0x09,0x11,0x00, // л	160	0xA0
        0x00,0x00,0x11,0x1B,0x15,0x11,0x11,0x00, // м	161	0xA1
        0x00,0x00,0x11,0x11,0x1F,0x11,0x11,0x00, // н	162	0xA2
        0x00,0x00,0x1F,0x11,0x11,0x11,0x11,0x00, // п	163	0xA3
        0x00,0x00,0x1F,0x04,0x04,0x04,0x04,0x00, // т	164	0xA4
        0x00,0x04,0x0E,0x15,0x15,0x15,0x0E,0x04, // ф	165	0xA5
        0x00,0x00,0x11,0x11,0x11,0x11,0x1F,0x01, // ц	166	0xA6
        0x00,0x00,0x11,0x11,0x0F,0x01,0x01,0x00, // ч	167	0xA7
        0x00,0x00,0x15,0x15,0x15,0x15,0x1F,0x00, // ш	168	0xA8
        0x00,0x00,0x15,0x15,0x15,0x15,0x1F,0x01, // щ	169	0xA9
        0x00,0x00,0x18,0x08,0x0E,0x09,0x0E,0x00, // ъ	170	0xAA
        0x00,0x00,0x11,0x11,0x19,0x15,0x19,0x00, // ы	171	0xAB
        0x00,0x00,0x10,0x10,0x1E,0x11,0x1E,0x00, // ь	172	0xAC
        0x00,0x00,0x0E,0x11,0x07,0x11,0x0E,0x00, // э	173	0xAD
        0x00,0x00,0x12,0x15,0x1D,0x15,0x12,0x00, // ю	174	0xAE
        0x00,0x00,0x0F,0x11,0x0F,0x11,0x11,0x00, // я	175	0xAF

        0x0E,0x1F,0x1F,0x1F,0x1F,0x1F,0x1F,0x00, // батарейка 100%	176	0xB0
        0x0E,0x1F,0x11,0x1F,0x1F,0x1F,0x1F,0x00, // батарейка 75%	177	0xB1
        0x0E,0x1F,0x11,0x11,0x1F,0x1F,0x1F,0x00, // батарейка 50%	178	0xB2
        0x0E,0x1F,0x11,0x11,0x11,0x1F,0x1F,0x00, // батарейка 25%	179	0xB3
        0x0E,0x1F,0x11,0x11,0x11,0x11,0x1F,0x00, // батарейка 0%	180	0xB4

        0x1F,0x00,0x1E,0x00,0x1C,0x00,0x18,0x00, // прием 100%	181	0xB5
        0x00,0x00,0x1E,0x00,0x1C,0x00,0x18,0x00, // прием 75%	182	0xB6
        0x00,0x00,0x00,0x00,0x1C,0x00,0x18,0x00, // прием 50%	183	0xB7
        0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00, // прием 25%	184	0xB8
        0x1F,0x11,0x12,0x12,0x14,0x14,0x18,0x00 // прием 0%	185	0xB9

};

unsigned const char digit6x8bold[239] PROGMEM={
        0x06,0x08,0x20,0x8f,0x05,            // ширина, высота, смещение, количество символов, max количество символов в строке
        0x00,0x06,0x04,0x02,0x00,0x00,       // сдвиг относительно самого левого бита (младшей) матрицы
        0x00,0x00,0x01,0x02,0x03,0x00,       // номер матрицы, которая участвует в формировании символа (младшая)
        0x05,0x01,0x02,0x05,0x05,0x00,       // номер матрицы, которая участвует в формировании символа (старшая)
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // sp
        0x04,0x04,0x04,0x04,0x00,0x04,0x04,0x00, // !
        0x0A,0x0A,0x00,0x00,0x00,0x00,0x00,0x00, // "
        0x00,0x0A,0x1F,0x0A,0x1F,0x0A,0x00,0x00, // #
        0x04,0x0E,0x14,0x0E,0x05,0x0E,0x04,0x00, // $
        0x18,0x19,0x02,0x04,0x08,0x13,0x03,0x00, // %
        0x00,0x0C,0x12,0x0C,0x13,0x12,0x0D,0x00, // &
        0x04,0x08,0x00,0x00,0x00,0x00,0x00,0x00, // '
        0x02,0x04,0x08,0x08,0x08,0x08,0x04,0x02, // (
        0x08,0x04,0x02,0x02,0x02,0x02,0x04,0x08, // )
        0x00,0x04,0x15,0x0E,0x0E,0x15,0x04,0x00, // *
        0x00,0x00,0x04,0x04,0x1F,0x04,0x04,0x00, // +
        0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x08, // ,
        0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x00, // -
        0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x00, // .
        0x00,0x01,0x02,0x04,0x08,0x10,0x20,0x00, // /
        0x0E,0x13,0x13,0x13,0x13,0x13,0x0E,0x00, // 0
        0x06,0x0E,0x16,0x06,0x06,0x06,0x1F,0x00, // 1
        0x0E,0x13,0x03,0x02,0x04,0x08,0x1F,0x00, // 2
        0x0E,0x13,0x03,0x06,0x03,0x13,0x0E,0x00, // 3
        0x03,0x07,0x0B,0x13,0x1F,0x03,0x03,0x00, // 4
        0x1F,0x10,0x10,0x1E,0x03,0x03,0x1E,0x00, // 5
        0x0E,0x11,0x10,0x1E,0x13,0x13,0x0E,0x00, // 6
        0x1F,0x01,0x02,0x04,0x0C,0x0C,0x0C,0x00, // 7
        0x0E,0x13,0x13,0x0E,0x13,0x13,0x0E,0x00, // 8
        0x0E,0x13,0x13,0x0F,0x03,0x13,0x0E,0x00, // 9
        0x00,0x00,0x0C,0x0C,0x00,0x0C,0x0C,0x00 // :
};

unsigned const char digit6x8future[239] PROGMEM={
        0x06,0x08,0x20,0x8f,0x05,            // ширина, высота, смещение, количество символов, max количество символов в строке
        0x00,0x06,0x04,0x02,0x00,0x00,       // сдвиг относительно самого левого бита (младшей) матрицы
        0x00,0x00,0x01,0x02,0x03,0x00,       // номер матрицы, которая участвует в формировании символа (младшая)
        0x05,0x01,0x02,0x05,0x05,0x00,       // номер матрицы, которая участвует в формировании символа (старшая)
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // sp
        0x04,0x04,0x04,0x04,0x00,0x04,0x04,0x00, // !
        0x0A,0x0A,0x00,0x00,0x00,0x00,0x00,0x00, // "
        0x00,0x0A,0x1F,0x0A,0x1F,0x0A,0x00,0x00, // #
        0x04,0x0E,0x14,0x0E,0x05,0x0E,0x04,0x00, // $
        0x18,0x19,0x02,0x04,0x08,0x13,0x03,0x00, // %
        0x00,0x0C,0x12,0x0C,0x13,0x12,0x0D,0x00, // &
        0x04,0x08,0x00,0x00,0x00,0x00,0x00,0x00, // '
        0x02,0x04,0x08,0x08,0x08,0x08,0x04,0x02, // (
        0x08,0x04,0x02,0x02,0x02,0x02,0x04,0x08, // )
        0x00,0x04,0x15,0x0E,0x0E,0x15,0x04,0x00, // *
        0x00,0x00,0x04,0x04,0x1F,0x04,0x04,0x00, // +
        0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x08, // ,
        0x00,0x00,0x00,0x00,0x1F,0x00,0x00,0x00, // -
        0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x00, // .
        0x00,0x01,0x02,0x04,0x08,0x10,0x20,0x00, // /
        0x1F,0x13,0x13,0x13,0x13,0x13,0x1F,0x00, // 0
        0x06,0x0E,0x0E,0x06,0x06,0x06,0x06,0x00, // 1
        0x1F,0x13,0x03,0x03,0x1F,0x10,0x1F,0x00, // 2
        0x1F,0x13,0x03,0x0F,0x03,0x13,0x1F,0x00, // 3
        0x03,0x07,0x0B,0x13,0x1F,0x03,0x03,0x00, // 4
        0x1F,0x10,0x1F,0x03,0x03,0x03,0x1F,0x00, // 5
        0x1F,0x10,0x1F,0x13,0x13,0x13,0x1F,0x00, // 6
        0x1F,0x13,0x02,0x04,0x0C,0x0C,0x0C,0x00, // 7
        0x1F,0x13,0x1F,0x13,0x13,0x13,0x1F,0x00, // 8
        0x1F,0x13,0x13,0x13,0x1F,0x03,0x1F,0x00, // 9
        0x00,0x00,0x0C,0x0C,0x00,0x0C,0x0C,0x00 // :
};
