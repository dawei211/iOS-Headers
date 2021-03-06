/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct exfat_direntry_file {
    unsigned char _field1;
    unsigned char _field2;
    struct uint16le _field3;
    struct uint16le _field4;
    struct uint16le _field5;
    struct uint32le _field6;
    struct uint32le _field7;
    struct uint32le _field8;
    unsigned char _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
    unsigned char _field13;
    unsigned char _field14[7];
};

struct exfat_direntry_filename {
    unsigned char _field1;
    unsigned char _field2;
    struct uint16le _field3[15];
};

struct exfat_direntry_stream {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    struct uint16le _field5;
    unsigned char _field6[2];
    struct uint64le _field7;
    unsigned char _field8[4];
    struct uint32le _field9;
    struct uint64le _field10;
};

struct exfat_direntry_upcase {
    unsigned char _field1;
    unsigned char _field2[3];
    struct uint32le _field3;
    unsigned char _field4[12];
    struct uint32le _field5;
    struct uint64le _field6;
};

struct exfat_file_entry_set {
    struct exfat_direntry_file _field1;
    struct exfat_direntry_stream _field2;
    struct exfat_direntry_filename _field3[254];
};

struct extent {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct timespec {
    int tv_sec;
    long tv_nsec;
};

struct uint16le {
    unsigned short _field1;
};

struct uint32le {
    unsigned int _field1;
};

struct uint64le {
    unsigned long long _field1;
};

