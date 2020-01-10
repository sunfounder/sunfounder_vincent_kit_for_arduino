/*Copyright (c) 2010 bildr community

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 */

#ifndef MPR121_JM_h
#define MPR121_JM_h 
 
#include <Wire.h>

#endif
// MPR121 Register Defines
#define MHD_R	0x2B
#define NHD_R	0x2C
#define	NCL_R 	0x2D
#define	FDL_R	0x2E
#define	MHD_F	0x2F
#define	NHD_F	0x30
#define	NCL_F	0x31
#define	FDL_F	0x32
#define	ELE0_T	0x41
#define	ELE0_R	0x42
#define	ELE1_T	0x43
#define	ELE1_R	0x44
#define	ELE2_T	0x45
#define	ELE2_R	0x46
#define	ELE3_T	0x47
#define	ELE3_R	0x48
#define	ELE4_T	0x49
#define	ELE4_R	0x4A
#define	ELE5_T	0x4B
#define	ELE5_R	0x4C
#define	ELE6_T	0x4D
#define	ELE6_R	0x4E
#define	ELE7_T	0x4F
#define	ELE7_R	0x50
#define	ELE8_T	0x51
#define	ELE8_R	0x52
#define	ELE9_T	0x53
#define	ELE9_R	0x54
#define	ELE10_T	0x55
#define	ELE10_R	0x56
#define	ELE11_T	0x57
#define	ELE11_R	0x58
#define	FIL_CFG	0x5D
#define	ELE_CFG	0x5E
#define GPIO_CTRL0	0x73
#define	GPIO_CTRL1	0x74
#define GPIO_DATA	0x75
#define	GPIO_DIR	0x76
#define	GPIO_EN		0x77
#define	GPIO_SET	0x78
#define	GPIO_CLEAR	0x79
#define	GPIO_TOGGLE	0x7A
#define	ATO_CFG0	0x7B
#define	ATO_CFGU	0x7D
#define	ATO_CFGL	0x7E
#define	ATO_CFGT	0x7F


// Global Constants
#define TOU_THRESH 0x3A
#define REL_THRESH 0x2F



class MPR121
{
public:
	MPR121(int irqpin,uint8_t touThresh,uint8_t relThresh);
	uint16_t readTouchInputs(void);
	void dumpregs(void);
	void mpr121_setup(void);	
	bool checkInterrupt(void);	
private:
	void set_register(int address, unsigned char r, unsigned char v);
	int _irqpin;
	uint8_t _touThresh;
	uint8_t _relThresh;
};