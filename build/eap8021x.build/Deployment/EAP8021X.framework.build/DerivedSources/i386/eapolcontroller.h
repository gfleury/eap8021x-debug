#ifndef	_eapolcontroller_user_
#define	_eapolcontroller_user_

/* Module eapolcontroller */

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

#ifndef	eapolcontroller_MSG_COUNT
#define	eapolcontroller_MSG_COUNT	28
#endif	/* eapolcontroller_MSG_COUNT */

#include <mach/std_types.h>
#include <mach/mig.h>
#include <mach/mig.h>
#include <mach/mach_types.h>
#include "eapolcontroller_types.h"

#ifdef __BeforeMigUserHeader
__BeforeMigUserHeader
#endif /* __BeforeMigUserHeader */

#include <sys/cdefs.h>
__BEGIN_DECLS


/* Routine eapolcontroller_get_state */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t eapolcontroller_get_state
(
	mach_port_t server,
	if_name_t if_name,
	int *state,
	int *result
);

/* Routine eapolcontroller_start */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t eapolcontroller_start
(
	mach_port_t server,
	if_name_t if_name,
	xmlData_t config_data,
	mach_msg_type_number_t config_dataCnt,
	bootstrap_t bootstrap,
	mach_port_t au_session,
	int *result
);

/* Routine eapolcontroller_stop */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t eapolcontroller_stop
(
	mach_port_t server,
	if_name_t if_name,
	int *result
);

/* Routine eapolcontroller_update */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t eapolcontroller_update
(
	mach_port_t server,
	if_name_t if_name,
	xmlData_t config_data,
	mach_msg_type_number_t config_dataCnt,
	int *result
);

/* Routine eapolcontroller_retry */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t eapolcontroller_retry
(
	mach_port_t server,
	if_name_t if_name,
	int *result
);

/* Routine eapolcontroller_copy_status */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t eapolcontroller_copy_status
(
	mach_port_t server,
	if_name_t if_name,
	xmlDataOut_t *status_data,
	mach_msg_type_number_t *status_dataCnt,
	int *state,
	int *result
);

/* Routine eapolcontroller_provide_user_input */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t eapolcontroller_provide_user_input
(
	mach_port_t server,
	if_name_t if_name,
	xmlData_t user_input,
	mach_msg_type_number_t user_inputCnt,
	int *result
);

/* Routine eapolcontroller_start_system */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t eapolcontroller_start_system
(
	mach_port_t server,
	if_name_t if_name,
	xmlData_t options_data,
	mach_msg_type_number_t options_dataCnt,
	int *result
);

/* Routine eapolcontroller_copy_loginwindow_config */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t eapolcontroller_copy_loginwindow_config
(
	mach_port_t server,
	if_name_t if_name,
	xmlDataOut_t *config,
	mach_msg_type_number_t *configCnt,
	int *result
);

/* Routine eapolcontroller_client_attach */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t eapolcontroller_client_attach
(
	mach_port_t server,
	task_t task,
	if_name_t if_name,
	mach_port_t port,
	mach_port_t *session,
	xmlDataOut_t *control_data,
	mach_msg_type_number_t *control_dataCnt,
	bootstrap_t *bootstrap,
	mach_port_t *au_session,
	int *result
);

/* Routine eapolcontroller_client_detach */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t eapolcontroller_client_detach
(
	mach_port_t server,
	int *result
);

/* Routine eapolcontroller_client_getconfig */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t eapolcontroller_client_getconfig
(
	mach_port_t server,
	xmlDataOut_t *control_data,
	mach_msg_type_number_t *control_dataCnt,
	int *result
);

/* Routine eapolcontroller_client_report_status */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t eapolcontroller_client_report_status
(
	mach_port_t server,
	xmlData_t status_data,
	mach_msg_type_number_t status_dataCnt,
	int *result
);

/* Routine eapolcontroller_client_force_renew */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t eapolcontroller_client_force_renew
(
	mach_port_t server,
	int *result
);

/* Routine eapolcontroller_client_user_cancelled */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t eapolcontroller_client_user_cancelled
(
	mach_port_t server,
	int *result
);

/* Routine eapolcontroller_copy_autodetect_info */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t eapolcontroller_copy_autodetect_info
(
	mach_port_t server,
	xmlDataOut_t *info,
	mach_msg_type_number_t *infoCnt,
	int *result
);

/* Routine eapolcontroller_did_user_cancel */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t eapolcontroller_did_user_cancel
(
	mach_port_t server,
	if_name_t if_name,
	boolean_t *user_cancelled
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

#ifndef __Request__eapolcontroller_subsystem__defined
#define __Request__eapolcontroller_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		if_name_t if_name;
	} __Request__eapolcontroller_get_state_t;
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
		mach_msg_ool_descriptor_t config_data;
		mach_msg_port_descriptor_t bootstrap;
		mach_msg_port_descriptor_t au_session;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		if_name_t if_name;
		mach_msg_type_number_t config_dataCnt;
	} __Request__eapolcontroller_start_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		if_name_t if_name;
	} __Request__eapolcontroller_stop_t;
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
		mach_msg_ool_descriptor_t config_data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		if_name_t if_name;
		mach_msg_type_number_t config_dataCnt;
	} __Request__eapolcontroller_update_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		if_name_t if_name;
	} __Request__eapolcontroller_retry_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		if_name_t if_name;
	} __Request__eapolcontroller_copy_status_t;
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
		mach_msg_ool_descriptor_t user_input;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		if_name_t if_name;
		mach_msg_type_number_t user_inputCnt;
	} __Request__eapolcontroller_provide_user_input_t;
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
		mach_msg_ool_descriptor_t options_data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		if_name_t if_name;
		mach_msg_type_number_t options_dataCnt;
	} __Request__eapolcontroller_start_system_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		if_name_t if_name;
	} __Request__eapolcontroller_copy_loginwindow_config_t;
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
		mach_msg_port_descriptor_t task;
		mach_msg_port_descriptor_t port;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		if_name_t if_name;
	} __Request__eapolcontroller_client_attach_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__eapolcontroller_client_detach_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__eapolcontroller_client_getconfig_t;
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
		mach_msg_ool_descriptor_t status_data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t status_dataCnt;
	} __Request__eapolcontroller_client_report_status_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__eapolcontroller_client_force_renew_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__eapolcontroller_client_user_cancelled_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
	} __Request__eapolcontroller_copy_autodetect_info_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		if_name_t if_name;
	} __Request__eapolcontroller_did_user_cancel_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Request__eapolcontroller_subsystem__defined */

/* union of all requests */

#ifndef __RequestUnion__eapolcontroller_subsystem__defined
#define __RequestUnion__eapolcontroller_subsystem__defined
union __RequestUnion__eapolcontroller_subsystem {
	__Request__eapolcontroller_get_state_t Request_eapolcontroller_get_state;
	__Request__eapolcontroller_start_t Request_eapolcontroller_start;
	__Request__eapolcontroller_stop_t Request_eapolcontroller_stop;
	__Request__eapolcontroller_update_t Request_eapolcontroller_update;
	__Request__eapolcontroller_retry_t Request_eapolcontroller_retry;
	__Request__eapolcontroller_copy_status_t Request_eapolcontroller_copy_status;
	__Request__eapolcontroller_provide_user_input_t Request_eapolcontroller_provide_user_input;
	__Request__eapolcontroller_start_system_t Request_eapolcontroller_start_system;
	__Request__eapolcontroller_copy_loginwindow_config_t Request_eapolcontroller_copy_loginwindow_config;
	__Request__eapolcontroller_client_attach_t Request_eapolcontroller_client_attach;
	__Request__eapolcontroller_client_detach_t Request_eapolcontroller_client_detach;
	__Request__eapolcontroller_client_getconfig_t Request_eapolcontroller_client_getconfig;
	__Request__eapolcontroller_client_report_status_t Request_eapolcontroller_client_report_status;
	__Request__eapolcontroller_client_force_renew_t Request_eapolcontroller_client_force_renew;
	__Request__eapolcontroller_client_user_cancelled_t Request_eapolcontroller_client_user_cancelled;
	__Request__eapolcontroller_copy_autodetect_info_t Request_eapolcontroller_copy_autodetect_info;
	__Request__eapolcontroller_did_user_cancel_t Request_eapolcontroller_did_user_cancel;
};
#endif /* !__RequestUnion__eapolcontroller_subsystem__defined */
/* typedefs for all replies */

#ifndef __Reply__eapolcontroller_subsystem__defined
#define __Reply__eapolcontroller_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int state;
		int result;
	} __Reply__eapolcontroller_get_state_t;
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
	} __Reply__eapolcontroller_start_t;
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
	} __Reply__eapolcontroller_stop_t;
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
	} __Reply__eapolcontroller_update_t;
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
	} __Reply__eapolcontroller_retry_t;
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
		mach_msg_ool_descriptor_t status_data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t status_dataCnt;
		int state;
		int result;
	} __Reply__eapolcontroller_copy_status_t;
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
	} __Reply__eapolcontroller_provide_user_input_t;
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
	} __Reply__eapolcontroller_start_system_t;
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
		mach_msg_ool_descriptor_t config;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t configCnt;
		int result;
	} __Reply__eapolcontroller_copy_loginwindow_config_t;
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
		mach_msg_port_descriptor_t session;
		mach_msg_ool_descriptor_t control_data;
		mach_msg_port_descriptor_t bootstrap;
		mach_msg_port_descriptor_t au_session;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t control_dataCnt;
		int result;
	} __Reply__eapolcontroller_client_attach_t;
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
	} __Reply__eapolcontroller_client_detach_t;
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
		mach_msg_ool_descriptor_t control_data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t control_dataCnt;
		int result;
	} __Reply__eapolcontroller_client_getconfig_t;
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
	} __Reply__eapolcontroller_client_report_status_t;
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
	} __Reply__eapolcontroller_client_force_renew_t;
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
	} __Reply__eapolcontroller_client_user_cancelled_t;
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
		mach_msg_ool_descriptor_t info;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t infoCnt;
		int result;
	} __Reply__eapolcontroller_copy_autodetect_info_t;
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
		boolean_t user_cancelled;
	} __Reply__eapolcontroller_did_user_cancel_t;
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Reply__eapolcontroller_subsystem__defined */

/* union of all replies */

#ifndef __ReplyUnion__eapolcontroller_subsystem__defined
#define __ReplyUnion__eapolcontroller_subsystem__defined
union __ReplyUnion__eapolcontroller_subsystem {
	__Reply__eapolcontroller_get_state_t Reply_eapolcontroller_get_state;
	__Reply__eapolcontroller_start_t Reply_eapolcontroller_start;
	__Reply__eapolcontroller_stop_t Reply_eapolcontroller_stop;
	__Reply__eapolcontroller_update_t Reply_eapolcontroller_update;
	__Reply__eapolcontroller_retry_t Reply_eapolcontroller_retry;
	__Reply__eapolcontroller_copy_status_t Reply_eapolcontroller_copy_status;
	__Reply__eapolcontroller_provide_user_input_t Reply_eapolcontroller_provide_user_input;
	__Reply__eapolcontroller_start_system_t Reply_eapolcontroller_start_system;
	__Reply__eapolcontroller_copy_loginwindow_config_t Reply_eapolcontroller_copy_loginwindow_config;
	__Reply__eapolcontroller_client_attach_t Reply_eapolcontroller_client_attach;
	__Reply__eapolcontroller_client_detach_t Reply_eapolcontroller_client_detach;
	__Reply__eapolcontroller_client_getconfig_t Reply_eapolcontroller_client_getconfig;
	__Reply__eapolcontroller_client_report_status_t Reply_eapolcontroller_client_report_status;
	__Reply__eapolcontroller_client_force_renew_t Reply_eapolcontroller_client_force_renew;
	__Reply__eapolcontroller_client_user_cancelled_t Reply_eapolcontroller_client_user_cancelled;
	__Reply__eapolcontroller_copy_autodetect_info_t Reply_eapolcontroller_copy_autodetect_info;
	__Reply__eapolcontroller_did_user_cancel_t Reply_eapolcontroller_did_user_cancel;
};
#endif /* !__RequestUnion__eapolcontroller_subsystem__defined */

#ifndef subsystem_to_name_map_eapolcontroller
#define subsystem_to_name_map_eapolcontroller \
    { "eapolcontroller_get_state", 22000 },\
    { "eapolcontroller_start", 22001 },\
    { "eapolcontroller_stop", 22002 },\
    { "eapolcontroller_update", 22003 },\
    { "eapolcontroller_retry", 22004 },\
    { "eapolcontroller_copy_status", 22005 },\
    { "eapolcontroller_provide_user_input", 22007 },\
    { "eapolcontroller_start_system", 22008 },\
    { "eapolcontroller_copy_loginwindow_config", 22009 },\
    { "eapolcontroller_client_attach", 22010 },\
    { "eapolcontroller_client_detach", 22011 },\
    { "eapolcontroller_client_getconfig", 22012 },\
    { "eapolcontroller_client_report_status", 22013 },\
    { "eapolcontroller_client_force_renew", 22014 },\
    { "eapolcontroller_client_user_cancelled", 22015 },\
    { "eapolcontroller_copy_autodetect_info", 22026 },\
    { "eapolcontroller_did_user_cancel", 22027 }
#endif

#ifdef __AfterMigUserHeader
__AfterMigUserHeader
#endif /* __AfterMigUserHeader */

#endif	 /* _eapolcontroller_user_ */
