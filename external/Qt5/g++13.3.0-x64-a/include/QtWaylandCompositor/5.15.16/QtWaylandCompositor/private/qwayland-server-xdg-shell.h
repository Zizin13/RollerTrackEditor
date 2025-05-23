// This file was generated by qtwaylandscanner
// source file is /home/steve/BuildQt/qt-everywhere-src-5.15.16/qtwayland/src/3rdparty/protocol/xdg-shell.xml

#ifndef QT_WAYLAND_SERVER_XDG_SHELL
#define QT_WAYLAND_SERVER_XDG_SHELL

#include "wayland-server-core.h"
#include <QtWaylandCompositor/private/wayland-xdg-shell-server-protocol.h>
#include <QByteArray>
#include <QMultiMap>
#include <QString>

#ifndef WAYLAND_VERSION_CHECK
#define WAYLAND_VERSION_CHECK(major, minor, micro) \
    ((WAYLAND_VERSION_MAJOR > (major)) || \
    (WAYLAND_VERSION_MAJOR == (major) && WAYLAND_VERSION_MINOR > (minor)) || \
    (WAYLAND_VERSION_MAJOR == (major) && WAYLAND_VERSION_MINOR == (minor) && WAYLAND_VERSION_MICRO >= (micro)))
#endif

QT_BEGIN_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_GCC("-Wmissing-field-initializers")
QT_WARNING_DISABLE_CLANG("-Wmissing-field-initializers")

#if !defined(Q_WAYLAND_SERVER_XDG_SHELL_EXPORT)
#  if defined(QT_SHARED)
#    define Q_WAYLAND_SERVER_XDG_SHELL_EXPORT Q_DECL_EXPORT
#  else
#    define Q_WAYLAND_SERVER_XDG_SHELL_EXPORT
#  endif
#endif

namespace QtWaylandServer {
    class Q_WAYLAND_SERVER_XDG_SHELL_EXPORT xdg_wm_base
    {
    public:
        xdg_wm_base(struct ::wl_client *client, int id, int version);
        xdg_wm_base(struct ::wl_display *display, int version);
        xdg_wm_base(struct ::wl_resource *resource);
        xdg_wm_base();

        virtual ~xdg_wm_base();

        class Resource
        {
        public:
            Resource() : xdg_wm_base_object(nullptr), handle(nullptr) {}
            virtual ~Resource() {}

            xdg_wm_base *xdg_wm_base_object;
            xdg_wm_base *object() { return xdg_wm_base_object; } 
            struct ::wl_resource *handle;

            struct ::wl_client *client() const { return wl_resource_get_client(handle); }
            int version() const { return wl_resource_get_version(handle); }

            static Resource *fromResource(struct ::wl_resource *resource);
        };

        void init(struct ::wl_client *client, int id, int version);
        void init(struct ::wl_display *display, int version);
        void init(struct ::wl_resource *resource);

        Resource *add(struct ::wl_client *client, int version);
        Resource *add(struct ::wl_client *client, int id, int version);
        Resource *add(struct wl_list *resource_list, struct ::wl_client *client, int id, int version);

        Resource *resource() { return m_resource; }
        const Resource *resource() const { return m_resource; }

        QMultiMap<struct ::wl_client*, Resource*> resourceMap() { return m_resource_map; }
        const QMultiMap<struct ::wl_client*, Resource*> resourceMap() const { return m_resource_map; }

        bool isGlobal() const { return m_global != nullptr; }
        bool isResource() const { return m_resource != nullptr; }

        static const struct ::wl_interface *interface();
        static QByteArray interfaceName() { return interface()->name; }
        static int interfaceVersion() { return interface()->version; }


        enum error {
            error_role = 0, // given wl_surface has another role
            error_defunct_surfaces = 1, // xdg_wm_base was destroyed before children
            error_not_the_topmost_popup = 2, // the client tried to map or destroy a non-topmost popup
            error_invalid_popup_parent = 3, // the client specified an invalid popup parent surface
            error_invalid_surface_state = 4, // the client provided an invalid surface state
            error_invalid_positioner = 5, // the client provided an invalid positioner
        };

        void send_ping(uint32_t serial);
        void send_ping(struct ::wl_resource *resource, uint32_t serial);

    protected:
        virtual Resource *xdg_wm_base_allocate();

        virtual void xdg_wm_base_bind_resource(Resource *resource);
        virtual void xdg_wm_base_destroy_resource(Resource *resource);

        virtual void xdg_wm_base_destroy(Resource *resource);
        virtual void xdg_wm_base_create_positioner(Resource *resource, uint32_t id);
        virtual void xdg_wm_base_get_xdg_surface(Resource *resource, uint32_t id, struct ::wl_resource *surface);
        virtual void xdg_wm_base_pong(Resource *resource, uint32_t serial);

    private:
        static void bind_func(struct ::wl_client *client, void *data, uint32_t version, uint32_t id);
        static void destroy_func(struct ::wl_resource *client_resource);
        static void display_destroy_func(struct ::wl_listener *listener, void *data);

        Resource *bind(struct ::wl_client *client, uint32_t id, int version);
        Resource *bind(struct ::wl_resource *handle);

        static const struct ::xdg_wm_base_interface m_xdg_wm_base_interface;

        static void handle_destroy(
            ::wl_client *client,
            struct wl_resource *resource);
        static void handle_create_positioner(
            ::wl_client *client,
            struct wl_resource *resource,
            uint32_t id);
        static void handle_get_xdg_surface(
            ::wl_client *client,
            struct wl_resource *resource,
            uint32_t id,
            struct ::wl_resource *surface);
        static void handle_pong(
            ::wl_client *client,
            struct wl_resource *resource,
            uint32_t serial);

        QMultiMap<struct ::wl_client*, Resource*> m_resource_map;
        Resource *m_resource;
        struct ::wl_global *m_global;
        uint32_t m_globalVersion;
        struct DisplayDestroyedListener : ::wl_listener {
            xdg_wm_base *parent;
        };
        DisplayDestroyedListener m_displayDestroyedListener;
    };

    class Q_WAYLAND_SERVER_XDG_SHELL_EXPORT xdg_positioner
    {
    public:
        xdg_positioner(struct ::wl_client *client, int id, int version);
        xdg_positioner(struct ::wl_display *display, int version);
        xdg_positioner(struct ::wl_resource *resource);
        xdg_positioner();

        virtual ~xdg_positioner();

        class Resource
        {
        public:
            Resource() : xdg_positioner_object(nullptr), handle(nullptr) {}
            virtual ~Resource() {}

            xdg_positioner *xdg_positioner_object;
            xdg_positioner *object() { return xdg_positioner_object; } 
            struct ::wl_resource *handle;

            struct ::wl_client *client() const { return wl_resource_get_client(handle); }
            int version() const { return wl_resource_get_version(handle); }

            static Resource *fromResource(struct ::wl_resource *resource);
        };

        void init(struct ::wl_client *client, int id, int version);
        void init(struct ::wl_display *display, int version);
        void init(struct ::wl_resource *resource);

        Resource *add(struct ::wl_client *client, int version);
        Resource *add(struct ::wl_client *client, int id, int version);
        Resource *add(struct wl_list *resource_list, struct ::wl_client *client, int id, int version);

        Resource *resource() { return m_resource; }
        const Resource *resource() const { return m_resource; }

        QMultiMap<struct ::wl_client*, Resource*> resourceMap() { return m_resource_map; }
        const QMultiMap<struct ::wl_client*, Resource*> resourceMap() const { return m_resource_map; }

        bool isGlobal() const { return m_global != nullptr; }
        bool isResource() const { return m_resource != nullptr; }

        static const struct ::wl_interface *interface();
        static QByteArray interfaceName() { return interface()->name; }
        static int interfaceVersion() { return interface()->version; }


        enum error {
            error_invalid_input = 0, // invalid input provided
        };

        enum anchor {
            anchor_none = 0,
            anchor_top = 1,
            anchor_bottom = 2,
            anchor_left = 3,
            anchor_right = 4,
            anchor_top_left = 5,
            anchor_bottom_left = 6,
            anchor_top_right = 7,
            anchor_bottom_right = 8,
        };

        enum gravity {
            gravity_none = 0,
            gravity_top = 1,
            gravity_bottom = 2,
            gravity_left = 3,
            gravity_right = 4,
            gravity_top_left = 5,
            gravity_bottom_left = 6,
            gravity_top_right = 7,
            gravity_bottom_right = 8,
        };

        enum constraint_adjustment {
            constraint_adjustment_none = 0,
            constraint_adjustment_slide_x = 1,
            constraint_adjustment_slide_y = 2,
            constraint_adjustment_flip_x = 4,
            constraint_adjustment_flip_y = 8,
            constraint_adjustment_resize_x = 16,
            constraint_adjustment_resize_y = 32,
        };

    protected:
        virtual Resource *xdg_positioner_allocate();

        virtual void xdg_positioner_bind_resource(Resource *resource);
        virtual void xdg_positioner_destroy_resource(Resource *resource);

        virtual void xdg_positioner_destroy(Resource *resource);
        virtual void xdg_positioner_set_size(Resource *resource, int32_t width, int32_t height);
        virtual void xdg_positioner_set_anchor_rect(Resource *resource, int32_t x, int32_t y, int32_t width, int32_t height);
        virtual void xdg_positioner_set_anchor(Resource *resource, uint32_t anchor);
        virtual void xdg_positioner_set_gravity(Resource *resource, uint32_t gravity);
        virtual void xdg_positioner_set_constraint_adjustment(Resource *resource, uint32_t constraint_adjustment);
        virtual void xdg_positioner_set_offset(Resource *resource, int32_t x, int32_t y);

    private:
        static void bind_func(struct ::wl_client *client, void *data, uint32_t version, uint32_t id);
        static void destroy_func(struct ::wl_resource *client_resource);
        static void display_destroy_func(struct ::wl_listener *listener, void *data);

        Resource *bind(struct ::wl_client *client, uint32_t id, int version);
        Resource *bind(struct ::wl_resource *handle);

        static const struct ::xdg_positioner_interface m_xdg_positioner_interface;

        static void handle_destroy(
            ::wl_client *client,
            struct wl_resource *resource);
        static void handle_set_size(
            ::wl_client *client,
            struct wl_resource *resource,
            int32_t width,
            int32_t height);
        static void handle_set_anchor_rect(
            ::wl_client *client,
            struct wl_resource *resource,
            int32_t x,
            int32_t y,
            int32_t width,
            int32_t height);
        static void handle_set_anchor(
            ::wl_client *client,
            struct wl_resource *resource,
            uint32_t anchor);
        static void handle_set_gravity(
            ::wl_client *client,
            struct wl_resource *resource,
            uint32_t gravity);
        static void handle_set_constraint_adjustment(
            ::wl_client *client,
            struct wl_resource *resource,
            uint32_t constraint_adjustment);
        static void handle_set_offset(
            ::wl_client *client,
            struct wl_resource *resource,
            int32_t x,
            int32_t y);

        QMultiMap<struct ::wl_client*, Resource*> m_resource_map;
        Resource *m_resource;
        struct ::wl_global *m_global;
        uint32_t m_globalVersion;
        struct DisplayDestroyedListener : ::wl_listener {
            xdg_positioner *parent;
        };
        DisplayDestroyedListener m_displayDestroyedListener;
    };

    class Q_WAYLAND_SERVER_XDG_SHELL_EXPORT xdg_surface
    {
    public:
        xdg_surface(struct ::wl_client *client, int id, int version);
        xdg_surface(struct ::wl_display *display, int version);
        xdg_surface(struct ::wl_resource *resource);
        xdg_surface();

        virtual ~xdg_surface();

        class Resource
        {
        public:
            Resource() : xdg_surface_object(nullptr), handle(nullptr) {}
            virtual ~Resource() {}

            xdg_surface *xdg_surface_object;
            xdg_surface *object() { return xdg_surface_object; } 
            struct ::wl_resource *handle;

            struct ::wl_client *client() const { return wl_resource_get_client(handle); }
            int version() const { return wl_resource_get_version(handle); }

            static Resource *fromResource(struct ::wl_resource *resource);
        };

        void init(struct ::wl_client *client, int id, int version);
        void init(struct ::wl_display *display, int version);
        void init(struct ::wl_resource *resource);

        Resource *add(struct ::wl_client *client, int version);
        Resource *add(struct ::wl_client *client, int id, int version);
        Resource *add(struct wl_list *resource_list, struct ::wl_client *client, int id, int version);

        Resource *resource() { return m_resource; }
        const Resource *resource() const { return m_resource; }

        QMultiMap<struct ::wl_client*, Resource*> resourceMap() { return m_resource_map; }
        const QMultiMap<struct ::wl_client*, Resource*> resourceMap() const { return m_resource_map; }

        bool isGlobal() const { return m_global != nullptr; }
        bool isResource() const { return m_resource != nullptr; }

        static const struct ::wl_interface *interface();
        static QByteArray interfaceName() { return interface()->name; }
        static int interfaceVersion() { return interface()->version; }


        enum error {
            error_not_constructed = 1,
            error_already_constructed = 2,
            error_unconfigured_buffer = 3,
        };

        void send_configure(uint32_t serial);
        void send_configure(struct ::wl_resource *resource, uint32_t serial);

    protected:
        virtual Resource *xdg_surface_allocate();

        virtual void xdg_surface_bind_resource(Resource *resource);
        virtual void xdg_surface_destroy_resource(Resource *resource);

        virtual void xdg_surface_destroy(Resource *resource);
        virtual void xdg_surface_get_toplevel(Resource *resource, uint32_t id);
        virtual void xdg_surface_get_popup(Resource *resource, uint32_t id, struct ::wl_resource *parent, struct ::wl_resource *positioner);
        virtual void xdg_surface_set_window_geometry(Resource *resource, int32_t x, int32_t y, int32_t width, int32_t height);
        virtual void xdg_surface_ack_configure(Resource *resource, uint32_t serial);

    private:
        static void bind_func(struct ::wl_client *client, void *data, uint32_t version, uint32_t id);
        static void destroy_func(struct ::wl_resource *client_resource);
        static void display_destroy_func(struct ::wl_listener *listener, void *data);

        Resource *bind(struct ::wl_client *client, uint32_t id, int version);
        Resource *bind(struct ::wl_resource *handle);

        static const struct ::xdg_surface_interface m_xdg_surface_interface;

        static void handle_destroy(
            ::wl_client *client,
            struct wl_resource *resource);
        static void handle_get_toplevel(
            ::wl_client *client,
            struct wl_resource *resource,
            uint32_t id);
        static void handle_get_popup(
            ::wl_client *client,
            struct wl_resource *resource,
            uint32_t id,
            struct ::wl_resource *parent,
            struct ::wl_resource *positioner);
        static void handle_set_window_geometry(
            ::wl_client *client,
            struct wl_resource *resource,
            int32_t x,
            int32_t y,
            int32_t width,
            int32_t height);
        static void handle_ack_configure(
            ::wl_client *client,
            struct wl_resource *resource,
            uint32_t serial);

        QMultiMap<struct ::wl_client*, Resource*> m_resource_map;
        Resource *m_resource;
        struct ::wl_global *m_global;
        uint32_t m_globalVersion;
        struct DisplayDestroyedListener : ::wl_listener {
            xdg_surface *parent;
        };
        DisplayDestroyedListener m_displayDestroyedListener;
    };

    class Q_WAYLAND_SERVER_XDG_SHELL_EXPORT xdg_toplevel
    {
    public:
        xdg_toplevel(struct ::wl_client *client, int id, int version);
        xdg_toplevel(struct ::wl_display *display, int version);
        xdg_toplevel(struct ::wl_resource *resource);
        xdg_toplevel();

        virtual ~xdg_toplevel();

        class Resource
        {
        public:
            Resource() : xdg_toplevel_object(nullptr), handle(nullptr) {}
            virtual ~Resource() {}

            xdg_toplevel *xdg_toplevel_object;
            xdg_toplevel *object() { return xdg_toplevel_object; } 
            struct ::wl_resource *handle;

            struct ::wl_client *client() const { return wl_resource_get_client(handle); }
            int version() const { return wl_resource_get_version(handle); }

            static Resource *fromResource(struct ::wl_resource *resource);
        };

        void init(struct ::wl_client *client, int id, int version);
        void init(struct ::wl_display *display, int version);
        void init(struct ::wl_resource *resource);

        Resource *add(struct ::wl_client *client, int version);
        Resource *add(struct ::wl_client *client, int id, int version);
        Resource *add(struct wl_list *resource_list, struct ::wl_client *client, int id, int version);

        Resource *resource() { return m_resource; }
        const Resource *resource() const { return m_resource; }

        QMultiMap<struct ::wl_client*, Resource*> resourceMap() { return m_resource_map; }
        const QMultiMap<struct ::wl_client*, Resource*> resourceMap() const { return m_resource_map; }

        bool isGlobal() const { return m_global != nullptr; }
        bool isResource() const { return m_resource != nullptr; }

        static const struct ::wl_interface *interface();
        static QByteArray interfaceName() { return interface()->name; }
        static int interfaceVersion() { return interface()->version; }


        enum resize_edge {
            resize_edge_none = 0,
            resize_edge_top = 1,
            resize_edge_bottom = 2,
            resize_edge_left = 4,
            resize_edge_top_left = 5,
            resize_edge_bottom_left = 6,
            resize_edge_right = 8,
            resize_edge_top_right = 9,
            resize_edge_bottom_right = 10,
        };

        enum state {
            state_maximized = 1, // the surface is maximized
            state_fullscreen = 2, // the surface is fullscreen
            state_resizing = 3, // the surface is being resized
            state_activated = 4, // the surface is now activated
            state_tiled_left = 5,
            state_tiled_right = 6,
            state_tiled_top = 7,
            state_tiled_bottom = 8,
        };

        void send_configure(int32_t width, int32_t height, const QByteArray &states);
        void send_configure(struct ::wl_resource *resource, int32_t width, int32_t height, const QByteArray &states);
        void send_close();
        void send_close(struct ::wl_resource *resource);

    protected:
        virtual Resource *xdg_toplevel_allocate();

        virtual void xdg_toplevel_bind_resource(Resource *resource);
        virtual void xdg_toplevel_destroy_resource(Resource *resource);

        virtual void xdg_toplevel_destroy(Resource *resource);
        virtual void xdg_toplevel_set_parent(Resource *resource, struct ::wl_resource *parent);
        virtual void xdg_toplevel_set_title(Resource *resource, const QString &title);
        virtual void xdg_toplevel_set_app_id(Resource *resource, const QString &app_id);
        virtual void xdg_toplevel_show_window_menu(Resource *resource, struct ::wl_resource *seat, uint32_t serial, int32_t x, int32_t y);
        virtual void xdg_toplevel_move(Resource *resource, struct ::wl_resource *seat, uint32_t serial);
        virtual void xdg_toplevel_resize(Resource *resource, struct ::wl_resource *seat, uint32_t serial, uint32_t edges);
        virtual void xdg_toplevel_set_max_size(Resource *resource, int32_t width, int32_t height);
        virtual void xdg_toplevel_set_min_size(Resource *resource, int32_t width, int32_t height);
        virtual void xdg_toplevel_set_maximized(Resource *resource);
        virtual void xdg_toplevel_unset_maximized(Resource *resource);
        virtual void xdg_toplevel_set_fullscreen(Resource *resource, struct ::wl_resource *output);
        virtual void xdg_toplevel_unset_fullscreen(Resource *resource);
        virtual void xdg_toplevel_set_minimized(Resource *resource);

    private:
        static void bind_func(struct ::wl_client *client, void *data, uint32_t version, uint32_t id);
        static void destroy_func(struct ::wl_resource *client_resource);
        static void display_destroy_func(struct ::wl_listener *listener, void *data);

        Resource *bind(struct ::wl_client *client, uint32_t id, int version);
        Resource *bind(struct ::wl_resource *handle);

        static const struct ::xdg_toplevel_interface m_xdg_toplevel_interface;

        static void handle_destroy(
            ::wl_client *client,
            struct wl_resource *resource);
        static void handle_set_parent(
            ::wl_client *client,
            struct wl_resource *resource,
            struct ::wl_resource *parent);
        static void handle_set_title(
            ::wl_client *client,
            struct wl_resource *resource,
            const char *title);
        static void handle_set_app_id(
            ::wl_client *client,
            struct wl_resource *resource,
            const char *app_id);
        static void handle_show_window_menu(
            ::wl_client *client,
            struct wl_resource *resource,
            struct ::wl_resource *seat,
            uint32_t serial,
            int32_t x,
            int32_t y);
        static void handle_move(
            ::wl_client *client,
            struct wl_resource *resource,
            struct ::wl_resource *seat,
            uint32_t serial);
        static void handle_resize(
            ::wl_client *client,
            struct wl_resource *resource,
            struct ::wl_resource *seat,
            uint32_t serial,
            uint32_t edges);
        static void handle_set_max_size(
            ::wl_client *client,
            struct wl_resource *resource,
            int32_t width,
            int32_t height);
        static void handle_set_min_size(
            ::wl_client *client,
            struct wl_resource *resource,
            int32_t width,
            int32_t height);
        static void handle_set_maximized(
            ::wl_client *client,
            struct wl_resource *resource);
        static void handle_unset_maximized(
            ::wl_client *client,
            struct wl_resource *resource);
        static void handle_set_fullscreen(
            ::wl_client *client,
            struct wl_resource *resource,
            struct ::wl_resource *output);
        static void handle_unset_fullscreen(
            ::wl_client *client,
            struct wl_resource *resource);
        static void handle_set_minimized(
            ::wl_client *client,
            struct wl_resource *resource);

        QMultiMap<struct ::wl_client*, Resource*> m_resource_map;
        Resource *m_resource;
        struct ::wl_global *m_global;
        uint32_t m_globalVersion;
        struct DisplayDestroyedListener : ::wl_listener {
            xdg_toplevel *parent;
        };
        DisplayDestroyedListener m_displayDestroyedListener;
    };

    class Q_WAYLAND_SERVER_XDG_SHELL_EXPORT xdg_popup
    {
    public:
        xdg_popup(struct ::wl_client *client, int id, int version);
        xdg_popup(struct ::wl_display *display, int version);
        xdg_popup(struct ::wl_resource *resource);
        xdg_popup();

        virtual ~xdg_popup();

        class Resource
        {
        public:
            Resource() : xdg_popup_object(nullptr), handle(nullptr) {}
            virtual ~Resource() {}

            xdg_popup *xdg_popup_object;
            xdg_popup *object() { return xdg_popup_object; } 
            struct ::wl_resource *handle;

            struct ::wl_client *client() const { return wl_resource_get_client(handle); }
            int version() const { return wl_resource_get_version(handle); }

            static Resource *fromResource(struct ::wl_resource *resource);
        };

        void init(struct ::wl_client *client, int id, int version);
        void init(struct ::wl_display *display, int version);
        void init(struct ::wl_resource *resource);

        Resource *add(struct ::wl_client *client, int version);
        Resource *add(struct ::wl_client *client, int id, int version);
        Resource *add(struct wl_list *resource_list, struct ::wl_client *client, int id, int version);

        Resource *resource() { return m_resource; }
        const Resource *resource() const { return m_resource; }

        QMultiMap<struct ::wl_client*, Resource*> resourceMap() { return m_resource_map; }
        const QMultiMap<struct ::wl_client*, Resource*> resourceMap() const { return m_resource_map; }

        bool isGlobal() const { return m_global != nullptr; }
        bool isResource() const { return m_resource != nullptr; }

        static const struct ::wl_interface *interface();
        static QByteArray interfaceName() { return interface()->name; }
        static int interfaceVersion() { return interface()->version; }


        enum error {
            error_invalid_grab = 0, // tried to grab after being mapped
        };

        void send_configure(int32_t x, int32_t y, int32_t width, int32_t height);
        void send_configure(struct ::wl_resource *resource, int32_t x, int32_t y, int32_t width, int32_t height);
        void send_popup_done();
        void send_popup_done(struct ::wl_resource *resource);

    protected:
        virtual Resource *xdg_popup_allocate();

        virtual void xdg_popup_bind_resource(Resource *resource);
        virtual void xdg_popup_destroy_resource(Resource *resource);

        virtual void xdg_popup_destroy(Resource *resource);
        virtual void xdg_popup_grab(Resource *resource, struct ::wl_resource *seat, uint32_t serial);

    private:
        static void bind_func(struct ::wl_client *client, void *data, uint32_t version, uint32_t id);
        static void destroy_func(struct ::wl_resource *client_resource);
        static void display_destroy_func(struct ::wl_listener *listener, void *data);

        Resource *bind(struct ::wl_client *client, uint32_t id, int version);
        Resource *bind(struct ::wl_resource *handle);

        static const struct ::xdg_popup_interface m_xdg_popup_interface;

        static void handle_destroy(
            ::wl_client *client,
            struct wl_resource *resource);
        static void handle_grab(
            ::wl_client *client,
            struct wl_resource *resource,
            struct ::wl_resource *seat,
            uint32_t serial);

        QMultiMap<struct ::wl_client*, Resource*> m_resource_map;
        Resource *m_resource;
        struct ::wl_global *m_global;
        uint32_t m_globalVersion;
        struct DisplayDestroyedListener : ::wl_listener {
            xdg_popup *parent;
        };
        DisplayDestroyedListener m_displayDestroyedListener;
    };
}

QT_WARNING_POP
QT_END_NAMESPACE

#endif
