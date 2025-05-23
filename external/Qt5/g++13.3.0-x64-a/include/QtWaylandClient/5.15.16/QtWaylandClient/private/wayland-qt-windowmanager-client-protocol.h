/* Generated by wayland-scanner 1.22.0 */

#ifndef QT_WINDOWMANAGER_CLIENT_PROTOCOL_H
#define QT_WINDOWMANAGER_CLIENT_PROTOCOL_H

#include <stdint.h>
#include <stddef.h>
#include "wayland-client-core.h"

#ifdef  __cplusplus
extern "C" {
#endif

/**
 * @page page_qt_windowmanager The qt_windowmanager protocol
 * @section page_ifaces_qt_windowmanager Interfaces
 * - @subpage page_iface_qt_windowmanager - 
 * @section page_copyright_qt_windowmanager Copyright
 * <pre>
 *
 * Copyright (C) 2015 The Qt Company Ltd.
 * Contact: http://www.qt.io/licensing/
 *
 * This file is part of the plugins of the Qt Toolkit.
 *
 * $QT_BEGIN_LICENSE:BSD$
 * You may use this file under the terms of the BSD license as follows:
 *
 * "Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 * * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * * Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in
 * the documentation and/or other materials provided with the
 * distribution.
 * * Neither the name of The Qt Company Ltd nor the names of its
 * contributors may be used to endorse or promote products derived
 * from this software without specific prior written permission.
 *
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
 *
 * $QT_END_LICENSE$
 * </pre>
 */
struct qt_windowmanager;

#ifndef QT_WINDOWMANAGER_INTERFACE
#define QT_WINDOWMANAGER_INTERFACE
/**
 * @page page_iface_qt_windowmanager qt_windowmanager
 * @section page_iface_qt_windowmanager_api API
 * See @ref iface_qt_windowmanager.
 */
/**
 * @defgroup iface_qt_windowmanager The qt_windowmanager interface
 */
extern const struct wl_interface qt_windowmanager_interface;
#endif

/**
 * @ingroup iface_qt_windowmanager
 * @struct qt_windowmanager_listener
 */
struct qt_windowmanager_listener {
	/**
	 */
	void (*hints)(void *data,
		      struct qt_windowmanager *qt_windowmanager,
		      int32_t show_is_fullscreen);
	/**
	 */
	void (*quit)(void *data,
		     struct qt_windowmanager *qt_windowmanager);
};

/**
 * @ingroup iface_qt_windowmanager
 */
static inline int
qt_windowmanager_add_listener(struct qt_windowmanager *qt_windowmanager,
			      const struct qt_windowmanager_listener *listener, void *data)
{
	return wl_proxy_add_listener((struct wl_proxy *) qt_windowmanager,
				     (void (**)(void)) listener, data);
}

#define QT_WINDOWMANAGER_OPEN_URL 0

/**
 * @ingroup iface_qt_windowmanager
 */
#define QT_WINDOWMANAGER_HINTS_SINCE_VERSION 1
/**
 * @ingroup iface_qt_windowmanager
 */
#define QT_WINDOWMANAGER_QUIT_SINCE_VERSION 1

/**
 * @ingroup iface_qt_windowmanager
 */
#define QT_WINDOWMANAGER_OPEN_URL_SINCE_VERSION 1

/** @ingroup iface_qt_windowmanager */
static inline void
qt_windowmanager_set_user_data(struct qt_windowmanager *qt_windowmanager, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) qt_windowmanager, user_data);
}

/** @ingroup iface_qt_windowmanager */
static inline void *
qt_windowmanager_get_user_data(struct qt_windowmanager *qt_windowmanager)
{
	return wl_proxy_get_user_data((struct wl_proxy *) qt_windowmanager);
}

static inline uint32_t
qt_windowmanager_get_version(struct qt_windowmanager *qt_windowmanager)
{
	return wl_proxy_get_version((struct wl_proxy *) qt_windowmanager);
}

/** @ingroup iface_qt_windowmanager */
static inline void
qt_windowmanager_destroy(struct qt_windowmanager *qt_windowmanager)
{
	wl_proxy_destroy((struct wl_proxy *) qt_windowmanager);
}

/**
 * @ingroup iface_qt_windowmanager
 *
 * If remaining is not 0 this is a multipart request, and
 * the server must concatenate subsequent requst urls to and
 * including a request where remaining is set to 0, before
 * it can handle the url.
 */
static inline void
qt_windowmanager_open_url(struct qt_windowmanager *qt_windowmanager, uint32_t remaining, const char *url)
{
	wl_proxy_marshal_flags((struct wl_proxy *) qt_windowmanager,
			 QT_WINDOWMANAGER_OPEN_URL, NULL, wl_proxy_get_version((struct wl_proxy *) qt_windowmanager), 0, remaining, url);
}

#ifdef  __cplusplus
}
#endif

#endif
