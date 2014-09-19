#ifndef	_eapolcfg_auth_user_
#define	_eapolcfg_auth_user_

/* Module eapolcfg_auth */

#include <string.h>
#include <mach/ndr.h>
#include <mach/boolean.h>
#include <mach/kern_return.h>
#include <mach/notify.h>
#include <mach/mach_types.h>
#include <mach/message.h>
#include <mach/mig_errors.h>
#include <mach/port.h>

#ifdef AUTOTEST
#ifndef FUNCTION_PTR_T
#define FUNCTION_PTR_T
typedef void (*function_ptr_t)(mach_port_t, char *, mach_msg_type_number_t);
typedef struct {
        char            *name;
        function_ptr_t  function;
} function_table_entry;
typedef function_table_entry   *function_table_t;
#endif /* FUNCTION_PTR_T */
#endif /* AUTOTEST */

#ifndef	eapolcfg_auth_MSG_COUNT
#define	eapolcfg_auth_MSG_COUNT	4
#endif	/* eapolcfg_auth_MSG_COUNT */

#include <mach/std_types.h>
#include <mach/mig.h>
#include <mach/mig.h>
#include <mach/mach_types.h>
#include "eapolcfg_auth_types.h"

#ifdef __BeforeMigUserHeader
__BeforeMigUserHeader
#endif /* __BeforeMigUserHeader */

#include <sys/cdefs.h>
__BEGIN_DECLS


/* Routine eapolclientitemid_set_identity */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t eapolclientitemid_set_identity
(
	mach_port_t server,
	OOBData_t auth_data,
	mach_msg_type_number_t auth_dataCnt,
	xmlData_t itemID_data,
	mach_msg_type_number_t itemID_dataCnt,
	OOBData_t id_handle,
	mach_msg_type_number_t id_handleCnt,
	int *result
);

/* Routine eapolclientitemid_set_password */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t eapolclientitemid_set_password
(
	mach_port_t server,
	OOBData_t auth_data,
	mach_msg_type_number_t auth_dataCnt,
	xmlData_t itemID_data,
	mach_msg_type_number_t itemID_dataCnt,
	uint32_t flags,
	OOBData_t name,
	mach_msg_type_number_t nameCnt,
	OOBData_t password,
	mach_msg_type_number_t passwordCnt,
	int *result
);

/* Routine eapolclientitemid_remove_password */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t eapolclientitemid_remove_password
(
	mach_port_t server,
	OOBData_t auth_data,
	mach_msg_type_number_t auth_dataCnt,
	xmlData_t itemID_data,
	mach_msg_type_number_t itemID_dataCnt,
	int *result
);

/* Routine eapolclientitemid_check_password */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t eapolclientitemid_check_password
(
	mach_port_t server,
	OOBData_t auth_data,
	mach_msg_type_number_t auth_dataCnt,
	xmlData_t itemID_data,
	mach_msg_type_number_t itemID_dataCnt,
	OOBDataOut_t *name,
	mach_msg_type_number_t *nameCnt,
	boolean_t *password_set,
	int *result
);

__END_DECLS

/********************** Caution **************************/
/* The following data types should be used to calculate  */
/* maximum message sizes only. The actual message may be */
/* smaller, and the position of the arguments within the */
/* message layout may vary from what is presented here.  */
/* For example, if any of the arguments are variable-    */
/* sized, and less than the maximum is sent, the data    */
/* will be packed tight in the actual message to reduce  */
/* the presence of holes.                                */
/********************** Caution **************************/

/* typedefs for all requests */

#ifndef __Request__eapolcfg_auth_subsystem__defined
#define __Request__eapolcfg_auth_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t auth_data;
		mach_msg_ool_descriptor_t itemID_data;
		mach_msg_ool_descriptor_t id_handle;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t auth_dataCnt;
		mach_msg_type_number_t itemID_dataCnt;
		mach_msg_type_number_t id_handleCnt;
	} __Request__eapolclientitemid_set_identity_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t auth_data;
		mach_msg_ool_descriptor_t itemID_data;
		mach_msg_ool_descriptor_t name;
		mach_msg_ool_descriptor_t password;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t auth_dataCnt;
		mach_msg_type_number_t itemID_dataCnt;
		uint32_t flags;
		mach_msg_type_number_t nameCnt;
		mach_msg_type_number_t passwordCnt;
	} __Request__eapolclientitemid_set_password_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t auth_data;
		mach_msg_ool_descriptor_t itemID_data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t auth_dataCnt;
		mach_msg_type_number_t itemID_dataCnt;
	} __Request__eapolclientitemid_remove_password_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t auth_data;
		mach_msg_ool_descriptor_t itemID_data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t auth_dataCnt;
		mach_msg_type_number_t itemID_dataCnt;
	} __Request__eapolclientitemid_check_password_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Request__eapolcfg_auth_subsystem__defined */

/* union of all requests */

#ifndef __RequestUnion__eapolcfg_auth_subsystem__defined
#define __RequestUnion__eapolcfg_auth_subsystem__defined
union __RequestUnion__eapolcfg_auth_subsystem {
	__Request__eapolclientitemid_set_identity_t Request_eapolclientitemid_set_identity;
	__Request__eapolclientitemid_set_password_t Request_eapolclientitemid_set_password;
	__Request__eapolclientitemid_remove_password_t Request_eapolclientitemid_remove_password;
	__Request__eapolclientitemid_check_password_t Request_eapolclientitemid_check_password;
};
#endif /* !__RequestUnion__eapolcfg_auth_subsystem__defined */
/* typedefs for all replies */

#ifndef __Reply__eapolcfg_auth_subsystem__defined
#define __Reply__eapolcfg_auth_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int result;
	} __Reply__eapolclientitemid_set_identity_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int result;
	} __Reply__eapolclientitemid_set_password_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int result;
	} __Reply__eapolclientitemid_remove_password_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t name;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t nameCnt;
		boolean_t password_set;
		int result;
	} __Reply__eapolclientitemid_check_password_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Reply__eapolcfg_auth_subsystem__defined */

/* union of all replies */

#ifndef __ReplyUnion__eapolcfg_auth_subsystem__defined
#define __ReplyUnion__eapolcfg_auth_subsystem__defined
union __ReplyUnion__eapolcfg_auth_subsystem {
	__Reply__eapolclientitemid_set_identity_t Reply_eapolclientitemid_set_identity;
	__Reply__eapolclientitemid_set_password_t Reply_eapolclientitemid_set_password;
	__Reply__eapolclientitemid_remove_password_t Reply_eapolclientitemid_remove_password;
	__Reply__eapolclientitemid_check_password_t Reply_eapolclientitemid_check_password;
};
#endif /* !__RequestUnion__eapolcfg_auth_subsystem__defined */

#ifndef subsystem_to_name_map_eapolcfg_auth
#define subsystem_to_name_map_eapolcfg_auth \
    { "eapolclientitemid_set_identity", 22000 },\
    { "eapolclientitemid_set_password", 22001 },\
    { "eapolclientitemid_remove_password", 22002 },\
    { "eapolclientitemid_check_password", 22003 }
#endif

#ifdef __AfterMigUserHeader
__AfterMigUserHeader
#endif /* __AfterMigUserHeader */

#endif	 /* _eapolcfg_auth_user_ */
