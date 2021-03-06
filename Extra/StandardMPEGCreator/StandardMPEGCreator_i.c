/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Tue Sep 09 11:04:08 2008
 */
/* Compiler settings for Z:\Development\DirectEncode\StandardMPEGCreator\StandardMPEGCreator.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID LIBID_STANDARDMPEGCREATORLib = {0x37FAD0EE,0xEFE5,0x4A2F,{0xAB,0xDA,0xF5,0x95,0xEC,0xD7,0x2E,0x02}};


const IID DIID__IMPEGConverterEvents = {0x42F0250E,0x09C9,0x4DFF,{0x89,0xB5,0x90,0x82,0x69,0xD5,0xD3,0x89}};


const IID IID_IStatistics = {0xECA2893E,0x47C9,0x47FE,{0xAF,0xBF,0x6C,0x29,0xA8,0xB2,0x35,0xE3}};


const IID IID_ISettings = {0x7EC4D5A8,0x7E6A,0x4DCF,{0x81,0xF4,0xD4,0x64,0x88,0x54,0x28,0xEE}};


const IID IID_IMPEGConverter = {0xA70F42FA,0xB3CF,0x4FCF,{0x82,0xFC,0x2E,0x9E,0x26,0xCB,0x41,0x9A}};


const CLSID CLSID_MPEGConverter = {0xAEF8D647,0x4BD1,0x4922,{0x8E,0x81,0x32,0x48,0x97,0xB1,0xBF,0xB1}};


const CLSID CLSID_Statistics = {0x39A2FEEE,0xE83A,0x41BD,{0xBA,0x48,0x57,0x5B,0x7D,0x09,0xAF,0x10}};


const CLSID CLSID_Settings = {0x21E055F2,0xDB1B,0x43F6,{0x94,0x8E,0x1B,0x65,0x5F,0xE3,0xE0,0x8F}};


#ifdef __cplusplus
}
#endif

