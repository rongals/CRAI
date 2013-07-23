//
// GMC CDMA Defines for System
//
//
#ifndef MUDISP_GMCCDMA_H
#define MUDISP_GMCCDMA_H 
//
//
// NOTE: not used in gmc-cdma-ai
// 
#define USERS 8


//
// uncomment for verbose debug output
//
//#define SHOW_MATRIX

//
// uncomment for original Giannakis setting 
// for theta matrix. The Vandermonde matrix is suitable
// for FCA subcarrier allocation only. For other subcarrier
// allocation methods the proposed Vandermonde encoding is
// preferred.
// 
//#define GIANNAKIS_PRECODING


// symbol tyme in microseconds
#define OFDM_SYMBOL_TIME_US 126.0

// error report interval
#define ERROR_REPORT_INTERVAL 50

//
// Model timing
// The model consider a sequence of continuous time segments. Within a segment the
// geo positions are updated accordingly to the model every GEO_UPDATE_INTERVAL frames.
// At end of each segment a fresh set of positions is drawn.
//

// every x OFDM symbols a spatial channel update
#define GEO_UPDATE_INTERVAL 10

// every x OFDM symbols a new set of positions is generated
#define GEO_TIMELAPSE_INTERVAL 1000

#endif // MUDISP_GMCCDMA_H
