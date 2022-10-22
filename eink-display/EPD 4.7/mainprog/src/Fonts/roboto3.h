#pragma once
#include "epd_driver.h"
const uint8_t Roboto3Bitmaps[1610] = {
    0x78, 0x9C, 0x03, 0x00, 0x00, 0x00, 0x00, 0x01, 0x78, 0x9C, 0x63, 0xE2, 0x60, 0x67, 0x63, 0x61,
    0x00, 0x00, 0x00, 0x70, 0x00, 0x1C, 0x78, 0x9C, 0x33, 0x0E, 0x05, 0x00, 0x00, 0xBD, 0x00, 0x89,
    0x78, 0x9C, 0x13, 0x10, 0x28, 0x50, 0x5D, 0x64, 0xB5, 0x44, 0x2B, 0x90, 0x0D, 0x00, 0x0E, 0x61,
    0x02, 0xB7, 0x78, 0x9C, 0x6B, 0x60, 0x0C, 0xE3, 0x6A, 0x61, 0x12, 0xE2, 0x6A, 0xE3, 0x74, 0x60,
    0x00, 0x00, 0x11, 0x4C, 0x02, 0x53, 0x78, 0x9C, 0x53, 0x64, 0x60, 0x48, 0x53, 0x62, 0x08, 0x66,
    0x63, 0x08, 0x28, 0x63, 0x30, 0x28, 0x65, 0x00, 0x02, 0x00, 0x18, 0x49, 0x02, 0x6E, 0x78, 0x9C,
    0x73, 0x60, 0x4C, 0xE1, 0x38, 0xC8, 0x1C, 0x91, 0x51, 0x16, 0xC5, 0xC0, 0x00, 0x00, 0x14, 0x62,
    0x03, 0x02, 0x78, 0x9C, 0x63, 0x66, 0x05, 0x00, 0x00, 0x0D, 0x00, 0x09, 0x78, 0x9C, 0x0B, 0x70,
    0xE6, 0xE0, 0x10, 0x2B, 0x10, 0x00, 0x00, 0x05, 0x43, 0x01, 0x3A, 0x78, 0x9C, 0x63, 0x35, 0x69,
    0x68, 0x28, 0x10, 0x63, 0x04, 0x00, 0x07, 0x5F, 0x01, 0xC1, 0x78, 0x9C, 0x13, 0x60, 0x98, 0xCA,
    0xBC, 0x94, 0x81, 0x81, 0x01, 0x00, 0x06, 0xA9, 0x01, 0x4E, 0x78, 0x9C, 0x73, 0x60, 0x58, 0xCC,
    0xB2, 0x88, 0x39, 0x80, 0x01, 0x00, 0x09, 0x1F, 0x01, 0xDD, 0x78, 0x9C, 0x63, 0x65, 0x05, 0x00,
    0x00, 0x11, 0x00, 0x0B, 0x78, 0x9C, 0x63, 0x30, 0x05, 0x00, 0x00, 0x37, 0x00, 0x36, 0x78, 0x9C,
    0x63, 0x61, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x05, 0x78, 0x9C, 0x63, 0x60, 0x4C, 0x60, 0x28, 0x60,
    0x30, 0x66, 0x60, 0x67, 0x60, 0x62, 0x00, 0x00, 0x08, 0xA9, 0x01, 0x0E, 0x78, 0x9C, 0x73, 0x60,
    0x34, 0xE7, 0xE4, 0x00, 0x82, 0x52, 0x0E, 0x06, 0x06, 0x00, 0x08, 0x4A, 0x01, 0x1F, 0x78, 0x9C,
    0x13, 0x60, 0x58, 0xCC, 0x94, 0x00, 0x86, 0x00, 0x0A, 0x62, 0x01, 0xDC, 0x78, 0x9C, 0x73, 0x60,
    0xB4, 0xE0, 0x62, 0xE0, 0x68, 0x60, 0x9C, 0x2E, 0x0E, 0x00, 0x08, 0x09, 0x01, 0xBB, 0x78, 0x9C,
    0x73, 0x60, 0x34, 0xE7, 0x0C, 0xE0, 0x10, 0xE4, 0x2C, 0xE3, 0x64, 0x60, 0x00, 0x00, 0x0A, 0xCC,
    0x01, 0x73, 0x78, 0x9C, 0x63, 0x60, 0x4A, 0xE0, 0x4C, 0xE4, 0xA8, 0x92, 0x66, 0xE0, 0x00, 0x00,
    0x08, 0x0A, 0x01, 0x72, 0x78, 0x9C, 0x73, 0x60, 0x49, 0x61, 0x6E, 0x65, 0x67, 0x14, 0x6F, 0xE1,
    0x64, 0x60, 0x00, 0x00, 0x0E, 0x38, 0x01, 0xDD, 0x78, 0x9C, 0x13, 0x60, 0x2C, 0x62, 0xAC, 0x60,
    0xE7, 0xE0, 0x68, 0xE1, 0x64, 0x60, 0x00, 0x00, 0x0B, 0xC8, 0x01, 0xA1, 0x78, 0x9C, 0x73, 0x66,
    0x51, 0xE2, 0x14, 0x60, 0x2B, 0x60, 0x68, 0x60, 0x00, 0x00, 0x07, 0x59, 0x01, 0x79, 0x78, 0x9C,
    0x73, 0x60, 0x74, 0xE7, 0x6C, 0xE1, 0x50, 0xE7, 0x2C, 0xE3, 0x64, 0x60, 0x00, 0x00, 0x0D, 0x90,
    0x01, 0xCD, 0x78, 0x9C, 0x73, 0x60, 0x34, 0xE7, 0xE4, 0xE0, 0x2C, 0xE4, 0x2A, 0x60, 0x01, 0x00,
    0x07, 0xAD, 0x01, 0x82, 0x78, 0x9C, 0x63, 0x64, 0x66, 0x60, 0x61, 0x00, 0x00, 0x00, 0x1E, 0x00,
    0x09, 0x78, 0x9C, 0x63, 0x64, 0x66, 0x60, 0x65, 0x05, 0x00, 0x00, 0x25, 0x00, 0x0F, 0x78, 0x9C,
    0x63, 0x60, 0x68, 0x66, 0x29, 0x65, 0x62, 0x60, 0x02, 0x00, 0x05, 0x0A, 0x01, 0x01, 0x78, 0x9C,
    0x2B, 0x61, 0x2B, 0x61, 0x03, 0x00, 0x02, 0xD4, 0x00, 0xF5, 0x78, 0x9C, 0x63, 0x60, 0x68, 0x61,
    0x29, 0x62, 0x63, 0x62, 0x00, 0x00, 0x05, 0x12, 0x01, 0x03, 0x78, 0x9C, 0x73, 0x64, 0x70, 0xE3,
    0x08, 0x60, 0x29, 0x60, 0x70, 0x60, 0x60, 0x60, 0x00, 0x00, 0x0C, 0x58, 0x01, 0x94, 0x78, 0x9C,
    0x63, 0x10, 0x62, 0x28, 0x08, 0x66, 0x15, 0x4B, 0x63, 0x73, 0x4F, 0x12, 0x75, 0x9F, 0xC1, 0x9E,
    0x24, 0xC8, 0x20, 0xA0, 0xC2, 0x00, 0x00, 0x29, 0x41, 0x03, 0xA8, 0x78, 0x9C, 0x13, 0x60, 0x2C,
    0x60, 0x2F, 0xE0, 0x98, 0xEA, 0xC5, 0xD9, 0x00, 0x00, 0x0A, 0xF0, 0x02, 0x69, 0x78, 0x9C, 0x73,
    0x62, 0xF2, 0xD0, 0xA8, 0x90, 0x92, 0x70, 0xAD, 0xD0, 0x04, 0x00, 0x0B, 0xA2, 0x02, 0x45, 0x78,
    0x9C, 0x53, 0x60, 0x4E, 0x49, 0xE5, 0x10, 0xE0, 0x30, 0x68, 0xF6, 0x60, 0x60, 0x00, 0x00, 0x0D,
    0xD6, 0x02, 0x08, 0x78, 0x9C, 0x73, 0x62, 0xF4, 0x50, 0x97, 0x68, 0x90, 0x28, 0xAC, 0x90, 0x00,
    0x00, 0x0B, 0xC3, 0x02, 0x64, 0x78, 0x9C, 0x73, 0x62, 0xF1, 0x60, 0xAE, 0x60, 0x93, 0x60, 0xA8,
    0x10, 0x07, 0x00, 0x09, 0x6C, 0x01, 0xB7, 0x78, 0x9C, 0x73, 0x62, 0xF1, 0x60, 0xCE, 0x60, 0xD1,
    0x60, 0x94, 0x60, 0x00, 0x00, 0x08, 0x6E, 0x01, 0x3F, 0x78, 0x9C, 0x33, 0x60, 0x4E, 0x4D, 0xE5,
    0x10, 0xE4, 0x98, 0xD2, 0x94, 0xCE, 0xC0, 0x00, 0x00, 0x10, 0xF4, 0x02, 0x9C, 0x78, 0x9C, 0x63,
    0x52, 0x90, 0x98, 0x50, 0xB1, 0x5C, 0x62, 0x82, 0xC4, 0x04, 0x00, 0x0E, 0xD1, 0x03, 0x3A, 0x78,
    0x9C, 0x63, 0x14, 0x07, 0x02, 0x00, 0x00, 0xF0, 0x00, 0x5E, 0x78, 0x9C, 0x63, 0x60, 0x62, 0xE0,
    0x64, 0xE0, 0x64, 0xE4, 0xAC, 0xE0, 0x60, 0x60, 0x00, 0x00, 0x02, 0xDD, 0x00, 0x9F, 0x78, 0x9C,
    0x63, 0x52, 0x90, 0x90, 0x5C, 0xC1, 0x14, 0xC1, 0x21, 0x91, 0x02, 0x00, 0x08, 0xB3, 0x01, 0xDA,
    0x78, 0x9C, 0x63, 0x62, 0x90, 0x00, 0xC3, 0x0A, 0x76, 0x00, 0x02, 0xC5, 0x00, 0xCA, 0x78, 0x9C,
    0x13, 0x62, 0x60, 0xAE, 0x70, 0xE0, 0xEE, 0x68, 0xE0, 0xF0, 0x48, 0xE3, 0x90, 0x90, 0xE6, 0x04,
    0x00, 0x17, 0x67, 0x02, 0xDB, 0x78, 0x9C, 0x63, 0x52, 0xE8, 0x98, 0x50, 0x31, 0x59, 0x62, 0xA6,
    0xC4, 0x26, 0x00, 0x12, 0x2A, 0x03, 0xC1, 0x78, 0x9C, 0x53, 0x60, 0x4E, 0x49, 0xE5, 0x68, 0xE0,
    0x68, 0x68, 0xB2, 0x60, 0x60, 0x00, 0x00, 0x12, 0x42, 0x02, 0xB7, 0x78, 0x9C, 0x73, 0x62, 0xF2,
    0x48, 0xD3, 0x48, 0x8D, 0x60, 0x91, 0x60, 0x00, 0x00, 0x0C, 0x3F, 0x01, 0xF4, 0x78, 0x9C, 0x53,
    0x60, 0x4E, 0x09, 0xE5, 0x68, 0xE0, 0x68, 0x68, 0xF2, 0x64, 0x08, 0x04, 0x00, 0x12, 0x36, 0x03,
    0x09, 0x78, 0x9C, 0x73, 0x62, 0xF2, 0xF0, 0xB0, 0x30, 0x8F, 0xE0, 0x94, 0x08, 0x01, 0x00, 0x0B,
    0x4A, 0x02, 0x11, 0x78, 0x9C, 0x73, 0x60, 0xF2, 0xD0, 0x68, 0x65, 0x62, 0xD2, 0x28, 0xD5, 0x64,
    0x60, 0x00, 0x00, 0x0E, 0xB3, 0x02, 0x02, 0x78, 0x9C, 0x73, 0x16, 0x99, 0x24, 0x52, 0xC0, 0x08,
    0x82, 0x00, 0x0D, 0xC1, 0x02, 0x51, 0x78, 0x9C, 0x63, 0x52, 0xE0, 0x6C, 0xE4, 0x6C, 0xE4, 0x28,
    0x9C, 0x62, 0xC9, 0xC0, 0x00, 0x00, 0x0F, 0x96, 0x02, 0x7D, 0x78, 0x9C, 0x63, 0x52, 0xE0, 0x2C,
    0x72, 0x11, 0x6F, 0xE0, 0x68, 0x60, 0x05, 0x00, 0x09, 0xCC, 0x02, 0x06, 0x78, 0x9C, 0x63, 0x62,
    0x62, 0xE4, 0xD0, 0xE6, 0x30, 0xCB, 0xE0, 0xD8, 0xD4, 0xC4, 0x7E, 0xA0, 0x80, 0x05, 0x00, 0x12,
    0x33, 0x03, 0x56, 0x78, 0x9C, 0x63, 0x52, 0x08, 0xD1, 0x98, 0xC0, 0xBE, 0x80, 0x43, 0xDD, 0x0D,
    0x00, 0x0B, 0xA5, 0x02, 0x4B, 0x78, 0x9C, 0x63, 0x52, 0x90, 0x50, 0x9F, 0xC0, 0xD1, 0xC0, 0x58,
    0xC0, 0x08, 0x00, 0x09, 0x7B, 0x01, 0xEC, 0x78, 0x9C, 0x73, 0x12, 0x31, 0x92, 0x72, 0x60, 0x6D,
    0x64, 0xE8, 0x52, 0x07, 0x00, 0x0A, 0x70, 0x02, 0x1A, 0x78, 0x9C, 0x33, 0xE7, 0x00, 0x02, 0x0B,
    0x00, 0x01, 0xF8, 0x00, 0x90, 0x78, 0x9C, 0x63, 0x62, 0x60, 0x67, 0x08, 0x66, 0x68, 0x60, 0x48,
    0x60, 0x64, 0x60, 0x02, 0x00, 0x07, 0x87, 0x01, 0x40, 0x78, 0x9C, 0x93, 0x54, 0x03, 0x02, 0x2D,
    0x00, 0x02, 0xDA, 0x00, 0xDC, 0x78, 0x9C, 0x53, 0x60, 0x58, 0xC2, 0xE0, 0xC6, 0x08, 0x00, 0x03,
    0xE3, 0x01, 0x0C, 0x78, 0x9C, 0x2B, 0x63, 0x01, 0x00, 0x00, 0xF2, 0x00, 0x7B, 0x78, 0x9C, 0x63,
    0x11, 0x04, 0x00, 0x00, 0x1B, 0x00, 0x16, 0x78, 0x9C, 0x53, 0x60, 0x70, 0xE1, 0x4C, 0xE5, 0x2A,
    0xE7, 0x66, 0x60, 0x00, 0x00, 0x08, 0x36, 0x01, 0x5F, 0x78, 0x9C, 0x63, 0x61, 0xD0, 0x60, 0x8C,
    0xE4, 0xE4, 0x10, 0xAF, 0xE0, 0x64, 0x60, 0x00, 0x00, 0x07, 0x7A, 0x01, 0x30, 0x78, 0x9C, 0x53,
    0x60, 0x08, 0xE3, 0xE0, 0x60, 0x28, 0xE5, 0x60, 0x60, 0x00, 0x00, 0x06, 0x4E, 0x01, 0x04, 0x78,
    0x9C, 0x63, 0x60, 0x51, 0xE0, 0x0C, 0xE7, 0xE6, 0xE4, 0x28, 0xE3, 0x66, 0x60, 0x00, 0x00, 0x07,
    0x25, 0x01, 0x22, 0x78, 0x9C, 0x53, 0x60, 0x08, 0xE3, 0xAC, 0x62, 0x2F, 0x65, 0x63, 0x60, 0x00,
    0x00, 0x09, 0x1E, 0x01, 0x7C, 0x78, 0x9C, 0x2B, 0x60, 0x48, 0x63, 0x48, 0x67, 0x30, 0x05, 0x42,
    0x00, 0x0B, 0x42, 0x01, 0xA8, 0x78, 0x9C, 0x53, 0x60, 0x0C, 0xE7, 0xE6, 0xE4, 0x28, 0xE3, 0x76,
    0xE6, 0x34, 0x60, 0x00, 0x00, 0x0A, 0x62, 0x01, 0x92, 0x78, 0x9C, 0x63, 0x61, 0xD0, 0x60, 0x8C,
    0xE4, 0xE2, 0x00, 0x02, 0x00, 0x04, 0x11, 0x00, 0xB1, 0x78, 0x9C, 0x63, 0x62, 0xE6, 0xE0, 0xE0,
    0x00, 0x00, 0x00, 0x4B, 0x00, 0x1E, 0x78, 0x9C, 0x53, 0x60, 0x30, 0x60, 0x68, 0x00, 0xC3, 0x09,
    0x0C, 0x0A, 0x0C, 0x00, 0x12, 0x8E, 0x02, 0x81, 0x78, 0x9C, 0x63, 0x61, 0xE0, 0x60, 0xCC, 0x60,
    0xD9, 0xC9, 0x20, 0xC1, 0x01, 0x00, 0x06, 0x19, 0x01, 0x53, 0x78, 0x9C, 0x63, 0xE1, 0x00, 0x02,
    0x00, 0x00, 0x69, 0x00, 0x25, 0x78, 0x9C, 0x53, 0x54, 0x64, 0x8C, 0x8C, 0xE6, 0xE4, 0x00, 0x03,
    0x00, 0x09, 0xED, 0x01, 0x31, 0x78, 0x9C, 0x53, 0x64, 0x8C, 0xE4, 0xE2, 0x00, 0x02, 0x00, 0x03,
    0xAF, 0x00, 0xA6, 0x78, 0x9C, 0x53, 0x60, 0x08, 0xE3, 0xE4, 0x10, 0x2F, 0xE5, 0x60, 0x60, 0x00,
    0x00, 0x06, 0xC8, 0x01, 0x1C, 0x78, 0x9C, 0x53, 0x64, 0x8C, 0xE4, 0xE2, 0x10, 0xCF, 0xE4, 0xE4,
    0x60, 0x60, 0x64, 0x00, 0x00, 0x09, 0x1D, 0x01, 0x20, 0x78, 0x9C, 0x53, 0x60, 0x0C, 0xE7, 0xE6,
    0xE4, 0x28, 0xE3, 0x66, 0xE0, 0x60, 0x60, 0x04, 0x00, 0x08, 0xF4, 0x01, 0x1F, 0x78, 0x9C, 0x53,
    0x8C, 0xE4, 0xE0, 0x00, 0x00, 0x01, 0xAB, 0x00, 0x8B, 0x78, 0x9C, 0x33, 0x60, 0x70, 0x67, 0x2B,
    0x62, 0x2D, 0xE3, 0x60, 0x60, 0x00, 0x00, 0x09, 0x01, 0x01, 0x73, 0x78, 0x9C, 0x33, 0xF7, 0x50,
    0x4B, 0x61, 0x00, 0x00, 0x03, 0x72, 0x01, 0x0A, 0x78, 0x9C, 0x63, 0x64, 0xE4, 0x00, 0x82, 0x32,
    0x6E, 0x06, 0x06, 0x00, 0x02, 0xE6, 0x00, 0xA4, 0x78, 0x9C, 0x63, 0x64, 0xE4, 0xE0, 0x68, 0x61,
    0xDE, 0xC0, 0x00, 0x00, 0x03, 0xE8, 0x01, 0x4A, 0x78, 0x9C, 0x63, 0x64, 0x64, 0xD0, 0x88, 0x64,
    0x6A, 0x6B, 0x67, 0x98, 0x38, 0x89, 0x01, 0x00, 0x0C, 0xFF, 0x02, 0xB6, 0x78, 0x9C, 0x63, 0x64,
    0x4C, 0x63, 0xBD, 0xC0, 0x60, 0xCE, 0x0E, 0x00, 0x06, 0x49, 0x01, 0x7C, 0x78, 0x9C, 0x63, 0x64,
    0xE4, 0x64, 0x6F, 0x65, 0x3A, 0xC0, 0x90, 0xCC, 0xC0, 0xC4, 0x00, 0x00, 0x0B, 0x02, 0x01, 0xBF,
    0x78, 0x9C, 0x53, 0x64, 0x2C, 0x66, 0x9F, 0xC0, 0xD0, 0xC9, 0x0A, 0x00, 0x07, 0x43, 0x01, 0xBB,
    0x78, 0x9C, 0x0B, 0x48, 0x74, 0xD1, 0x08, 0x6A, 0x60, 0x00, 0x00, 0x08, 0x67, 0x01, 0xF0, 0x78,
    0x9C, 0x63, 0x64, 0x07, 0x02, 0x56, 0x00, 0x00, 0x73, 0x00, 0x23, 0x78, 0x9C, 0x63, 0x55, 0x0B,
    0x69, 0x32, 0x65, 0x67, 0x00, 0x00, 0x05, 0x67, 0x01, 0x3E, 0x78, 0x9C, 0x73, 0x50, 0x70, 0x8D,
    0x00, 0x00, 0x02, 0x46, 0x00, 0xFE, 0x78, 0x9C, 0x53, 0x64, 0x64, 0x88, 0x88, 0x62, 0xAE, 0xC8,
    0x64, 0xAE, 0x58, 0xC1, 0x08, 0x00, 0x0F, 0x42, 0x02, 0xDD,
};
const GFXglyph Roboto3Glyphs[] = {
    { 0, 0, 1, 0, 0, 8, 0 }, //  
    { 2, 6, 2, 0, 5, 14, 8 }, // !
    { 2, 2, 2, 0, 5, 10, 22 }, // "
    { 4, 5, 4, 0, 5, 18, 32 }, // #
    { 4, 6, 3, 0, 5, 20, 50 }, // $
    { 5, 6, 4, 0, 5, 24, 70 }, // %
    { 4, 6, 4, 0, 5, 20, 94 }, // &
    { 1, 2, 1, 0, 5, 10, 114 }, // '
    { 2, 7, 2, 0, 5, 15, 124 }, // (
    { 2, 7, 2, 0, 5, 15, 139 }, // )
    { 3, 4, 3, 0, 5, 16, 154 }, // *
    { 4, 4, 3, 0, 4, 16, 170 }, // +
    { 1, 2, 1, 0, 1, 10, 186 }, // ,
    { 2, 2, 2, 0, 3, 10, 196 }, // -
    { 2, 2, 2, 0, 1, 10, 206 }, // .
    { 3, 6, 2, 0, 5, 20, 216 }, // /
    { 4, 6, 3, 0, 5, 18, 236 }, // 0
    { 3, 5, 3, 0, 5, 14, 254 }, // 1
    { 4, 5, 3, 0, 5, 18, 268 }, // 2
    { 3, 6, 3, 0, 5, 20, 286 }, // 3
    { 4, 5, 3, 0, 5, 18, 306 }, // 4
    { 4, 6, 3, 0, 5, 20, 324 }, // 5
    { 4, 6, 3, 0, 5, 20, 344 }, // 6
    { 4, 5, 3, 0, 5, 18, 364 }, // 7
    { 4, 6, 3, 0, 5, 20, 382 }, // 8
    { 3, 5, 3, 0, 5, 18, 402 }, // 9
    { 2, 5, 1, 0, 4, 13, 420 }, // :
    { 1, 5, 1, 0, 4, 13, 433 }, // ;
    { 3, 4, 3, 0, 4, 16, 446 }, // <
    { 3, 2, 3, 0, 3, 12, 462 }, // =
    { 3, 4, 3, 0, 4, 16, 474 }, // >
    { 3, 6, 3, 0, 5, 20, 490 }, // ?
    { 6, 7, 5, 0, 5, 29, 510 }, // @
    { 4, 5, 4, 0, 5, 18, 539 }, // A
    { 4, 5, 4, 0, 5, 18, 557 }, // B
    { 4, 6, 4, 0, 5, 20, 575 }, // C
    { 4, 5, 4, 0, 5, 18, 595 }, // D
    { 4, 5, 3, 0, 5, 18, 613 }, // E
    { 4, 5, 3, 0, 5, 18, 631 }, // F
    { 4, 6, 4, 0, 5, 20, 649 }, // G
    { 4, 5, 4, 0, 5, 18, 669 }, // H
    { 2, 5, 2, 0, 5, 11, 687 }, // I
    { 3, 6, 3, 0, 5, 20, 698 }, // J
    { 4, 5, 4, 0, 5, 18, 718 }, // K
    { 4, 5, 3, 0, 5, 14, 736 }, // L
    { 5, 5, 5, 0, 5, 23, 750 }, // M
    { 4, 5, 4, 0, 5, 18, 773 }, // N
    { 4, 6, 4, 0, 5, 20, 791 }, // O
    { 4, 5, 4, 0, 5, 18, 811 }, // P
    { 4, 6, 4, 0, 5, 20, 829 }, // Q
    { 4, 5, 4, 0, 5, 18, 849 }, // R
    { 4, 6, 4, 0, 5, 20, 867 }, // S
    { 4, 5, 4, 0, 5, 15, 887 }, // T
    { 4, 6, 4, 0, 5, 20, 902 }, // U
    { 4, 5, 4, 0, 5, 18, 922 }, // V
    { 6, 5, 5, 0, 5, 23, 940 }, // W
    { 4, 5, 4, 0, 5, 18, 963 }, // X
    { 4, 5, 4, 0, 5, 18, 981 }, // Y
    { 4, 5, 4, 0, 5, 18, 999 }, // Z
    { 2, 6, 2, 0, 5, 12, 1017 }, // [
    { 3, 6, 2, 0, 5, 20, 1029 }, // <backslash>
    { 2, 6, 2, 0, 5, 12, 1049 }, // ]
    { 3, 3, 3, 0, 5, 14, 1061 }, // ^
    { 3, 1, 3, 0, 0, 10, 1075 }, // _
    { 2, 2, 2, 0, 5, 10, 1085 }, // `
    { 3, 5, 3, 0, 4, 18, 1095 }, // a
    { 4, 6, 3, 0, 5, 20, 1113 }, // b
    { 3, 5, 3, 0, 4, 18, 1133 }, // c
    { 3, 6, 3, 0, 5, 20, 1151 }, // d
    { 3, 5, 3, 0, 4, 18, 1171 }, // e
    { 3, 5, 2, 0, 5, 16, 1189 }, // f
    { 3, 6, 3, 0, 4, 20, 1205 }, // g
    { 3, 5, 3, 0, 5, 16, 1225 }, // h
    { 2, 5, 1, 0, 5, 13, 1241 }, // i
    { 3, 7, 1, -1, 5, 18, 1254 }, // j
    { 4, 5, 3, 0, 5, 18, 1272 }, // k
    { 1, 5, 1, 0, 5, 11, 1290 }, // l
    { 5, 4, 5, 0, 4, 16, 1301 }, // m
    { 3, 4, 3, 0, 4, 14, 1317 }, // n
    { 4, 5, 3, 0, 4, 18, 1331 }, // o
    { 4, 6, 3, 0, 4, 20, 1349 }, // p
    { 3, 6, 3, 0, 4, 20, 1369 }, // q
    { 2, 4, 2, 0, 4, 12, 1389 }, // r
    { 3, 5, 3, 0, 4, 18, 1401 }, // s
    { 2, 5, 2, 0, 4, 13, 1419 }, // t
    { 3, 5, 3, 0, 4, 16, 1432 }, // u
    { 3, 4, 3, 0, 4, 16, 1448 }, // v
    { 5, 4, 5, 0, 4, 20, 1464 }, // w
    { 3, 4, 3, 0, 4, 16, 1484 }, // x
    { 3, 6, 3, 0, 4, 20, 1500 }, // y
    { 3, 4, 3, 0, 4, 16, 1520 }, // z
    { 2, 7, 2, 0, 5, 15, 1536 }, // {
    { 1, 6, 1, 0, 5, 12, 1551 }, // |
    { 2, 7, 2, 0, 5, 15, 1563 }, // }
    { 4, 2, 4, 0, 3, 12, 1578 }, // ~
    { 5, 4, 5, 0, 4, 20, 1590 }, // ₪
};
const UnicodeInterval Roboto3Intervals[] = {
    { 0x20, 0x7E, 0x0 },
    { 0x20AA, 0x20AA, 0x5F },
};
const GFXfont Roboto3 = {
    (uint8_t*)Roboto3Bitmaps,
    (GFXglyph*)Roboto3Glyphs,
    (UnicodeInterval*)Roboto3Intervals,
    2,
    1,
    7,
    6,
    -2,
};
