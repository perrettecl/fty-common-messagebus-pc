/*  =========================================================================
    fty_common_messagebus_classes - private header file

    Copyright (C) 2014 - 2020 Eaton

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef FTY_COMMON_MESSAGEBUS_CLASSES_H_INCLUDED
#define FTY_COMMON_MESSAGEBUS_CLASSES_H_INCLUDED

//  Platform definitions, must come first
#include "platform.h"

//  External API
#include "../include/fty_common_messagebus.h"

//  Opaque class structures to allow forward references
#ifndef FTY_COMMON_MESSAGEBUS_MALAMUTE_T_DEFINED
typedef struct _fty_common_messagebus_malamute_t fty_common_messagebus_malamute_t;
#define FTY_COMMON_MESSAGEBUS_MALAMUTE_T_DEFINED
#endif
#ifndef FTY_COMMON_MESSAGEBUS_UNIX_SOCKET_CLIENT_T_DEFINED
typedef struct _fty_common_messagebus_unix_socket_client_t fty_common_messagebus_unix_socket_client_t;
#define FTY_COMMON_MESSAGEBUS_UNIX_SOCKET_CLIENT_T_DEFINED
#endif
#ifndef FTY_COMMON_MESSAGEBUS_UNIX_SOCKET_SERVER_T_DEFINED
typedef struct _fty_common_messagebus_unix_socket_server_t fty_common_messagebus_unix_socket_server_t;
#define FTY_COMMON_MESSAGEBUS_UNIX_SOCKET_SERVER_T_DEFINED
#endif
#ifndef FTY_COMMON_MESSAGEBUS_UNIX_SOCKET_HELPERS_T_DEFINED
typedef struct _fty_common_messagebus_unix_socket_helpers_t fty_common_messagebus_unix_socket_helpers_t;
#define FTY_COMMON_MESSAGEBUS_UNIX_SOCKET_HELPERS_T_DEFINED
#endif

//  Extra headers

//  Internal API

#include "fty_common_messagebus_malamute.h"
#include "fty_common_messagebus_unix_socket_client.h"
#include "fty_common_messagebus_unix_socket_server.h"
#include "fty_common_messagebus_unix_socket_helpers.h"

//  *** To avoid double-definitions, only define if building without draft ***
#ifndef FTY_COMMON_MESSAGEBUS_BUILD_DRAFT_API

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_COMMON_MESSAGEBUS_PRIVATE void
    fty_common_messagebus_malamute_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_COMMON_MESSAGEBUS_PRIVATE void
    fty_common_messagebus_unix_socket_client_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_COMMON_MESSAGEBUS_PRIVATE void
    fty_common_messagebus_unix_socket_server_test (bool verbose);

//  Self test for private classes
FTY_COMMON_MESSAGEBUS_PRIVATE void
    fty_common_messagebus_private_selftest (bool verbose, const char *subtest);

#endif // FTY_COMMON_MESSAGEBUS_BUILD_DRAFT_API

#endif
