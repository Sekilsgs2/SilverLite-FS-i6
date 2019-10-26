#include <stdint.h>
#include <stddef.h>
#define ADC_VAL 0x20000F00
#define ADC_READING 0x20000F20
#define RX_BUFFER 0x20000EE4
#define RX_BUFFER_LENGTH 28
#define TX_BUFFER 0x1FFFFDBA
#define TX_BUFFER_LENGTH 38
#define MODEL_SETTINGS 0x200002A4
#define SENSOR_ARRAY 0x200001A4
#define CHANNEL_VALUE 0x1FFFFDE0 // signed int -10k ... +10k
#define CHANNEL_VALUE_RADIO 0x1FFFFD54
#define PPM_IN_BUFFER 0x1FFFFCC0 //12 * 16bit unsigned
#define GFX_ARRAY 0x1FFFF8C0
#define INPUT_STATES 0x1FFFF89C  //uint bits
#define USED_MODEL_PTR 0x2000002C //PTR to current model
#define ARROW_GFX_INFO 0xCBF8
#define MEM_20000000 0x20000000
#define TIMER_SYS_TIM 0x1FFFF8B0 //SYS_TIM
#define GFX_ARROW 0xCBF8
#define TEXT_VALUE 0xCAE1
#define TEXT_CHANNEL 0x9650
#define TEXT_OFF	0xCA87
#define TEXT_TIMMER	0xDCB7

#define KEY_SHORT_UP 9
#define KEY_SHORT_DOWN  8

#define KEY_SHORT_OK 10
#define KEY_SHORT_CANCEL 11

#define KEY_LONG_UP 23
#define KEY_LONG_DOWN 24

#define KEY_LONG_OK 22
#define KEY_LONG_CANCEL 25

#define ALARM_GT 1
#define ALARM_LT 0


typedef struct gfxInfo
{
   int width;
   int height;
   int address;
} gfxInfo;

typedef struct manuEntry{
	const char* namePtr;
	void* thumbAddress;
} manuEntry;



typedef int (*sprintfFun)(char* buffer, const char* format, ...);
typedef void (*voidFun)(void);
typedef size_t (*strLenFun)(const char * str);
typedef char* (*strcatFun)(char * str, const char* source);
typedef void * (*memSetFun)(void *str, int c, size_t n);
typedef uint32_t (*divFun)(uint32_t a, uint32_t b);
typedef int (*intVoidFun)(void);
typedef int (*eepromFun)(uint8_t * target, int16_t eepromOffset, int length);
typedef int (*gfxFun)(gfxInfo* gfx, int x, int y);
typedef int (*drawFun)(int x1, int y1, int x2, int y2, int value);
typedef int (*pixelFun)(int x1, int y1, int value);
typedef int (*displayText)(char* text, int x, int y, int val);
typedef int (*displayHeader)(char* text);
typedef int (*sensorValue)(int sensorID, int index);
typedef void (*setSenValue)(char* packet);
typedef void (*formatSensData)(uint8_t sensorID, uint8_t sensorIndex, char* packet);
typedef void (*navPage)(const char* pageName, int numberofitems, manuEntry* menuStruct);
typedef void (*beepFun)(int freq, int duration);
typedef void (*crcFun)(char* data, int length);


__attribute__((section (".s_MOD_SPACE.NAVPAGE"))) const navPage showNavPage = (navPage)0x6DD5;
__attribute__((section (".s_MOD_SPACE.SETTINGSVALID"))) const voidFun settingsValidation = (voidFun)0x6005;
__attribute__((section (".s_MOD_SPACE.SPIMETHOD"))) const voidFun someSPImethod = (voidFun)0xA339;

__attribute__((section (".s_MOD_SPACE.SPRINTF"))) const sprintfFun sprintfCall = (sprintfFun)0x19F9;
__attribute__((section (".s_MOD_SPACE.STRCAT"))) const strcatFun strcatCall = (strcatFun)0x1C65;

__attribute__((section (".s_MOD_SPACE.STRLEN"))) const strLenFun strLenCall = (strLenFun)0x1CB1;
__attribute__((section (".s_MOD_SPACE.MEMSET"))) const memSetFun memsetCall = (memSetFun)0x3201;
__attribute__((section (".s_MOD_SPACE.SEND"))) const voidFun sendPacketWithSysTick = (voidFun)0x9EFD;
__attribute__((section (".s_MOD_SPACE.DIVMOD"))) const divFun uidivmod = (divFun)0x1E5F;
__attribute__((section (".s_MOD_SPACE.DIV"))) const divFun div_ = (divFun)0x1E7B;
__attribute__((section (".s_MOD_SPACE.GETKEY"))) const intVoidFun getKeyCode = (intVoidFun)0x2535;
__attribute__((section (".s_MOD_SPACE.GETINPUT"))) const intVoidFun getInputStates = (intVoidFun)0x3569;
__attribute__((section (".s_MOD_SPACE.DMASEND"))) const voidFun callSetupDMAandSend = (voidFun)0x25B5;
__attribute__((section (".s_MOD_SPACE.EEPROMTREAD"))) const eepromFun readEeprom = (eepromFun)0x3E11;
__attribute__((section (".s_MOD_SPACE.EEPROMWRITE"))) const eepromFun saveEeprom = (eepromFun)0x3E85;
__attribute__((section (".s_MOD_SPACE.displayGFX"))) const gfxFun displayGFX = (gfxFun)0x4BA1;
__attribute__((section (".s_MOD_SPACE.fillRegion"))) const drawFun fillRegion = (drawFun)0x4C71;
__attribute__((section (".s_MOD_SPACE.drawLine"))) const drawFun drawLine = (drawFun)0x4E8D;
__attribute__((section (".s_MOD_SPACE.drawRect"))) const drawFun drawRect = (drawFun)0x5019;
__attribute__((section (".s_MOD_SPACE.setPixel"))) const pixelFun setPixel = (pixelFun)0x4FD9;
__attribute__((section (".s_MOD_SPACE.displayTextAt"))) const displayText displayTextAt = (displayText)0x505D;
//__attribute__((section (".s_MOD_SPACE.displaySmallTextAt"))) const displayText displaySmallTextAt = (displayText)0x5175;
__attribute__((section (".s_MOD_SPACE.displayPageHeader"))) const displayHeader displayPageHeader = (displayHeader)0x6D5D;
__attribute__((section (".s_MOD_SPACE.getSensorValue"))) const sensorValue getSensorValue = (sensorValue)0x5375;
__attribute__((section (".s_MOD_SPACE.setSensorValue"))) const setSenValue setSensorValue = (setSenValue)0x57D5;
__attribute__((section (".s_MOD_SPACE.formatSensorData"))) const formatSensData formatSensorData = (formatSensData)0x53CD;
__attribute__((section (".s_MOD_SPACE.updateLCD"))) const voidFun LCD_updateCALL = (voidFun)0x25BD;



__attribute__((section (".s_MOD_SPACE.showNavigationPage"))) const navPage showNavigationPage = (navPage)0x6DD5;
__attribute__((section (".s_MOD_SPACE.beep"))) const beepFun beep = (beepFun)0x9C3D;
__attribute__((section (".s_MOD_SPACE.beepCheck"))) const intVoidFun beepCheck = (intVoidFun)0x9BC1;
__attribute__((section (".s_MOD_SPACE.checkCRC"))) const crcFun checkCRC = (crcFun)0xA021;
__attribute__((section (".s_MOD_SPACE.getCurrentTicks"))) const intVoidFun getCurrentTicks = (intVoidFun)0xA1B1;
__attribute__((section (".s_MOD_SPACE.someBeepCheck"))) const intVoidFun someBeepCheck = (intVoidFun)0x9BC1;

//volatile unsigned int *adcVal = (volatile unsigned int *)0x20000F00;
//volatile unsigned int *adcRead = (volatile unsigned int *)0x20000F20;
/*
__attribute__((section (".s_SendPacketWithSysTick"))) void SendPacketWithSysTick(void);
__attribute__((section (".s_strLength"))) size_t _strlen( const char * str );
__attribute__((section (".s_sprintf")))int sprintf ( char* buffer, const char* format, ...);
__attribute__((section (".s_memset"))) void *_memset(void *str, int c, size_t n);

__attribute__((section (".s_uidivmod"))) uint32_t uidivmod(uint32_t a, uint32_t b);
__attribute__((section (".s_div"))) uint32_t div(uint32_t a, uint32_t b);

__attribute__((section (".s_getKeyCode"))) int getKeyCode();
__attribute__((section (".s_getInputStates"))) int getInputStates();
__attribute__((section (".s_chooseSensors"))) void chooseSensors(); //must re reimpl
__attribute__((section (".s_callSetupDMAandSend"))) void callSetupDMAandSend();
__attribute__((section (".s_readEeprom"))) int readEeprom(uint8_t * target, int16_t eepromOffset, int length);
__attribute__((section (".s_saveEeprom"))) int saveEeprom(uint8_t * target, int16_t eepromOffset, int length);
__attribute__((section (".s_displayGFX"))) int displayGFX(gfxInfo* gfx, int x, int y);
__attribute__((section (".s_fillRegion"))) int fillRegion(int x1, int y1, int x2, int y2, int value);  //value 0 for clear 1 for fill
__attribute__((section (".s_drawLine"))) int drawLine(int x1, int y1, int x2, int y2, int value);  //value always 0
__attribute__((section (".s_setPixel"))) int setPixel(int x1, int y1, int value);  //value always 0
__attribute__((section (".s_drawRect"))) signed int drawRect(int x1, signed int y1, int x2, signed int y2, int value);//value is always 0
__attribute__((section (".s_displayTextAt"))) signed int displayTextAt(char* text, int x, int y, int val);//value is always 0
__attribute__((section (".s_displayPageHeader"))) signed int displayPageHeader(char* text);
//inline __attribute__((section (".s_displaySmallTextAt"))) signed int displaySmallTextAt(int x1, signed int y1, int x2, signed int y2, int value){return 0;}//value is always 0

__attribute__((section (".s_getSensorValue"))) int getSensorValue(int sensorID, int index);//value is always 0
//s_formatSensorData
__attribute__((section (".s_getSensorValue"))) int setSensorValue(char* sensorArray);
__attribute__((section (".s_updateVoltageTelemetry"))) void updateVoltageTelemetry();

__attribute__((section (".s_checkAlarms"))) void checkAlarms(); //reimplement


__attribute__((section (".s_sensorsListMainScreen"))) void sensorsListMainScreen(); //already moved find correct lcoaotpn
__attribute__((section (".s_showNavigationPage"))) signed int showNavigationPage(char* sensorArray, int numberofitems, manuEntry* menuStruct); //already moved find correct lcoaotpn


__attribute__((section (".s_beep"))) void beep(int freq, int duration);
__attribute__((section (".s_crcCheck"))) int crcCheck(char* data, int length);
__attribute__((section (".s_getCurrentTicks"))) int getCurrentTicks();
*/



/*

*/
