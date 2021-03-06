/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMCPDLCMessageSetVersion1"
 * 	found in "atn-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_PositionUnitNameFrequency_H_
#define	_PositionUnitNameFrequency_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Position.h"
#include "UnitName.h"
#include "Frequency.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PositionUnitNameFrequency */
typedef struct PositionUnitNameFrequency {
	Position_t	 position;
	UnitName_t	 unitname;
	Frequency_t	 frequency;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PositionUnitNameFrequency_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PositionUnitNameFrequency;

#ifdef __cplusplus
}
#endif

#endif	/* _PositionUnitNameFrequency_H_ */
#include <asn_internal.h>
