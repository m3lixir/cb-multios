#include "libpov.h"
int main(int cgc_argc, char *cgc_argv[]) {
   cgc_negotiate_type1(0x0, 0x0, 0);
   do {
      unsigned char *read_00000;
      unsigned int read_00000_len;
      unsigned int read_00000_ptr = 0;
      //**** length read
      read_00000_len = 75;
      read_00000 = (unsigned char*)cgc_malloc(read_00000_len);
      int read_00000_res = cgc_length_read(0, read_00000, read_00000_len);
      if (read_00000_res) {} //silence unused variable warning
      cgc_free(read_00000);
      if (read_00000_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00000_00000[] = 
         "\x30\x30\x32\x0a";
      static unsigned int write_00000_00000_len = 4;
      unsigned char *write_00000 = NULL;
      unsigned int write_00000_len = 0;
      write_00000 = cgc_append_buf(write_00000, &write_00000_len, write_00000_00000, write_00000_00000_len);
      if (write_00000_len > 0) {
         cgc_transmit_all(1, write_00000, write_00000_len);
      }
      cgc_free(write_00000);
   } while (0);
   do {
      unsigned char *read_00001;
      unsigned int read_00001_len;
      unsigned int read_00001_ptr = 0;
      //**** length read
      read_00001_len = 54;
      read_00001 = (unsigned char*)cgc_malloc(read_00001_len);
      int read_00001_res = cgc_length_read(0, read_00001, read_00001_len);
      if (read_00001_res) {} //silence unused variable warning
      cgc_free(read_00001);
      if (read_00001_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00001_00000[] = 
         "\x54\x68\x65\x20\x61\x72\x67\x75";
      static unsigned int write_00001_00000_len = 8;
      unsigned char *write_00001 = NULL;
      unsigned int write_00001_len = 0;
      write_00001 = cgc_append_buf(write_00001, &write_00001_len, write_00001_00000, write_00001_00000_len);
      if (write_00001_len > 0) {
         cgc_transmit_all(1, write_00001, write_00001_len);
      }
      cgc_free(write_00001);
   } while (0);
   do {
      unsigned char *read_00002;
      unsigned int read_00002_len;
      unsigned int read_00002_ptr = 0;
      //**** length read
      read_00002_len = 50;
      read_00002 = (unsigned char*)cgc_malloc(read_00002_len);
      int read_00002_res = cgc_length_read(0, read_00002, read_00002_len);
      if (read_00002_res) {} //silence unused variable warning
      cgc_free(read_00002);
      if (read_00002_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00002_00000[] = 
         "\x6d\x65\x6e\x74\x20\x27\x2d\x2d";
      static unsigned int write_00002_00000_len = 8;
      unsigned char *write_00002 = NULL;
      unsigned int write_00002_len = 0;
      write_00002 = cgc_append_buf(write_00002, &write_00002_len, write_00002_00000, write_00002_00000_len);
      if (write_00002_len > 0) {
         cgc_transmit_all(1, write_00002, write_00002_len);
      }
      cgc_free(write_00002);
   } while (0);
   do {
      unsigned char *read_00003;
      unsigned int read_00003_len;
      unsigned int read_00003_ptr = 0;
      //**** length read
      read_00003_len = 50;
      read_00003 = (unsigned char*)cgc_malloc(read_00003_len);
      int read_00003_res = cgc_length_read(0, read_00003, read_00003_len);
      if (read_00003_res) {} //silence unused variable warning
      cgc_free(read_00003);
      if (read_00003_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00003_00000[] = 
         "\x73\x65\x65\x64\x27\x20\x64\x69";
      static unsigned int write_00003_00000_len = 8;
      unsigned char *write_00003 = NULL;
      unsigned int write_00003_len = 0;
      write_00003 = cgc_append_buf(write_00003, &write_00003_len, write_00003_00000, write_00003_00000_len);
      if (write_00003_len > 0) {
         cgc_transmit_all(1, write_00003, write_00003_len);
      }
      cgc_free(write_00003);
   } while (0);
   do {
      unsigned char *read_00004;
      unsigned int read_00004_len;
      unsigned int read_00004_ptr = 0;
      //**** length read
      read_00004_len = 50;
      read_00004 = (unsigned char*)cgc_malloc(read_00004_len);
      int read_00004_res = cgc_length_read(0, read_00004, read_00004_len);
      if (read_00004_res) {} //silence unused variable warning
      cgc_free(read_00004);
      if (read_00004_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00004_00000[] = 
         "\x64\x20\x6e\x6f\x74\x20\x61\x63";
      static unsigned int write_00004_00000_len = 8;
      unsigned char *write_00004 = NULL;
      unsigned int write_00004_len = 0;
      write_00004 = cgc_append_buf(write_00004, &write_00004_len, write_00004_00000, write_00004_00000_len);
      if (write_00004_len > 0) {
         cgc_transmit_all(1, write_00004, write_00004_len);
      }
      cgc_free(write_00004);
   } while (0);
   do {
      unsigned char *read_00005;
      unsigned int read_00005_len;
      unsigned int read_00005_ptr = 0;
      //**** length read
      read_00005_len = 50;
      read_00005 = (unsigned char*)cgc_malloc(read_00005_len);
      int read_00005_res = cgc_length_read(0, read_00005, read_00005_len);
      if (read_00005_res) {} //silence unused variable warning
      cgc_free(read_00005);
      if (read_00005_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00005_00000[] = 
         "\x63\x65\x70\x74\x20\x27\x2d\x34";
      static unsigned int write_00005_00000_len = 8;
      unsigned char *write_00005 = NULL;
      unsigned int write_00005_len = 0;
      write_00005 = cgc_append_buf(write_00005, &write_00005_len, write_00005_00000, write_00005_00000_len);
      if (write_00005_len > 0) {
         cgc_transmit_all(1, write_00005, write_00005_len);
      }
      cgc_free(write_00005);
   } while (0);
   do {
      unsigned char *read_00006;
      unsigned int read_00006_len;
      unsigned int read_00006_ptr = 0;
      //**** length read
      read_00006_len = 50;
      read_00006 = (unsigned char*)cgc_malloc(read_00006_len);
      int read_00006_res = cgc_length_read(0, read_00006, read_00006_len);
      if (read_00006_res) {} //silence unused variable warning
      cgc_free(read_00006);
      if (read_00006_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00006_00000[] = 
         "\x33\x35\x35\x37\x35\x35\x39\x31";
      static unsigned int write_00006_00000_len = 8;
      unsigned char *write_00006 = NULL;
      unsigned int write_00006_len = 0;
      write_00006 = cgc_append_buf(write_00006, &write_00006_len, write_00006_00000, write_00006_00000_len);
      if (write_00006_len > 0) {
         cgc_transmit_all(1, write_00006, write_00006_len);
      }
      cgc_free(write_00006);
   } while (0);
   do {
      unsigned char *read_00007;
      unsigned int read_00007_len;
      unsigned int read_00007_ptr = 0;
      //**** length read
      read_00007_len = 50;
      read_00007 = (unsigned char*)cgc_malloc(read_00007_len);
      int read_00007_res = cgc_length_read(0, read_00007, read_00007_len);
      if (read_00007_res) {} //silence unused variable warning
      cgc_free(read_00007);
      if (read_00007_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00007_00000[] = 
         "\x36\x30\x34\x33\x36\x31\x35\x34";
      static unsigned int write_00007_00000_len = 8;
      unsigned char *write_00007 = NULL;
      unsigned int write_00007_len = 0;
      write_00007 = cgc_append_buf(write_00007, &write_00007_len, write_00007_00000, write_00007_00000_len);
      if (write_00007_len > 0) {
         cgc_transmit_all(1, write_00007, write_00007_len);
      }
      cgc_free(write_00007);
   } while (0);
   do {
      unsigned char *read_00008;
      unsigned int read_00008_len;
      unsigned int read_00008_ptr = 0;
      //**** length read
      read_00008_len = 50;
      read_00008 = (unsigned char*)cgc_malloc(read_00008_len);
      int read_00008_res = cgc_length_read(0, read_00008, read_00008_len);
      if (read_00008_res) {} //silence unused variable warning
      cgc_free(read_00008);
      if (read_00008_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00008_00000[] = 
         "\x39\x38\x27\x2e\x0a";
      static unsigned int write_00008_00000_len = 5;
      unsigned char *write_00008 = NULL;
      unsigned int write_00008_len = 0;
      write_00008 = cgc_append_buf(write_00008, &write_00008_len, write_00008_00000, write_00008_00000_len);
      if (write_00008_len > 0) {
         cgc_transmit_all(1, write_00008, write_00008_len);
      }
      cgc_free(write_00008);
   } while (0);
   do {
      unsigned char *read_00009;
      unsigned int read_00009_len;
      unsigned int read_00009_ptr = 0;
      //**** length read
      read_00009_len = 50;
      read_00009 = (unsigned char*)cgc_malloc(read_00009_len);
      int read_00009_res = cgc_length_read(0, read_00009, read_00009_len);
      if (read_00009_res) {} //silence unused variable warning
      cgc_free(read_00009);
      if (read_00009_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00009_00000[] = 
         "\x55\x73\x61\x67\x65\x3a\x20\x72";
      static unsigned int write_00009_00000_len = 8;
      unsigned char *write_00009 = NULL;
      unsigned int write_00009_len = 0;
      write_00009 = cgc_append_buf(write_00009, &write_00009_len, write_00009_00000, write_00009_00000_len);
      if (write_00009_len > 0) {
         cgc_transmit_all(1, write_00009, write_00009_len);
      }
      cgc_free(write_00009);
   } while (0);
   do {
      unsigned char *read_00010;
      unsigned int read_00010_len;
      unsigned int read_00010_ptr = 0;
      //**** length read
      read_00010_len = 50;
      read_00010 = (unsigned char*)cgc_malloc(read_00010_len);
      int read_00010_res = cgc_length_read(0, read_00010, read_00010_len);
      if (read_00010_res) {} //silence unused variable warning
      cgc_free(read_00010);
      if (read_00010_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00010_00000[] = 
         "\x61\x64\x61\x6d\x73\x61\x20\x5b";
      static unsigned int write_00010_00000_len = 8;
      unsigned char *write_00010 = NULL;
      unsigned int write_00010_len = 0;
      write_00010 = cgc_append_buf(write_00010, &write_00010_len, write_00010_00000, write_00010_00000_len);
      if (write_00010_len > 0) {
         cgc_transmit_all(1, write_00010, write_00010_len);
      }
      cgc_free(write_00010);
   } while (0);
   do {
      unsigned char *read_00011;
      unsigned int read_00011_len;
      unsigned int read_00011_ptr = 0;
      //**** length read
      read_00011_len = 50;
      read_00011 = (unsigned char*)cgc_malloc(read_00011_len);
      int read_00011_res = cgc_length_read(0, read_00011, read_00011_len);
      if (read_00011_res) {} //silence unused variable warning
      cgc_free(read_00011);
      if (read_00011_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00011_00000[] = 
         "\x61\x72\x67\x75\x6d\x65\x6e\x74";
      static unsigned int write_00011_00000_len = 8;
      unsigned char *write_00011 = NULL;
      unsigned int write_00011_len = 0;
      write_00011 = cgc_append_buf(write_00011, &write_00011_len, write_00011_00000, write_00011_00000_len);
      if (write_00011_len > 0) {
         cgc_transmit_all(1, write_00011, write_00011_len);
      }
      cgc_free(write_00011);
   } while (0);
   do {
      unsigned char *read_00012;
      unsigned int read_00012_len;
      unsigned int read_00012_ptr = 0;
      //**** length read
      read_00012_len = 50;
      read_00012 = (unsigned char*)cgc_malloc(read_00012_len);
      int read_00012_res = cgc_length_read(0, read_00012, read_00012_len);
      if (read_00012_res) {} //silence unused variable warning
      cgc_free(read_00012);
      if (read_00012_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00012_00000[] = 
         "\x73\x5d\x20\x5b\x66\x69\x6c\x65";
      static unsigned int write_00012_00000_len = 8;
      unsigned char *write_00012 = NULL;
      unsigned int write_00012_len = 0;
      write_00012 = cgc_append_buf(write_00012, &write_00012_len, write_00012_00000, write_00012_00000_len);
      if (write_00012_len > 0) {
         cgc_transmit_all(1, write_00012, write_00012_len);
      }
      cgc_free(write_00012);
   } while (0);
   do {
      unsigned char *read_00013;
      unsigned int read_00013_len;
      unsigned int read_00013_ptr = 0;
      //**** length read
      read_00013_len = 50;
      read_00013 = (unsigned char*)cgc_malloc(read_00013_len);
      int read_00013_res = cgc_length_read(0, read_00013, read_00013_len);
      if (read_00013_res) {} //silence unused variable warning
      cgc_free(read_00013);
      if (read_00013_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00013_00000[] = 
         "\x20\x2e\x2e\x2e\x5d\x0a";
      static unsigned int write_00013_00000_len = 6;
      unsigned char *write_00013 = NULL;
      unsigned int write_00013_len = 0;
      write_00013 = cgc_append_buf(write_00013, &write_00013_len, write_00013_00000, write_00013_00000_len);
      if (write_00013_len > 0) {
         cgc_transmit_all(1, write_00013, write_00013_len);
      }
      cgc_free(write_00013);
   } while (0);
   do {
      unsigned char *read_00014;
      unsigned int read_00014_len;
      unsigned int read_00014_ptr = 0;
      //**** length read
      read_00014_len = 50;
      read_00014 = (unsigned char*)cgc_malloc(read_00014_len);
      int read_00014_res = cgc_length_read(0, read_00014, read_00014_len);
      if (read_00014_res) {} //silence unused variable warning
      cgc_free(read_00014);
      if (read_00014_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00014_00000[] = 
         "\x31\x0a\x68\x6e\x7a\x45\x51\x69\x6e\x73\x71\x20\x6e\x4d\x58\x78"
         "\x6d\x6a\x0a\x43\x59\x77\x4b\x45\x4a\x46\x77\x20\x66\x0a\x4d\x20"
         "\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73"
         "\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62"
         "\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d"
         "\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67"
         "\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20"
         "\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73"
         "\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62"
         "\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d"
         "\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67"
         "\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20"
         "\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73"
         "\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62"
         "\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d"
         "\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67"
         "\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20"
         "\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73"
         "\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62"
         "\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d"
         "\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67"
         "\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20"
         "\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73"
         "\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62"
         "\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d"
         "\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67"
         "\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20"
         "\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73"
         "\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62"
         "\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d"
         "\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67"
         "\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20"
         "\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73"
         "\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62"
         "\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d"
         "\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67"
         "\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20"
         "\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73"
         "\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62"
         "\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d"
         "\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67"
         "\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20"
         "\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73"
         "\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62"
         "\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d"
         "\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67"
         "\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20"
         "\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73"
         "\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62"
         "\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d"
         "\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67"
         "\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20"
         "\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73"
         "\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62"
         "\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d"
         "\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67"
         "\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20"
         "\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73"
         "\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62"
         "\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d"
         "\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67"
         "\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20"
         "\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73"
         "\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62"
         "\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d"
         "\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67"
         "\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20"
         "\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73"
         "\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62"
         "\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d"
         "\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67"
         "\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20"
         "\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73"
         "\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62"
         "\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d"
         "\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67"
         "\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20"
         "\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73"
         "\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62"
         "\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d"
         "\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67"
         "\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20"
         "\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73"
         "\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62"
         "\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d"
         "\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67"
         "\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20"
         "\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73"
         "\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62"
         "\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d"
         "\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67"
         "\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20"
         "\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73"
         "\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62"
         "\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d"
         "\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67"
         "\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20"
         "\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73"
         "\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62"
         "\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d"
         "\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67"
         "\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20"
         "\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73"
         "\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62"
         "\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d"
         "\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67"
         "\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20"
         "\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73"
         "\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62"
         "\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d"
         "\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67"
         "\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20"
         "\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73"
         "\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62"
         "\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d"
         "\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67"
         "\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20"
         "\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73"
         "\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62"
         "\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d"
         "\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67"
         "\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20"
         "\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73"
         "\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62"
         "\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67\x4d\x6f\x48\x6d"
         "\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20\x46\x66\x70\x67"
         "\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73\x4d\x0a\x4d\x20"
         "\x46\x66\x70\x67\x4d\x6f\x48\x6d\x59\x64\x61\x62\x77\x68\x49\x73"
         "\x4d\x0a\x43\x50\x65\x74\x50\x7a\x20\x6b\x67\x74\x78\x66\x6e\x67"
         "\x74\x5a\x59\x73\x75\x79\x4e\x55\x6f\x58\x69\x0a\x64\x65\x70\x72"
         "\x65\x73\x73\x69\x76\x65\x20\x6c\x6f\x6e\x65\x6c\x79\x0a";
      static unsigned int write_00014_00000_len = 2094;
      unsigned char *write_00014 = NULL;
      unsigned int write_00014_len = 0;
      write_00014 = cgc_append_buf(write_00014, &write_00014_len, write_00014_00000, write_00014_00000_len);
      if (write_00014_len > 0) {
         cgc_transmit_all(1, write_00014, write_00014_len);
      }
      cgc_free(write_00014);
   } while (0);
   do {
      unsigned char *read_00015;
      unsigned int read_00015_len;
      unsigned int read_00015_ptr = 0;
      //**** length read
      read_00015_len = 70;
      read_00015 = (unsigned char*)cgc_malloc(read_00015_len);
      int read_00015_res = cgc_length_read(0, read_00015, read_00015_len);
      if (read_00015_res) {} //silence unused variable warning
      cgc_free(read_00015);
      if (read_00015_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00015_00000[] = 
         "\x54\x68\x65\x20\x61\x72\x67\x75";
      static unsigned int write_00015_00000_len = 8;
      unsigned char *write_00015 = NULL;
      unsigned int write_00015_len = 0;
      write_00015 = cgc_append_buf(write_00015, &write_00015_len, write_00015_00000, write_00015_00000_len);
      if (write_00015_len > 0) {
         cgc_transmit_all(1, write_00015, write_00015_len);
      }
      cgc_free(write_00015);
   } while (0);
   do {
      unsigned char *read_00016;
      unsigned int read_00016_len;
      unsigned int read_00016_ptr = 0;
      //**** length read
      read_00016_len = 50;
      read_00016 = (unsigned char*)cgc_malloc(read_00016_len);
      int read_00016_res = cgc_length_read(0, read_00016, read_00016_len);
      if (read_00016_res) {} //silence unused variable warning
      cgc_free(read_00016);
      if (read_00016_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00016_00000[] = 
         "\x6d\x65\x6e\x74\x20\x27\x2d\x2d";
      static unsigned int write_00016_00000_len = 8;
      unsigned char *write_00016 = NULL;
      unsigned int write_00016_len = 0;
      write_00016 = cgc_append_buf(write_00016, &write_00016_len, write_00016_00000, write_00016_00000_len);
      if (write_00016_len > 0) {
         cgc_transmit_all(1, write_00016, write_00016_len);
      }
      cgc_free(write_00016);
   } while (0);
   do {
      unsigned char *read_00017;
      unsigned int read_00017_len;
      unsigned int read_00017_ptr = 0;
      //**** length read
      read_00017_len = 50;
      read_00017 = (unsigned char*)cgc_malloc(read_00017_len);
      int read_00017_res = cgc_length_read(0, read_00017, read_00017_len);
      if (read_00017_res) {} //silence unused variable warning
      cgc_free(read_00017);
      if (read_00017_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00017_00000[] = 
         "\x73\x65\x65\x64\x27\x20\x64\x69";
      static unsigned int write_00017_00000_len = 8;
      unsigned char *write_00017 = NULL;
      unsigned int write_00017_len = 0;
      write_00017 = cgc_append_buf(write_00017, &write_00017_len, write_00017_00000, write_00017_00000_len);
      if (write_00017_len > 0) {
         cgc_transmit_all(1, write_00017, write_00017_len);
      }
      cgc_free(write_00017);
   } while (0);
   do {
      unsigned char *read_00018;
      unsigned int read_00018_len;
      unsigned int read_00018_ptr = 0;
      //**** length read
      read_00018_len = 50;
      read_00018 = (unsigned char*)cgc_malloc(read_00018_len);
      int read_00018_res = cgc_length_read(0, read_00018, read_00018_len);
      if (read_00018_res) {} //silence unused variable warning
      cgc_free(read_00018);
      if (read_00018_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00018_00000[] = 
         "\x64\x20\x6e\x6f\x74\x20\x61\x63";
      static unsigned int write_00018_00000_len = 8;
      unsigned char *write_00018 = NULL;
      unsigned int write_00018_len = 0;
      write_00018 = cgc_append_buf(write_00018, &write_00018_len, write_00018_00000, write_00018_00000_len);
      if (write_00018_len > 0) {
         cgc_transmit_all(1, write_00018, write_00018_len);
      }
      cgc_free(write_00018);
   } while (0);
   do {
      unsigned char *read_00019;
      unsigned int read_00019_len;
      unsigned int read_00019_ptr = 0;
      //**** length read
      read_00019_len = 50;
      read_00019 = (unsigned char*)cgc_malloc(read_00019_len);
      int read_00019_res = cgc_length_read(0, read_00019, read_00019_len);
      if (read_00019_res) {} //silence unused variable warning
      cgc_free(read_00019);
      if (read_00019_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00019_00000[] = 
         "\x63\x65\x70\x74\x20\x27\x2d\x32";
      static unsigned int write_00019_00000_len = 8;
      unsigned char *write_00019 = NULL;
      unsigned int write_00019_len = 0;
      write_00019 = cgc_append_buf(write_00019, &write_00019_len, write_00019_00000, write_00019_00000_len);
      if (write_00019_len > 0) {
         cgc_transmit_all(1, write_00019, write_00019_len);
      }
      cgc_free(write_00019);
   } while (0);
   do {
      unsigned char *read_00020;
      unsigned int read_00020_len;
      unsigned int read_00020_ptr = 0;
      //**** length read
      read_00020_len = 50;
      read_00020 = (unsigned char*)cgc_malloc(read_00020_len);
      int read_00020_res = cgc_length_read(0, read_00020, read_00020_len);
      if (read_00020_res) {} //silence unused variable warning
      cgc_free(read_00020);
      if (read_00020_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00020_00000[] = 
         "\x30\x30\x39\x39\x35\x32\x36\x30";
      static unsigned int write_00020_00000_len = 8;
      unsigned char *write_00020 = NULL;
      unsigned int write_00020_len = 0;
      write_00020 = cgc_append_buf(write_00020, &write_00020_len, write_00020_00000, write_00020_00000_len);
      if (write_00020_len > 0) {
         cgc_transmit_all(1, write_00020, write_00020_len);
      }
      cgc_free(write_00020);
   } while (0);
   do {
      unsigned char *read_00021;
      unsigned int read_00021_len;
      unsigned int read_00021_ptr = 0;
      //**** length read
      read_00021_len = 50;
      read_00021 = (unsigned char*)cgc_malloc(read_00021_len);
      int read_00021_res = cgc_length_read(0, read_00021, read_00021_len);
      if (read_00021_res) {} //silence unused variable warning
      cgc_free(read_00021);
      if (read_00021_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00021_00000[] = 
         "\x37\x38\x33\x38\x30\x31\x34\x33";
      static unsigned int write_00021_00000_len = 8;
      unsigned char *write_00021 = NULL;
      unsigned int write_00021_len = 0;
      write_00021 = cgc_append_buf(write_00021, &write_00021_len, write_00021_00000, write_00021_00000_len);
      if (write_00021_len > 0) {
         cgc_transmit_all(1, write_00021, write_00021_len);
      }
      cgc_free(write_00021);
   } while (0);
   do {
      unsigned char *read_00022;
      unsigned int read_00022_len;
      unsigned int read_00022_ptr = 0;
      //**** length read
      read_00022_len = 50;
      read_00022 = (unsigned char*)cgc_malloc(read_00022_len);
      int read_00022_res = cgc_length_read(0, read_00022, read_00022_len);
      if (read_00022_res) {} //silence unused variable warning
      cgc_free(read_00022);
      if (read_00022_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00022_00000[] = 
         "\x32\x34\x27\x2e\x0a";
      static unsigned int write_00022_00000_len = 5;
      unsigned char *write_00022 = NULL;
      unsigned int write_00022_len = 0;
      write_00022 = cgc_append_buf(write_00022, &write_00022_len, write_00022_00000, write_00022_00000_len);
      if (write_00022_len > 0) {
         cgc_transmit_all(1, write_00022, write_00022_len);
      }
      cgc_free(write_00022);
   } while (0);
   do {
      unsigned char *read_00023;
      unsigned int read_00023_len;
      unsigned int read_00023_ptr = 0;
      //**** length read
      read_00023_len = 50;
      read_00023 = (unsigned char*)cgc_malloc(read_00023_len);
      int read_00023_res = cgc_length_read(0, read_00023, read_00023_len);
      if (read_00023_res) {} //silence unused variable warning
      cgc_free(read_00023);
      if (read_00023_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00023_00000[] = 
         "\x55\x73\x61\x67\x65\x3a\x20\x72";
      static unsigned int write_00023_00000_len = 8;
      unsigned char *write_00023 = NULL;
      unsigned int write_00023_len = 0;
      write_00023 = cgc_append_buf(write_00023, &write_00023_len, write_00023_00000, write_00023_00000_len);
      if (write_00023_len > 0) {
         cgc_transmit_all(1, write_00023, write_00023_len);
      }
      cgc_free(write_00023);
   } while (0);
   do {
      unsigned char *read_00024;
      unsigned int read_00024_len;
      unsigned int read_00024_ptr = 0;
      //**** length read
      read_00024_len = 50;
      read_00024 = (unsigned char*)cgc_malloc(read_00024_len);
      int read_00024_res = cgc_length_read(0, read_00024, read_00024_len);
      if (read_00024_res) {} //silence unused variable warning
      cgc_free(read_00024);
      if (read_00024_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00024_00000[] = 
         "\x61\x64\x61\x6d\x73\x61\x20\x5b";
      static unsigned int write_00024_00000_len = 8;
      unsigned char *write_00024 = NULL;
      unsigned int write_00024_len = 0;
      write_00024 = cgc_append_buf(write_00024, &write_00024_len, write_00024_00000, write_00024_00000_len);
      if (write_00024_len > 0) {
         cgc_transmit_all(1, write_00024, write_00024_len);
      }
      cgc_free(write_00024);
   } while (0);
   do {
      unsigned char *read_00025;
      unsigned int read_00025_len;
      unsigned int read_00025_ptr = 0;
      //**** length read
      read_00025_len = 50;
      read_00025 = (unsigned char*)cgc_malloc(read_00025_len);
      int read_00025_res = cgc_length_read(0, read_00025, read_00025_len);
      if (read_00025_res) {} //silence unused variable warning
      cgc_free(read_00025);
      if (read_00025_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00025_00000[] = 
         "\x61\x72\x67\x75\x6d\x65\x6e\x74";
      static unsigned int write_00025_00000_len = 8;
      unsigned char *write_00025 = NULL;
      unsigned int write_00025_len = 0;
      write_00025 = cgc_append_buf(write_00025, &write_00025_len, write_00025_00000, write_00025_00000_len);
      if (write_00025_len > 0) {
         cgc_transmit_all(1, write_00025, write_00025_len);
      }
      cgc_free(write_00025);
   } while (0);
   do {
      unsigned char *read_00026;
      unsigned int read_00026_len;
      unsigned int read_00026_ptr = 0;
      //**** length read
      read_00026_len = 50;
      read_00026 = (unsigned char*)cgc_malloc(read_00026_len);
      int read_00026_res = cgc_length_read(0, read_00026, read_00026_len);
      if (read_00026_res) {} //silence unused variable warning
      cgc_free(read_00026);
      if (read_00026_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00026_00000[] = 
         "\x73\x5d\x20\x5b\x66\x69\x6c\x65";
      static unsigned int write_00026_00000_len = 8;
      unsigned char *write_00026 = NULL;
      unsigned int write_00026_len = 0;
      write_00026 = cgc_append_buf(write_00026, &write_00026_len, write_00026_00000, write_00026_00000_len);
      if (write_00026_len > 0) {
         cgc_transmit_all(1, write_00026, write_00026_len);
      }
      cgc_free(write_00026);
   } while (0);
   do {
      unsigned char *read_00027;
      unsigned int read_00027_len;
      unsigned int read_00027_ptr = 0;
      //**** length read
      read_00027_len = 50;
      read_00027 = (unsigned char*)cgc_malloc(read_00027_len);
      int read_00027_res = cgc_length_read(0, read_00027, read_00027_len);
      if (read_00027_res) {} //silence unused variable warning
      cgc_free(read_00027);
      if (read_00027_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00027_00000[] = 
         "\x20\x2e\x2e\x2e\x5d\x0a";
      static unsigned int write_00027_00000_len = 6;
      unsigned char *write_00027 = NULL;
      unsigned int write_00027_len = 0;
      write_00027 = cgc_append_buf(write_00027, &write_00027_len, write_00027_00000, write_00027_00000_len);
      if (write_00027_len > 0) {
         cgc_transmit_all(1, write_00027, write_00027_len);
      }
      cgc_free(write_00027);
   } while (0);
   do {
      unsigned char *read_00028;
      unsigned int read_00028_len;
      unsigned int read_00028_ptr = 0;
      //**** length read
      read_00028_len = 50;
      read_00028 = (unsigned char*)cgc_malloc(read_00028_len);
      int read_00028_res = cgc_length_read(0, read_00028, read_00028_len);
      if (read_00028_res) {} //silence unused variable warning
      cgc_free(read_00028);
      if (read_00028_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00028_00000[] = 
         "\x54\x68\x65\x20\x61\x72\x67\x75";
      static unsigned int write_00028_00000_len = 8;
      unsigned char *write_00028 = NULL;
      unsigned int write_00028_len = 0;
      write_00028 = cgc_append_buf(write_00028, &write_00028_len, write_00028_00000, write_00028_00000_len);
      if (write_00028_len > 0) {
         cgc_transmit_all(1, write_00028, write_00028_len);
      }
      cgc_free(write_00028);
   } while (0);
   do {
      unsigned char *read_00029;
      unsigned int read_00029_len;
      unsigned int read_00029_ptr = 0;
      //**** length read
      read_00029_len = 50;
      read_00029 = (unsigned char*)cgc_malloc(read_00029_len);
      int read_00029_res = cgc_length_read(0, read_00029, read_00029_len);
      if (read_00029_res) {} //silence unused variable warning
      cgc_free(read_00029);
      if (read_00029_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00029_00000[] = 
         "\x6d\x65\x6e\x74\x20\x27\x2d\x2d";
      static unsigned int write_00029_00000_len = 8;
      unsigned char *write_00029 = NULL;
      unsigned int write_00029_len = 0;
      write_00029 = cgc_append_buf(write_00029, &write_00029_len, write_00029_00000, write_00029_00000_len);
      if (write_00029_len > 0) {
         cgc_transmit_all(1, write_00029, write_00029_len);
      }
      cgc_free(write_00029);
   } while (0);
   do {
      unsigned char *read_00030;
      unsigned int read_00030_len;
      unsigned int read_00030_ptr = 0;
      //**** length read
      read_00030_len = 50;
      read_00030 = (unsigned char*)cgc_malloc(read_00030_len);
      int read_00030_res = cgc_length_read(0, read_00030, read_00030_len);
      if (read_00030_res) {} //silence unused variable warning
      cgc_free(read_00030);
      if (read_00030_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00030_00000[] = 
         "\x73\x65\x65\x64\x27\x20\x64\x69";
      static unsigned int write_00030_00000_len = 8;
      unsigned char *write_00030 = NULL;
      unsigned int write_00030_len = 0;
      write_00030 = cgc_append_buf(write_00030, &write_00030_len, write_00030_00000, write_00030_00000_len);
      if (write_00030_len > 0) {
         cgc_transmit_all(1, write_00030, write_00030_len);
      }
      cgc_free(write_00030);
   } while (0);
   do {
      unsigned char *read_00031;
      unsigned int read_00031_len;
      unsigned int read_00031_ptr = 0;
      //**** length read
      read_00031_len = 50;
      read_00031 = (unsigned char*)cgc_malloc(read_00031_len);
      int read_00031_res = cgc_length_read(0, read_00031, read_00031_len);
      if (read_00031_res) {} //silence unused variable warning
      cgc_free(read_00031);
      if (read_00031_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00031_00000[] = 
         "\x64\x20\x6e\x6f\x74\x20\x61\x63";
      static unsigned int write_00031_00000_len = 8;
      unsigned char *write_00031 = NULL;
      unsigned int write_00031_len = 0;
      write_00031 = cgc_append_buf(write_00031, &write_00031_len, write_00031_00000, write_00031_00000_len);
      if (write_00031_len > 0) {
         cgc_transmit_all(1, write_00031, write_00031_len);
      }
      cgc_free(write_00031);
   } while (0);
   do {
      unsigned char *read_00032;
      unsigned int read_00032_len;
      unsigned int read_00032_ptr = 0;
      //**** length read
      read_00032_len = 50;
      read_00032 = (unsigned char*)cgc_malloc(read_00032_len);
      int read_00032_res = cgc_length_read(0, read_00032, read_00032_len);
      if (read_00032_res) {} //silence unused variable warning
      cgc_free(read_00032);
      if (read_00032_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00032_00000[] = 
         "\x63\x65\x70\x74\x20\x27\x2d\x31";
      static unsigned int write_00032_00000_len = 8;
      unsigned char *write_00032 = NULL;
      unsigned int write_00032_len = 0;
      write_00032 = cgc_append_buf(write_00032, &write_00032_len, write_00032_00000, write_00032_00000_len);
      if (write_00032_len > 0) {
         cgc_transmit_all(1, write_00032, write_00032_len);
      }
      cgc_free(write_00032);
   } while (0);
   do {
      unsigned char *read_00033;
      unsigned int read_00033_len;
      unsigned int read_00033_ptr = 0;
      //**** length read
      read_00033_len = 50;
      read_00033 = (unsigned char*)cgc_malloc(read_00033_len);
      int read_00033_res = cgc_length_read(0, read_00033, read_00033_len);
      if (read_00033_res) {} //silence unused variable warning
      cgc_free(read_00033);
      if (read_00033_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00033_00000[] = 
         "\x38\x31\x37\x35\x34\x34\x38\x32";
      static unsigned int write_00033_00000_len = 8;
      unsigned char *write_00033 = NULL;
      unsigned int write_00033_len = 0;
      write_00033 = cgc_append_buf(write_00033, &write_00033_len, write_00033_00000, write_00033_00000_len);
      if (write_00033_len > 0) {
         cgc_transmit_all(1, write_00033, write_00033_len);
      }
      cgc_free(write_00033);
   } while (0);
   do {
      unsigned char *read_00034;
      unsigned int read_00034_len;
      unsigned int read_00034_ptr = 0;
      //**** length read
      read_00034_len = 50;
      read_00034 = (unsigned char*)cgc_malloc(read_00034_len);
      int read_00034_res = cgc_length_read(0, read_00034, read_00034_len);
      if (read_00034_res) {} //silence unused variable warning
      cgc_free(read_00034);
      if (read_00034_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00034_00000[] = 
         "\x39\x38\x30\x36\x36\x30\x33\x30";
      static unsigned int write_00034_00000_len = 8;
      unsigned char *write_00034 = NULL;
      unsigned int write_00034_len = 0;
      write_00034 = cgc_append_buf(write_00034, &write_00034_len, write_00034_00000, write_00034_00000_len);
      if (write_00034_len > 0) {
         cgc_transmit_all(1, write_00034, write_00034_len);
      }
      cgc_free(write_00034);
   } while (0);
   do {
      unsigned char *read_00035;
      unsigned int read_00035_len;
      unsigned int read_00035_ptr = 0;
      //**** length read
      read_00035_len = 50;
      read_00035 = (unsigned char*)cgc_malloc(read_00035_len);
      int read_00035_res = cgc_length_read(0, read_00035, read_00035_len);
      if (read_00035_res) {} //silence unused variable warning
      cgc_free(read_00035);
      if (read_00035_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00035_00000[] = 
         "\x35\x27\x2e\x0a";
      static unsigned int write_00035_00000_len = 4;
      unsigned char *write_00035 = NULL;
      unsigned int write_00035_len = 0;
      write_00035 = cgc_append_buf(write_00035, &write_00035_len, write_00035_00000, write_00035_00000_len);
      if (write_00035_len > 0) {
         cgc_transmit_all(1, write_00035, write_00035_len);
      }
      cgc_free(write_00035);
   } while (0);
   do {
      unsigned char *read_00036;
      unsigned int read_00036_len;
      unsigned int read_00036_ptr = 0;
      //**** length read
      read_00036_len = 50;
      read_00036 = (unsigned char*)cgc_malloc(read_00036_len);
      int read_00036_res = cgc_length_read(0, read_00036, read_00036_len);
      if (read_00036_res) {} //silence unused variable warning
      cgc_free(read_00036);
      if (read_00036_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00036_00000[] = 
         "\x55\x73\x61\x67\x65\x3a\x20\x72";
      static unsigned int write_00036_00000_len = 8;
      unsigned char *write_00036 = NULL;
      unsigned int write_00036_len = 0;
      write_00036 = cgc_append_buf(write_00036, &write_00036_len, write_00036_00000, write_00036_00000_len);
      if (write_00036_len > 0) {
         cgc_transmit_all(1, write_00036, write_00036_len);
      }
      cgc_free(write_00036);
   } while (0);
   do {
      unsigned char *read_00037;
      unsigned int read_00037_len;
      unsigned int read_00037_ptr = 0;
      //**** length read
      read_00037_len = 50;
      read_00037 = (unsigned char*)cgc_malloc(read_00037_len);
      int read_00037_res = cgc_length_read(0, read_00037, read_00037_len);
      if (read_00037_res) {} //silence unused variable warning
      cgc_free(read_00037);
      if (read_00037_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00037_00000[] = 
         "\x61\x64\x61\x6d\x73\x61\x20\x5b";
      static unsigned int write_00037_00000_len = 8;
      unsigned char *write_00037 = NULL;
      unsigned int write_00037_len = 0;
      write_00037 = cgc_append_buf(write_00037, &write_00037_len, write_00037_00000, write_00037_00000_len);
      if (write_00037_len > 0) {
         cgc_transmit_all(1, write_00037, write_00037_len);
      }
      cgc_free(write_00037);
   } while (0);
   do {
      unsigned char *read_00038;
      unsigned int read_00038_len;
      unsigned int read_00038_ptr = 0;
      //**** length read
      read_00038_len = 50;
      read_00038 = (unsigned char*)cgc_malloc(read_00038_len);
      int read_00038_res = cgc_length_read(0, read_00038, read_00038_len);
      if (read_00038_res) {} //silence unused variable warning
      cgc_free(read_00038);
      if (read_00038_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00038_00000[] = 
         "\x61\x72\x67\x75\x6d\x65\x6e\x74";
      static unsigned int write_00038_00000_len = 8;
      unsigned char *write_00038 = NULL;
      unsigned int write_00038_len = 0;
      write_00038 = cgc_append_buf(write_00038, &write_00038_len, write_00038_00000, write_00038_00000_len);
      if (write_00038_len > 0) {
         cgc_transmit_all(1, write_00038, write_00038_len);
      }
      cgc_free(write_00038);
   } while (0);
   do {
      unsigned char *read_00039;
      unsigned int read_00039_len;
      unsigned int read_00039_ptr = 0;
      //**** length read
      read_00039_len = 50;
      read_00039 = (unsigned char*)cgc_malloc(read_00039_len);
      int read_00039_res = cgc_length_read(0, read_00039, read_00039_len);
      if (read_00039_res) {} //silence unused variable warning
      cgc_free(read_00039);
      if (read_00039_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00039_00000[] = 
         "\x73\x5d\x20\x5b\x66\x69\x6c\x65";
      static unsigned int write_00039_00000_len = 8;
      unsigned char *write_00039 = NULL;
      unsigned int write_00039_len = 0;
      write_00039 = cgc_append_buf(write_00039, &write_00039_len, write_00039_00000, write_00039_00000_len);
      if (write_00039_len > 0) {
         cgc_transmit_all(1, write_00039, write_00039_len);
      }
      cgc_free(write_00039);
   } while (0);
   do {
      unsigned char *read_00040;
      unsigned int read_00040_len;
      unsigned int read_00040_ptr = 0;
      //**** length read
      read_00040_len = 50;
      read_00040 = (unsigned char*)cgc_malloc(read_00040_len);
      int read_00040_res = cgc_length_read(0, read_00040, read_00040_len);
      if (read_00040_res) {} //silence unused variable warning
      cgc_free(read_00040);
      if (read_00040_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00040_00000[] = 
         "\x20\x2e\x2e\x2e\x5d\x0a";
      static unsigned int write_00040_00000_len = 6;
      unsigned char *write_00040 = NULL;
      unsigned int write_00040_len = 0;
      write_00040 = cgc_append_buf(write_00040, &write_00040_len, write_00040_00000, write_00040_00000_len);
      if (write_00040_len > 0) {
         cgc_transmit_all(1, write_00040, write_00040_len);
      }
      cgc_free(write_00040);
   } while (0);
   do {
      unsigned char *read_00041;
      unsigned int read_00041_len;
      unsigned int read_00041_ptr = 0;
      //**** length read
      read_00041_len = 50;
      read_00041 = (unsigned char*)cgc_malloc(read_00041_len);
      int read_00041_res = cgc_length_read(0, read_00041, read_00041_len);
      if (read_00041_res) {} //silence unused variable warning
      cgc_free(read_00041);
      if (read_00041_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00041_00000[] = 
         "\x2d\x32\x31\x34\x37\x35\x34\x39";
      static unsigned int write_00041_00000_len = 8;
      unsigned char *write_00041 = NULL;
      unsigned int write_00041_len = 0;
      write_00041 = cgc_append_buf(write_00041, &write_00041_len, write_00041_00000, write_00041_00000_len);
      if (write_00041_len > 0) {
         cgc_transmit_all(1, write_00041, write_00041_len);
      }
      cgc_free(write_00041);
   } while (0);
   do {
      unsigned char *read_00042;
      unsigned int read_00042_len;
      unsigned int read_00042_ptr = 0;
      //**** length read
      read_00042_len = 50;
      read_00042 = (unsigned char*)cgc_malloc(read_00042_len);
      int read_00042_res = cgc_length_read(0, read_00042, read_00042_len);
      if (read_00042_res) {} //silence unused variable warning
      cgc_free(read_00042);
      if (read_00042_ptr) {}  //silence unused variable warning if any
   } while (0);
   do {
      //*** writing data
      static unsigned char write_00042_00000[] = 
         "\x30\x35\x36\x0a";
      static unsigned int write_00042_00000_len = 4;
      unsigned char *write_00042 = NULL;
      unsigned int write_00042_len = 0;
      write_00042 = cgc_append_buf(write_00042, &write_00042_len, write_00042_00000, write_00042_00000_len);
      if (write_00042_len > 0) {
         cgc_transmit_all(1, write_00042, write_00042_len);
      }
      cgc_free(write_00042);
   } while (0);
   //*** delay
   cgc_delay(1000);
}
