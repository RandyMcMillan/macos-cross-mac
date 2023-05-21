//
//  CMacsTypes.h
//  CMacs
//
//  Created by Robert Widmann on 11/29/14.
//  Copyright (c) 2014 CodaFi. All rights reserved.
//

#include <objc/message.h>
#include <objc/runtime.h>
#include <CoreGraphics/CoreGraphics.h>

#ifndef CMACS_CMACSTYPES_H
#define CMACS_CMACSTYPES_H

typedef struct CMPoint {
	double x;
	double y;
} CMPoint;

typedef struct CMSize {
	double width;
	double height;
} CMSize;

typedef struct CMRect {
	CMPoint origin;
	CMSize size;
} CMRect;

typedef struct AppDel {
	Class isa;
	
	// Will be an NSWindow later.
	id window;
} AppDelegate;

enum {
	NSBorderlessWindowMask		= 0,
	NSTitledWindowMask			= 1 << 0,
	NSClosableWindowMask		= 1 << 1,
	NSMiniaturizableWindowMask	= 1 << 2,
	NSResizableWindowMask		= 1 << 3,
};

typedef id(*CMacsSimpleMessage)(id, SEL);

typedef void(*CMacsVoidMessage)(id, SEL);

typedef void(*CMacsVoidMessageVoid)(id, SEL, void *);

typedef id(*CMacsRectMessageCMRect)(id, SEL, CMRect);
typedef id(*CMacsWindowInitMessageCMRect)(id, SEL, CMRect, int, int, bool);

typedef id(*CMacsRectMessageCGRect)(id, SEL, CGRect);
typedef id(*CMacsWindowInitMessageCGRect)(id, SEL, CGRect, int, int, bool);

extern CMacsSimpleMessage cmacs_simple_msgSend;
extern CMacsVoidMessage     cmacs_void_msgSend;
extern CMacsVoidMessageVoid cmacs_void_msgSendVoid;

extern CMacsRectMessageCMRect cmacs_void_msgSendCMRect;
extern CMacsRectMessageCMRect cmacs_rect_msgSendCMRect;

extern CMacsRectMessageCGRect cmacs_void_msgSendCGRect;
extern CMacsRectMessageCGRect cmacs_rect_msgSendCGRect;

extern CMacsWindowInitMessageCMRect cmacs_window_init_msgSendCMRect;
extern CMacsWindowInitMessageCGRect cmacs_window_init_msgSendCGRect;

#endif
