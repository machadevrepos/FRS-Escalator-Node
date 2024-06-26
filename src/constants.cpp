/*
 Project Name ------  FRS
 Task --------------  Escalator Node Firmware with Esp32
 Engineer ----------- Muhammad Usman
 File --------------- Lcd Source File
 Company -----------  Machadev Pvt Limited
 */

#include "constants.h"

TaskHandle_t xHandleLoRa;

const int Baud_RATE_SERIAL = 115200;
const int Baud_RATE_LORA = 9600;

#define RH_HAVE_SERIAL

// escalator node configuration
const int MOPIN = 18;
const int M1PIN = 19;
const int AUXPIN = 5;
const int NODEID = 7;
const int RLYPIN = 21;
const int MAX_NODES = 4; // not currently used

bool activateRelayonce = false; // revisit after testing if we realy need this flag

