/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "./asn1c/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_Hysteresis_H_
#define	_Hysteresis_H_


#include <liblte/rrc/asn/asn_application.h>

/* Including external dependencies */
#include <liblte/rrc/asn/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Hysteresis */
typedef long	 Hysteresis_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Hysteresis;
asn_struct_free_f Hysteresis_free;
asn_struct_print_f Hysteresis_print;
asn_constr_check_f Hysteresis_constraint;
ber_type_decoder_f Hysteresis_decode_ber;
der_type_encoder_f Hysteresis_encode_der;
xer_type_decoder_f Hysteresis_decode_xer;
xer_type_encoder_f Hysteresis_encode_xer;
per_type_decoder_f Hysteresis_decode_uper;
per_type_encoder_f Hysteresis_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _Hysteresis_H_ */
#include <liblte/rrc/asn/asn_internal.h>