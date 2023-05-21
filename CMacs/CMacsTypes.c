//
//  CMacsTypes.c
//  CMacs
//
//  Created by Robert Widmann on 11/29/14.
//  Copyright (c) 2014 CodaFi. All rights reserved.
//

#include "CMacsTypes.h"

CMacsSimpleMessage cmacs_simple_msgSend         = (CMacsSimpleMessage)objc_msgSend;
CMacsVoidMessage cmacs_void_msgSend             = (CMacsVoidMessage)objc_msgSend;
CMacsVoidMessageVoid cmacs_void_msgSendVoid     = (CMacsVoidMessageVoid)objc_msgSend;

CMacsRectMessageCMRect cmacs_void_msgSendCMRect = (CMacsRectMessageCMRect)objc_msgSend;
CMacsRectMessageCMRect cmacs_rect_msgSendCMRect = (CMacsRectMessageCMRect)objc_msgSend;

CMacsRectMessageCGRect cmacs_void_msgSendCGRect = (CMacsRectMessageCGRect)objc_msgSend;
CMacsRectMessageCGRect cmacs_rect_msgSendCGRect = (CMacsRectMessageCGRect)objc_msgSend;


CMacsWindowInitMessageCMRect cmacs_window_init_msgSendCMRect = (CMacsWindowInitMessageCMRect)objc_msgSend;
CMacsWindowInitMessageCGRect cmacs_window_init_msgSendCGRect = (CMacsWindowInitMessageCGRect)objc_msgSend;
