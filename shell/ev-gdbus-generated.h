/*
 * Generated by gdbus-codegen 2.48.2. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __EV_GDBUS_GENERATED_H__
#define __EV_GDBUS_GENERATED_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.x.reader.Application */

#define EV_TYPE_XREADER_APPLICATION (ev_xreader_application_get_type ())
#define EV_XREADER_APPLICATION(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EV_TYPE_XREADER_APPLICATION, EvXreaderApplication))
#define EV_IS_XREADER_APPLICATION(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EV_TYPE_XREADER_APPLICATION))
#define EV_XREADER_APPLICATION_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), EV_TYPE_XREADER_APPLICATION, EvXreaderApplicationIface))

struct _EvXreaderApplication;
typedef struct _EvXreaderApplication EvXreaderApplication;
typedef struct _EvXreaderApplicationIface EvXreaderApplicationIface;

struct _EvXreaderApplicationIface
{
  GTypeInterface parent_iface;

  gboolean (*handle_get_window_list) (
    EvXreaderApplication *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_reload) (
    EvXreaderApplication *object,
    GDBusMethodInvocation *invocation,
    GVariant *arg_args,
    guint arg_timestamp);

};

GType ev_xreader_application_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *ev_xreader_application_interface_info (void);
guint ev_xreader_application_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void ev_xreader_application_complete_reload (
    EvXreaderApplication *object,
    GDBusMethodInvocation *invocation);

void ev_xreader_application_complete_get_window_list (
    EvXreaderApplication *object,
    GDBusMethodInvocation *invocation,
    const gchar *const *window_list);



/* D-Bus method calls: */
void ev_xreader_application_call_reload (
    EvXreaderApplication *proxy,
    GVariant *arg_args,
    guint arg_timestamp,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean ev_xreader_application_call_reload_finish (
    EvXreaderApplication *proxy,
    GAsyncResult *res,
    GError **error);

gboolean ev_xreader_application_call_reload_sync (
    EvXreaderApplication *proxy,
    GVariant *arg_args,
    guint arg_timestamp,
    GCancellable *cancellable,
    GError **error);

void ev_xreader_application_call_get_window_list (
    EvXreaderApplication *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean ev_xreader_application_call_get_window_list_finish (
    EvXreaderApplication *proxy,
    gchar ***out_window_list,
    GAsyncResult *res,
    GError **error);

gboolean ev_xreader_application_call_get_window_list_sync (
    EvXreaderApplication *proxy,
    gchar ***out_window_list,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define EV_TYPE_XREADER_APPLICATION_PROXY (ev_xreader_application_proxy_get_type ())
#define EV_XREADER_APPLICATION_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EV_TYPE_XREADER_APPLICATION_PROXY, EvXreaderApplicationProxy))
#define EV_XREADER_APPLICATION_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), EV_TYPE_XREADER_APPLICATION_PROXY, EvXreaderApplicationProxyClass))
#define EV_XREADER_APPLICATION_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), EV_TYPE_XREADER_APPLICATION_PROXY, EvXreaderApplicationProxyClass))
#define EV_IS_XREADER_APPLICATION_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EV_TYPE_XREADER_APPLICATION_PROXY))
#define EV_IS_XREADER_APPLICATION_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), EV_TYPE_XREADER_APPLICATION_PROXY))

typedef struct _EvXreaderApplicationProxy EvXreaderApplicationProxy;
typedef struct _EvXreaderApplicationProxyClass EvXreaderApplicationProxyClass;
typedef struct _EvXreaderApplicationProxyPrivate EvXreaderApplicationProxyPrivate;

struct _EvXreaderApplicationProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  EvXreaderApplicationProxyPrivate *priv;
};

struct _EvXreaderApplicationProxyClass
{
  GDBusProxyClass parent_class;
};

GType ev_xreader_application_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (EvXreaderApplicationProxy, g_object_unref)
#endif

void ev_xreader_application_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
EvXreaderApplication *ev_xreader_application_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
EvXreaderApplication *ev_xreader_application_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void ev_xreader_application_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
EvXreaderApplication *ev_xreader_application_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
EvXreaderApplication *ev_xreader_application_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define EV_TYPE_XREADER_APPLICATION_SKELETON (ev_xreader_application_skeleton_get_type ())
#define EV_XREADER_APPLICATION_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EV_TYPE_XREADER_APPLICATION_SKELETON, EvXreaderApplicationSkeleton))
#define EV_XREADER_APPLICATION_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), EV_TYPE_XREADER_APPLICATION_SKELETON, EvXreaderApplicationSkeletonClass))
#define EV_XREADER_APPLICATION_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), EV_TYPE_XREADER_APPLICATION_SKELETON, EvXreaderApplicationSkeletonClass))
#define EV_IS_XREADER_APPLICATION_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EV_TYPE_XREADER_APPLICATION_SKELETON))
#define EV_IS_XREADER_APPLICATION_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), EV_TYPE_XREADER_APPLICATION_SKELETON))

typedef struct _EvXreaderApplicationSkeleton EvXreaderApplicationSkeleton;
typedef struct _EvXreaderApplicationSkeletonClass EvXreaderApplicationSkeletonClass;
typedef struct _EvXreaderApplicationSkeletonPrivate EvXreaderApplicationSkeletonPrivate;

struct _EvXreaderApplicationSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  EvXreaderApplicationSkeletonPrivate *priv;
};

struct _EvXreaderApplicationSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType ev_xreader_application_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (EvXreaderApplicationSkeleton, g_object_unref)
#endif

EvXreaderApplication *ev_xreader_application_skeleton_new (void);


/* ------------------------------------------------------------------------ */
/* Declarations for org.x.reader.Window */

#define EV_TYPE_XREADER_WINDOW (ev_xreader_window_get_type ())
#define EV_XREADER_WINDOW(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EV_TYPE_XREADER_WINDOW, EvXreaderWindow))
#define EV_IS_XREADER_WINDOW(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EV_TYPE_XREADER_WINDOW))
#define EV_XREADER_WINDOW_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), EV_TYPE_XREADER_WINDOW, EvXreaderWindowIface))

struct _EvXreaderWindow;
typedef struct _EvXreaderWindow EvXreaderWindow;
typedef struct _EvXreaderWindowIface EvXreaderWindowIface;

struct _EvXreaderWindowIface
{
  GTypeInterface parent_iface;


  gboolean (*handle_sync_view) (
    EvXreaderWindow *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_source_file,
    GVariant *arg_source_point,
    guint arg_timestamp);

  void (*closed) (
    EvXreaderWindow *object);

  void (*document_loaded) (
    EvXreaderWindow *object,
    const gchar *arg_uri);

  void (*sync_source) (
    EvXreaderWindow *object,
    const gchar *arg_source_file,
    GVariant *arg_source_point,
    guint arg_timestamp);

};

GType ev_xreader_window_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *ev_xreader_window_interface_info (void);
guint ev_xreader_window_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void ev_xreader_window_complete_sync_view (
    EvXreaderWindow *object,
    GDBusMethodInvocation *invocation);



/* D-Bus signal emissions functions: */
void ev_xreader_window_emit_sync_source (
    EvXreaderWindow *object,
    const gchar *arg_source_file,
    GVariant *arg_source_point,
    guint arg_timestamp);

void ev_xreader_window_emit_closed (
    EvXreaderWindow *object);

void ev_xreader_window_emit_document_loaded (
    EvXreaderWindow *object,
    const gchar *arg_uri);



/* D-Bus method calls: */
void ev_xreader_window_call_sync_view (
    EvXreaderWindow *proxy,
    const gchar *arg_source_file,
    GVariant *arg_source_point,
    guint arg_timestamp,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean ev_xreader_window_call_sync_view_finish (
    EvXreaderWindow *proxy,
    GAsyncResult *res,
    GError **error);

gboolean ev_xreader_window_call_sync_view_sync (
    EvXreaderWindow *proxy,
    const gchar *arg_source_file,
    GVariant *arg_source_point,
    guint arg_timestamp,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define EV_TYPE_XREADER_WINDOW_PROXY (ev_xreader_window_proxy_get_type ())
#define EV_XREADER_WINDOW_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EV_TYPE_XREADER_WINDOW_PROXY, EvXreaderWindowProxy))
#define EV_XREADER_WINDOW_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), EV_TYPE_XREADER_WINDOW_PROXY, EvXreaderWindowProxyClass))
#define EV_XREADER_WINDOW_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), EV_TYPE_XREADER_WINDOW_PROXY, EvXreaderWindowProxyClass))
#define EV_IS_XREADER_WINDOW_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EV_TYPE_XREADER_WINDOW_PROXY))
#define EV_IS_XREADER_WINDOW_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), EV_TYPE_XREADER_WINDOW_PROXY))

typedef struct _EvXreaderWindowProxy EvXreaderWindowProxy;
typedef struct _EvXreaderWindowProxyClass EvXreaderWindowProxyClass;
typedef struct _EvXreaderWindowProxyPrivate EvXreaderWindowProxyPrivate;

struct _EvXreaderWindowProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  EvXreaderWindowProxyPrivate *priv;
};

struct _EvXreaderWindowProxyClass
{
  GDBusProxyClass parent_class;
};

GType ev_xreader_window_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (EvXreaderWindowProxy, g_object_unref)
#endif

void ev_xreader_window_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
EvXreaderWindow *ev_xreader_window_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
EvXreaderWindow *ev_xreader_window_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void ev_xreader_window_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
EvXreaderWindow *ev_xreader_window_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
EvXreaderWindow *ev_xreader_window_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define EV_TYPE_XREADER_WINDOW_SKELETON (ev_xreader_window_skeleton_get_type ())
#define EV_XREADER_WINDOW_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EV_TYPE_XREADER_WINDOW_SKELETON, EvXreaderWindowSkeleton))
#define EV_XREADER_WINDOW_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), EV_TYPE_XREADER_WINDOW_SKELETON, EvXreaderWindowSkeletonClass))
#define EV_XREADER_WINDOW_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), EV_TYPE_XREADER_WINDOW_SKELETON, EvXreaderWindowSkeletonClass))
#define EV_IS_XREADER_WINDOW_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EV_TYPE_XREADER_WINDOW_SKELETON))
#define EV_IS_XREADER_WINDOW_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), EV_TYPE_XREADER_WINDOW_SKELETON))

typedef struct _EvXreaderWindowSkeleton EvXreaderWindowSkeleton;
typedef struct _EvXreaderWindowSkeletonClass EvXreaderWindowSkeletonClass;
typedef struct _EvXreaderWindowSkeletonPrivate EvXreaderWindowSkeletonPrivate;

struct _EvXreaderWindowSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  EvXreaderWindowSkeletonPrivate *priv;
};

struct _EvXreaderWindowSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType ev_xreader_window_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (EvXreaderWindowSkeleton, g_object_unref)
#endif

EvXreaderWindow *ev_xreader_window_skeleton_new (void);


/* ---- */

#define EV_TYPE_OBJECT (ev_object_get_type ())
#define EV_OBJECT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EV_TYPE_OBJECT, EvObject))
#define EV_IS_OBJECT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EV_TYPE_OBJECT))
#define EV_OBJECT_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), EV_TYPE_OBJECT, EvObject))

struct _EvObject;
typedef struct _EvObject EvObject;
typedef struct _EvObjectIface EvObjectIface;

struct _EvObjectIface
{
  GTypeInterface parent_iface;
};

GType ev_object_get_type (void) G_GNUC_CONST;

EvXreaderApplication *ev_object_get_xreader_application (EvObject *object);
EvXreaderWindow *ev_object_get_xreader_window (EvObject *object);
EvXreaderApplication *ev_object_peek_xreader_application (EvObject *object);
EvXreaderWindow *ev_object_peek_xreader_window (EvObject *object);

#define EV_TYPE_OBJECT_PROXY (ev_object_proxy_get_type ())
#define EV_OBJECT_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EV_TYPE_OBJECT_PROXY, EvObjectProxy))
#define EV_OBJECT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), EV_TYPE_OBJECT_PROXY, EvObjectProxyClass))
#define EV_OBJECT_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), EV_TYPE_OBJECT_PROXY, EvObjectProxyClass))
#define EV_IS_OBJECT_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EV_TYPE_OBJECT_PROXY))
#define EV_IS_OBJECT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), EV_TYPE_OBJECT_PROXY))

typedef struct _EvObjectProxy EvObjectProxy;
typedef struct _EvObjectProxyClass EvObjectProxyClass;
typedef struct _EvObjectProxyPrivate EvObjectProxyPrivate;

struct _EvObjectProxy
{
  /*< private >*/
  GDBusObjectProxy parent_instance;
  EvObjectProxyPrivate *priv;
};

struct _EvObjectProxyClass
{
  GDBusObjectProxyClass parent_class;
};

GType ev_object_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (EvObjectProxy, g_object_unref)
#endif

EvObjectProxy *ev_object_proxy_new (GDBusConnection *connection, const gchar *object_path);

#define EV_TYPE_OBJECT_SKELETON (ev_object_skeleton_get_type ())
#define EV_OBJECT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EV_TYPE_OBJECT_SKELETON, EvObjectSkeleton))
#define EV_OBJECT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), EV_TYPE_OBJECT_SKELETON, EvObjectSkeletonClass))
#define EV_OBJECT_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), EV_TYPE_OBJECT_SKELETON, EvObjectSkeletonClass))
#define EV_IS_OBJECT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EV_TYPE_OBJECT_SKELETON))
#define EV_IS_OBJECT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), EV_TYPE_OBJECT_SKELETON))

typedef struct _EvObjectSkeleton EvObjectSkeleton;
typedef struct _EvObjectSkeletonClass EvObjectSkeletonClass;
typedef struct _EvObjectSkeletonPrivate EvObjectSkeletonPrivate;

struct _EvObjectSkeleton
{
  /*< private >*/
  GDBusObjectSkeleton parent_instance;
  EvObjectSkeletonPrivate *priv;
};

struct _EvObjectSkeletonClass
{
  GDBusObjectSkeletonClass parent_class;
};

GType ev_object_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (EvObjectSkeleton, g_object_unref)
#endif

EvObjectSkeleton *ev_object_skeleton_new (const gchar *object_path);
void ev_object_skeleton_set_xreader_application (EvObjectSkeleton *object, EvXreaderApplication *interface_);
void ev_object_skeleton_set_xreader_window (EvObjectSkeleton *object, EvXreaderWindow *interface_);

/* ---- */

#define EV_TYPE_OBJECT_MANAGER_CLIENT (ev_object_manager_client_get_type ())
#define EV_OBJECT_MANAGER_CLIENT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EV_TYPE_OBJECT_MANAGER_CLIENT, EvObjectManagerClient))
#define EV_OBJECT_MANAGER_CLIENT_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), EV_TYPE_OBJECT_MANAGER_CLIENT, EvObjectManagerClientClass))
#define EV_OBJECT_MANAGER_CLIENT_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), EV_TYPE_OBJECT_MANAGER_CLIENT, EvObjectManagerClientClass))
#define EV_IS_OBJECT_MANAGER_CLIENT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EV_TYPE_OBJECT_MANAGER_CLIENT))
#define EV_IS_OBJECT_MANAGER_CLIENT_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), EV_TYPE_OBJECT_MANAGER_CLIENT))

typedef struct _EvObjectManagerClient EvObjectManagerClient;
typedef struct _EvObjectManagerClientClass EvObjectManagerClientClass;
typedef struct _EvObjectManagerClientPrivate EvObjectManagerClientPrivate;

struct _EvObjectManagerClient
{
  /*< private >*/
  GDBusObjectManagerClient parent_instance;
  EvObjectManagerClientPrivate *priv;
};

struct _EvObjectManagerClientClass
{
  GDBusObjectManagerClientClass parent_class;
};

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (EvObjectManagerClient, g_object_unref)
#endif

GType ev_object_manager_client_get_type (void) G_GNUC_CONST;

GType ev_object_manager_client_get_proxy_type (GDBusObjectManagerClient *manager, const gchar *object_path, const gchar *interface_name, gpointer user_data);

void ev_object_manager_client_new (
    GDBusConnection        *connection,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GAsyncReadyCallback     callback,
    gpointer                user_data);
GDBusObjectManager *ev_object_manager_client_new_finish (
    GAsyncResult        *res,
    GError             **error);
GDBusObjectManager *ev_object_manager_client_new_sync (
    GDBusConnection        *connection,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GError                **error);

void ev_object_manager_client_new_for_bus (
    GBusType                bus_type,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GAsyncReadyCallback     callback,
    gpointer                user_data);
GDBusObjectManager *ev_object_manager_client_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GDBusObjectManager *ev_object_manager_client_new_for_bus_sync (
    GBusType                bus_type,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GError                **error);


G_END_DECLS

#endif /* __EV_GDBUS_GENERATED_H__ */
