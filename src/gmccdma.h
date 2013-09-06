//
// GMC CDMA Defines
//
#ifndef MUDISP_GMCCDMA_H
#define MUDISP_GMCCDMA_H 


// symbol tyme
#define OFDM_SYMBOL_TIME_US 126.0 // microseconds

//
// SPATIAL CHANNEL
//

// every GTI frames a new set of positions is generated (the time machine!)
#define GEO_TIMELAPSE_INTERVAL 1000000 // frames

// every GUI frames a spatial channel update (updates positions based on mobility model)
#define GEO_UPDATE_INTERVAL 1 // frames

// geographical area of users displacement
#define GEO_AREA_CENTER_LAT 43.807635	// LAT of center area in decimal degrees
#define GEO_AREA_CENTER_LON 11.195560	// LON of center area in decimal degrees
#define GEO_AREA_RADIUS 1200			// radius of GEO area (in meters)

// refresh time of klm file
#define KML_REFRESH_TIME 4 // seconds

// initial users velocities
#define GEO_VELOCITY_MIN 0.0 // km/h
#define GEO_VELOCITY_MAX 0.0 // km/h

//
// MAIALLOCATOR
//

// error report interval ERI
// every ERI frames the cumulated bit errors per users are available to allocators
#define ERROR_REPORT_INTERVAL 50 // frames

// allocator decision frequency (equal to ERI)
#define DECISION_INTERVAL ERROR_REPORT_INTERVAL // frames

// frequency of CSI reports to allocators
//#define CHANNEL_REPORT_INTERVAL 1 // frames

// initial power level of each subcarriers
#define INIT_CARR_POWER 1.0 // linear units

// increase/decrease power step
#define POWER_STEP 0.1	// linear units

// target ber
#define MAX_ERROR_RATE 0.01 // target error rate

// max cumulated power per user
#define MAX_POWER 10.0 // max user power


//
// MBLOCKREC
// Giannakis GMC-CDMA LMSE receiver w perfect channel estimate)
//

//
// uncomment for original Giannakis setting for theta matrix. The Giannakis precoding is suitable
// for FCA subcarrier allocation only. For other subcarrier allocation methods the proposed
// Vandermonde encoding is preferred.
//
//#define GIANNAKIS_PRECODING


#endif // MUDISP_GMCCDMA_H
