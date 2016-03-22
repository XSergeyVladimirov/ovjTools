/*
 * @(#)transport_common_user.h    generated by: makeheader    Mon Dec  3 23:08:03 2007
 *
 *		built from:	common_user.ifc
 */

#ifndef transport_common_user_h
#define transport_common_user_h


#ifndef osapi_type_h
#include "osapi/osapi_type.h"
#endif

#ifndef reda_buffer_h
#include "reda/reda_buffer.h"
#endif

#ifndef transport_dll_h
#include "transport/transport_dll.h"
#endif

#ifdef __cplusplus
    extern "C" {
#endif

typedef RTI_INT32 NDDS_Transport_ClassId_t;


#define NDDS_TRANSPORT_CLASSID_INVALID (-1)


#define NDDS_TRANSPORT_CLASSID_ANY (0)


#define NDDS_TRANSPORT_CLASSID_UDPv4        (1)  


#define NDDS_TRANSPORT_CLASSID_SHMEM        (2)  


#define NDDS_TRANSPORT_CLASSID_INTRA        (3)  


#define NDDS_TRANSPORT_CLASSID_UDPv6        (5)  


#define NDDS_TRANSPORT_CLASSID_DTLS         (6)


#define NDDS_TRANSPORT_CLASSID_WAN        (7)  


#define NDDS_TRANSPORT_CLASSID_RESERVED_RANGE  (1000)

typedef struct {
    /*e network-byte ordered (i.e., bit 0 is the most
      significant bit and bit 128 is the least significant bit).
    */
    unsigned char network_ordered_value[16];
} NDDS_Transport_Address_t;

extern NDDS_Transport_DllExport 
RTI_INT32 NDDS_Transport_Address_to_string(
    const NDDS_Transport_Address_t *self,
    char                           *buffer_inout,
    RTI_INT32                       buffer_length_in);

extern NDDS_Transport_DllExport 
RTI_INT32 NDDS_Transport_Address_from_string(
    NDDS_Transport_Address_t *address_out,
    const char               *address_in);

extern NDDS_Transport_DllExport 
void NDDS_Transport_Address_print(
    const NDDS_Transport_Address_t *address_in,
    const char                     *desc_in,
    RTI_INT32                       indent_in);

extern NDDS_Transport_DllExport 
void NDDS_Transport_Address_copy(
    NDDS_Transport_Address_t       *dst_out,
    const NDDS_Transport_Address_t *src_in);

extern NDDS_Transport_DllExport
RTI_INT32 NDDS_Transport_Address_is_equal(
    const NDDS_Transport_Address_t *l_in, 
    const NDDS_Transport_Address_t *r_in);

extern NDDS_Transport_DllExport
RTI_INT32 NDDS_Transport_Address_bits_are_equal(
    const NDDS_Transport_Address_t *l_in, 
    const NDDS_Transport_Address_t *r_in,
    RTI_INT32 transport_address_bit_count_in);

extern NDDS_Transport_DllExport
RTI_INT32 NDDS_Transport_Address_compare(
    const NDDS_Transport_Address_t *l_in, 
    const NDDS_Transport_Address_t *r_in);

extern NDDS_Transport_DllExport
RTI_INT32 NDDS_Transport_Address_is_ipv4(
    const NDDS_Transport_Address_t *address_in);

extern NDDS_Transport_DllExport
RTI_INT32 NDDS_Transport_Address_is_multicast(
    const NDDS_Transport_Address_t *address_in);

extern NDDS_Transport_DllExport void NDDS_Transport_Address_from_ipv4_host_byte(
    NDDS_Transport_Address_t* me,
    RTI_UINT32 ipv4AddressInHostOrderIn);

extern NDDS_Transport_DllExport RTI_UINT32
NDDS_Transport_Address_to_ipv4_host_byte(const NDDS_Transport_Address_t* me);


#define NDDS_TRANSPORT_ADDRESS_INVALID  \
                {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}} 


#define NDDS_TRANSPORT_ADDRESS_STRING_BUFFER_SIZE     (40)


#ifdef __cplusplus
    }	/* extern "C" */
#endif

#endif /* transport_common_user_h */