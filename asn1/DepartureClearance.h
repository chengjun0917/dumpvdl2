/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_DepartureClearance_H_
#define	_DepartureClearance_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AircraftFlightIdentification.h"
#include "Position.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FlightInformation;
struct FurtherInstructions;

/* DepartureClearance */
typedef struct DepartureClearance {
	AircraftFlightIdentification_t	 aircraftFlightIdentification;
	Position_t	 clearanceLimit;
	struct FlightInformation	*flightInformation	/* OPTIONAL */;
	struct FurtherInstructions	*furtherInstructions	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DepartureClearance_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DepartureClearance;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FlightInformation.h"
#include "FurtherInstructions.h"

#endif	/* _DepartureClearance_H_ */
#include <asn_internal.h>