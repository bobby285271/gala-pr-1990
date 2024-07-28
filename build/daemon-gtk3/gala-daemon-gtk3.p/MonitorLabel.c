/* MonitorLabel.c generated by valac 0.56.17, the Vala compiler
 * generated from MonitorLabel.vala, do not modify */

/*
 * Copyright 2024 elementary, Inc. (https://elementary.io)
 * SPDX-License-Identifier: LGPL-3.0-or-later
 */

#include <handy.h>
#include <glib-object.h>
#include <glib.h>
#include <stdlib.h>
#include <string.h>
#include <gtk/gtk.h>
#include <gdk/gdk.h>

#define GALA_DAEMON_MONITOR_LABEL_SPACING 12
#define GALA_DAEMON_MONITOR_LABEL_COLORED_STYLE_CSS "\n" \
"    .%s {\n" \
"        background-color: alpha(%s, 0.8);\n" \
"        color: %s;\n" \
"    }\n" \
"    "
#if !defined(VALA_STRICT_C)
#if !defined(__clang__) && defined(__GNUC__) && (__GNUC__ >= 14)
#pragma GCC diagnostic warning "-Wincompatible-pointer-types"
#elif defined(__clang__) && (__clang_major__ >= 16)
#pragma clang diagnostic ignored "-Wincompatible-function-pointer-types"
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#endif
#endif
#if !defined(VALA_EXTERN)
#if defined(_MSC_VER)
#define VALA_EXTERN __declspec(dllexport) extern
#elif __GNUC__ >= 4
#define VALA_EXTERN __attribute__((visibility("default"))) extern
#else
#define VALA_EXTERN extern
#endif
#endif

#define GALA_DAEMON_TYPE_MONITOR_LABEL (gala_daemon_monitor_label_get_type ())
#define GALA_DAEMON_MONITOR_LABEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GALA_DAEMON_TYPE_MONITOR_LABEL, GalaDaemonMonitorLabel))
#define GALA_DAEMON_MONITOR_LABEL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GALA_DAEMON_TYPE_MONITOR_LABEL, GalaDaemonMonitorLabelClass))
#define GALA_DAEMON_IS_MONITOR_LABEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GALA_DAEMON_TYPE_MONITOR_LABEL))
#define GALA_DAEMON_IS_MONITOR_LABEL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GALA_DAEMON_TYPE_MONITOR_LABEL))
#define GALA_DAEMON_MONITOR_LABEL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GALA_DAEMON_TYPE_MONITOR_LABEL, GalaDaemonMonitorLabelClass))

typedef struct _GalaDaemonMonitorLabel GalaDaemonMonitorLabel;
typedef struct _GalaDaemonMonitorLabelClass GalaDaemonMonitorLabelClass;
typedef struct _GalaDaemonMonitorLabelPrivate GalaDaemonMonitorLabelPrivate;

#define GALA_DAEMON_TYPE_MONITOR_LABEL_INFO (gala_daemon_monitor_label_info_get_type ())
typedef struct _GalaDaemonMonitorLabelInfo GalaDaemonMonitorLabelInfo;
enum  {
	GALA_DAEMON_MONITOR_LABEL_0_PROPERTY,
	GALA_DAEMON_MONITOR_LABEL_INFO_PROPERTY,
	GALA_DAEMON_MONITOR_LABEL_NUM_PROPERTIES
};
static GParamSpec* gala_daemon_monitor_label_properties[GALA_DAEMON_MONITOR_LABEL_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

struct _GalaDaemonMonitorLabel {
	HdyWindow parent_instance;
	GalaDaemonMonitorLabelPrivate * priv;
};

struct _GalaDaemonMonitorLabelClass {
	HdyWindowClass parent_class;
};

struct _GalaDaemonMonitorLabelInfo {
	gint monitor;
	gchar* label;
	gchar* background_color;
	gchar* text_color;
	gint x;
	gint y;
};

struct _GalaDaemonMonitorLabelPrivate {
	GalaDaemonMonitorLabelInfo _info;
};

static gint GalaDaemonMonitorLabel_private_offset;
static gpointer gala_daemon_monitor_label_parent_class = NULL;

VALA_EXTERN GType gala_daemon_monitor_label_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GalaDaemonMonitorLabel, g_object_unref)
VALA_EXTERN GType gala_daemon_monitor_label_info_get_type (void) G_GNUC_CONST ;
VALA_EXTERN GalaDaemonMonitorLabelInfo* gala_daemon_monitor_label_info_dup (const GalaDaemonMonitorLabelInfo* self);
VALA_EXTERN void gala_daemon_monitor_label_info_free (GalaDaemonMonitorLabelInfo* self);
VALA_EXTERN void gala_daemon_monitor_label_info_copy (const GalaDaemonMonitorLabelInfo* self,
                                          GalaDaemonMonitorLabelInfo* dest);
VALA_EXTERN void gala_daemon_monitor_label_info_destroy (GalaDaemonMonitorLabelInfo* self);
G_DEFINE_AUTO_CLEANUP_CLEAR_FUNC (GalaDaemonMonitorLabelInfo, gala_daemon_monitor_label_info_destroy)
VALA_EXTERN GalaDaemonMonitorLabel* gala_daemon_monitor_label_new (GalaDaemonMonitorLabelInfo* info);
VALA_EXTERN GalaDaemonMonitorLabel* gala_daemon_monitor_label_construct (GType object_type,
                                                             GalaDaemonMonitorLabelInfo* info);
VALA_EXTERN void gala_daemon_monitor_label_get_info (GalaDaemonMonitorLabel* self,
                                         GalaDaemonMonitorLabelInfo * result);
static void gala_daemon_monitor_label_set_info (GalaDaemonMonitorLabel* self,
                                         GalaDaemonMonitorLabelInfo * value);
static gboolean _gala_daemon_monitor_label_info_equal (const GalaDaemonMonitorLabelInfo * s1,
                                                const GalaDaemonMonitorLabelInfo * s2);
static GObject * gala_daemon_monitor_label_constructor (GType type,
                                                 guint n_construct_properties,
                                                 GObjectConstructParam * construct_properties);
static void gala_daemon_monitor_label_finalize (GObject * obj);
static GType gala_daemon_monitor_label_get_type_once (void);
static void _vala_gala_daemon_monitor_label_get_property (GObject * object,
                                                   guint property_id,
                                                   GValue * value,
                                                   GParamSpec * pspec);
static void _vala_gala_daemon_monitor_label_set_property (GObject * object,
                                                   guint property_id,
                                                   const GValue * value,
                                                   GParamSpec * pspec);

static inline gpointer
gala_daemon_monitor_label_get_instance_private (GalaDaemonMonitorLabel* self)
{
	return G_STRUCT_MEMBER_P (self, GalaDaemonMonitorLabel_private_offset);
}

GalaDaemonMonitorLabel*
gala_daemon_monitor_label_construct (GType object_type,
                                     GalaDaemonMonitorLabelInfo* info)
{
	GalaDaemonMonitorLabel * self = NULL;
	GalaDaemonMonitorLabelInfo _tmp0_;
#line 17 "../daemon-gtk3/MonitorLabel.vala"
	g_return_val_if_fail (info != NULL, NULL);
#line 18 "../daemon-gtk3/MonitorLabel.vala"
	_tmp0_ = *info;
#line 18 "../daemon-gtk3/MonitorLabel.vala"
	self = (GalaDaemonMonitorLabel*) g_object_new (object_type, "info", &_tmp0_, NULL);
#line 17 "../daemon-gtk3/MonitorLabel.vala"
	return self;
#line 138 "MonitorLabel.c"
}

GalaDaemonMonitorLabel*
gala_daemon_monitor_label_new (GalaDaemonMonitorLabelInfo* info)
{
#line 17 "../daemon-gtk3/MonitorLabel.vala"
	return gala_daemon_monitor_label_construct (GALA_DAEMON_TYPE_MONITOR_LABEL, info);
#line 146 "MonitorLabel.c"
}

void
gala_daemon_monitor_label_get_info (GalaDaemonMonitorLabel* self,
                                    GalaDaemonMonitorLabelInfo * result)
{
	GalaDaemonMonitorLabelInfo _tmp0_;
#line 15 "../daemon-gtk3/MonitorLabel.vala"
	g_return_if_fail (self != NULL);
#line 15 "../daemon-gtk3/MonitorLabel.vala"
	_tmp0_ = self->priv->_info;
#line 15 "../daemon-gtk3/MonitorLabel.vala"
	*result = _tmp0_;
#line 15 "../daemon-gtk3/MonitorLabel.vala"
	return;
#line 162 "MonitorLabel.c"
}

static gboolean
_gala_daemon_monitor_label_info_equal (const GalaDaemonMonitorLabelInfo * s1,
                                       const GalaDaemonMonitorLabelInfo * s2)
{
#line 15 "../daemon-gtk3/MonitorLabel.vala"
	if (s1 == s2) {
#line 15 "../daemon-gtk3/MonitorLabel.vala"
		return TRUE;
#line 173 "MonitorLabel.c"
	}
#line 15 "../daemon-gtk3/MonitorLabel.vala"
	if (s1 == NULL) {
#line 15 "../daemon-gtk3/MonitorLabel.vala"
		return FALSE;
#line 179 "MonitorLabel.c"
	}
#line 15 "../daemon-gtk3/MonitorLabel.vala"
	if (s2 == NULL) {
#line 15 "../daemon-gtk3/MonitorLabel.vala"
		return FALSE;
#line 185 "MonitorLabel.c"
	}
#line 15 "../daemon-gtk3/MonitorLabel.vala"
	if (s1->monitor != s2->monitor) {
#line 15 "../daemon-gtk3/MonitorLabel.vala"
		return FALSE;
#line 191 "MonitorLabel.c"
	}
#line 15 "../daemon-gtk3/MonitorLabel.vala"
	if (g_strcmp0 (s1->label, s2->label)) {
#line 15 "../daemon-gtk3/MonitorLabel.vala"
		return FALSE;
#line 197 "MonitorLabel.c"
	}
#line 15 "../daemon-gtk3/MonitorLabel.vala"
	if (g_strcmp0 (s1->background_color, s2->background_color)) {
#line 15 "../daemon-gtk3/MonitorLabel.vala"
		return FALSE;
#line 203 "MonitorLabel.c"
	}
#line 15 "../daemon-gtk3/MonitorLabel.vala"
	if (g_strcmp0 (s1->text_color, s2->text_color)) {
#line 15 "../daemon-gtk3/MonitorLabel.vala"
		return FALSE;
#line 209 "MonitorLabel.c"
	}
#line 15 "../daemon-gtk3/MonitorLabel.vala"
	if (s1->x != s2->x) {
#line 15 "../daemon-gtk3/MonitorLabel.vala"
		return FALSE;
#line 215 "MonitorLabel.c"
	}
#line 15 "../daemon-gtk3/MonitorLabel.vala"
	if (s1->y != s2->y) {
#line 15 "../daemon-gtk3/MonitorLabel.vala"
		return FALSE;
#line 221 "MonitorLabel.c"
	}
#line 15 "../daemon-gtk3/MonitorLabel.vala"
	return TRUE;
#line 225 "MonitorLabel.c"
}

static void
gala_daemon_monitor_label_set_info (GalaDaemonMonitorLabel* self,
                                    GalaDaemonMonitorLabelInfo * value)
{
	GalaDaemonMonitorLabelInfo old_value;
#line 15 "../daemon-gtk3/MonitorLabel.vala"
	g_return_if_fail (self != NULL);
#line 15 "../daemon-gtk3/MonitorLabel.vala"
	gala_daemon_monitor_label_get_info (self, &old_value);
#line 15 "../daemon-gtk3/MonitorLabel.vala"
	if (_gala_daemon_monitor_label_info_equal (value, &old_value) != TRUE) {
#line 239 "MonitorLabel.c"
		GalaDaemonMonitorLabelInfo _tmp0_;
		GalaDaemonMonitorLabelInfo _tmp1_;
		GalaDaemonMonitorLabelInfo _tmp2_ = {0};
#line 15 "../daemon-gtk3/MonitorLabel.vala"
		_tmp0_ = *value;
#line 15 "../daemon-gtk3/MonitorLabel.vala"
		_tmp1_ = _tmp0_;
#line 15 "../daemon-gtk3/MonitorLabel.vala"
		gala_daemon_monitor_label_info_copy (&_tmp1_, &_tmp2_);
#line 15 "../daemon-gtk3/MonitorLabel.vala"
		gala_daemon_monitor_label_info_destroy (&self->priv->_info);
#line 15 "../daemon-gtk3/MonitorLabel.vala"
		self->priv->_info = _tmp2_;
#line 15 "../daemon-gtk3/MonitorLabel.vala"
		g_object_notify_by_pspec ((GObject *) self, gala_daemon_monitor_label_properties[GALA_DAEMON_MONITOR_LABEL_INFO_PROPERTY]);
#line 255 "MonitorLabel.c"
	}
}

static GObject *
gala_daemon_monitor_label_constructor (GType type,
                                       guint n_construct_properties,
                                       GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	GalaDaemonMonitorLabel * self;
	GalaDaemonMonitorLabelInfo _tmp0_;
	const gchar* _tmp1_;
	GtkLabel* _tmp2_;
	GtkLabel* _tmp3_;
	GalaDaemonMonitorLabelInfo _tmp4_;
	gchar* _tmp5_;
	gchar* _tmp6_;
	gint scale_factor = 0;
	GtkStyleContext* _tmp7_;
	GalaDaemonMonitorLabelInfo _tmp8_;
	GalaDaemonMonitorLabelInfo _tmp9_;
	GtkCssProvider* provider = NULL;
	GtkCssProvider* _tmp10_;
	GError* _inner_error0_ = NULL;
#line 21 "../daemon-gtk3/MonitorLabel.vala"
	parent_class = G_OBJECT_CLASS (gala_daemon_monitor_label_parent_class);
#line 21 "../daemon-gtk3/MonitorLabel.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 21 "../daemon-gtk3/MonitorLabel.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GALA_DAEMON_TYPE_MONITOR_LABEL, GalaDaemonMonitorLabel);
#line 22 "../daemon-gtk3/MonitorLabel.vala"
	_tmp0_ = self->priv->_info;
#line 22 "../daemon-gtk3/MonitorLabel.vala"
	_tmp1_ = _tmp0_.label;
#line 22 "../daemon-gtk3/MonitorLabel.vala"
	_tmp2_ = (GtkLabel*) gtk_label_new (_tmp1_);
#line 22 "../daemon-gtk3/MonitorLabel.vala"
	g_object_ref_sink (_tmp2_);
#line 22 "../daemon-gtk3/MonitorLabel.vala"
	_tmp3_ = _tmp2_;
#line 22 "../daemon-gtk3/MonitorLabel.vala"
	g_object_set ((GtkContainer*) self, "child", (GtkWidget*) _tmp3_, NULL);
#line 22 "../daemon-gtk3/MonitorLabel.vala"
	_g_object_unref0 (_tmp3_);
#line 24 "../daemon-gtk3/MonitorLabel.vala"
	_tmp4_ = self->priv->_info;
#line 24 "../daemon-gtk3/MonitorLabel.vala"
	_tmp5_ = g_strdup_printf ("LABEL-%i", _tmp4_.monitor);
#line 24 "../daemon-gtk3/MonitorLabel.vala"
	_tmp6_ = _tmp5_;
#line 24 "../daemon-gtk3/MonitorLabel.vala"
	gtk_window_set_title ((GtkWindow*) self, _tmp6_);
#line 24 "../daemon-gtk3/MonitorLabel.vala"
	_g_free0 (_tmp6_);
#line 26 "../daemon-gtk3/MonitorLabel.vala"
	gtk_widget_input_shape_combine_region ((GtkWidget*) self, NULL);
#line 27 "../daemon-gtk3/MonitorLabel.vala"
	gtk_window_set_accept_focus ((GtkWindow*) self, FALSE);
#line 28 "../daemon-gtk3/MonitorLabel.vala"
	gtk_window_set_decorated ((GtkWindow*) self, FALSE);
#line 29 "../daemon-gtk3/MonitorLabel.vala"
	gtk_window_set_resizable ((GtkWindow*) self, FALSE);
#line 30 "../daemon-gtk3/MonitorLabel.vala"
	gtk_window_set_deletable ((GtkWindow*) self, FALSE);
#line 31 "../daemon-gtk3/MonitorLabel.vala"
	gtk_widget_set_can_focus ((GtkWidget*) self, FALSE);
#line 32 "../daemon-gtk3/MonitorLabel.vala"
	gtk_window_set_skip_taskbar_hint ((GtkWindow*) self, TRUE);
#line 33 "../daemon-gtk3/MonitorLabel.vala"
	gtk_window_set_skip_pager_hint ((GtkWindow*) self, TRUE);
#line 34 "../daemon-gtk3/MonitorLabel.vala"
	gtk_window_set_type_hint ((GtkWindow*) self, GDK_WINDOW_TYPE_HINT_TOOLTIP);
#line 35 "../daemon-gtk3/MonitorLabel.vala"
	gtk_window_set_keep_above ((GtkWindow*) self, TRUE);
#line 37 "../daemon-gtk3/MonitorLabel.vala"
	gtk_window_stick ((GtkWindow*) self);
#line 39 "../daemon-gtk3/MonitorLabel.vala"
	_tmp7_ = gtk_widget_get_style_context ((GtkWidget*) self);
#line 39 "../daemon-gtk3/MonitorLabel.vala"
	scale_factor = gtk_style_context_get_scale (_tmp7_);
#line 40 "../daemon-gtk3/MonitorLabel.vala"
	_tmp8_ = self->priv->_info;
#line 40 "../daemon-gtk3/MonitorLabel.vala"
	_tmp9_ = self->priv->_info;
#line 40 "../daemon-gtk3/MonitorLabel.vala"
	gtk_window_move ((GtkWindow*) self, ((gint) (_tmp8_.x / scale_factor)) + GALA_DAEMON_MONITOR_LABEL_SPACING, ((gint) (_tmp9_.y / scale_factor)) + GALA_DAEMON_MONITOR_LABEL_SPACING);
#line 45 "../daemon-gtk3/MonitorLabel.vala"
	_tmp10_ = gtk_css_provider_new ();
#line 45 "../daemon-gtk3/MonitorLabel.vala"
	provider = _tmp10_;
#line 347 "MonitorLabel.c"
	{
		GtkCssProvider* _tmp11_;
		const gchar* _tmp12_;
		const gchar* _tmp13_;
		GalaDaemonMonitorLabelInfo _tmp14_;
		const gchar* _tmp15_;
		GalaDaemonMonitorLabelInfo _tmp16_;
		const gchar* _tmp17_;
		gchar* _tmp18_;
		gchar* _tmp19_;
		GtkStyleContext* _tmp20_;
		const gchar* _tmp21_;
		const gchar* _tmp22_;
		GtkStyleContext* _tmp23_;
		GdkScreen* _tmp24_;
		GtkCssProvider* _tmp25_;
#line 47 "../daemon-gtk3/MonitorLabel.vala"
		_tmp11_ = provider;
#line 47 "../daemon-gtk3/MonitorLabel.vala"
		_tmp12_ = gtk_window_get_title ((GtkWindow*) self);
#line 47 "../daemon-gtk3/MonitorLabel.vala"
		_tmp13_ = _tmp12_;
#line 47 "../daemon-gtk3/MonitorLabel.vala"
		_tmp14_ = self->priv->_info;
#line 47 "../daemon-gtk3/MonitorLabel.vala"
		_tmp15_ = _tmp14_.background_color;
#line 47 "../daemon-gtk3/MonitorLabel.vala"
		_tmp16_ = self->priv->_info;
#line 47 "../daemon-gtk3/MonitorLabel.vala"
		_tmp17_ = _tmp16_.text_color;
#line 47 "../daemon-gtk3/MonitorLabel.vala"
		_tmp18_ = g_strdup_printf (GALA_DAEMON_MONITOR_LABEL_COLORED_STYLE_CSS, _tmp13_, _tmp15_, _tmp17_);
#line 47 "../daemon-gtk3/MonitorLabel.vala"
		_tmp19_ = _tmp18_;
#line 47 "../daemon-gtk3/MonitorLabel.vala"
		gtk_css_provider_load_from_data (_tmp11_, _tmp19_, (gssize) -1, &_inner_error0_);
#line 47 "../daemon-gtk3/MonitorLabel.vala"
		_g_free0 (_tmp19_);
#line 47 "../daemon-gtk3/MonitorLabel.vala"
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 388 "MonitorLabel.c"
			goto __catch0_g_error;
		}
#line 48 "../daemon-gtk3/MonitorLabel.vala"
		_tmp20_ = gtk_widget_get_style_context ((GtkWidget*) self);
#line 48 "../daemon-gtk3/MonitorLabel.vala"
		_tmp21_ = gtk_window_get_title ((GtkWindow*) self);
#line 48 "../daemon-gtk3/MonitorLabel.vala"
		_tmp22_ = _tmp21_;
#line 48 "../daemon-gtk3/MonitorLabel.vala"
		gtk_style_context_add_class (_tmp20_, _tmp22_);
#line 49 "../daemon-gtk3/MonitorLabel.vala"
		_tmp23_ = gtk_widget_get_style_context ((GtkWidget*) self);
#line 49 "../daemon-gtk3/MonitorLabel.vala"
		gtk_style_context_add_class (_tmp23_, "monitor-label");
#line 51 "../daemon-gtk3/MonitorLabel.vala"
		_tmp24_ = gdk_screen_get_default ();
#line 51 "../daemon-gtk3/MonitorLabel.vala"
		_tmp25_ = provider;
#line 51 "../daemon-gtk3/MonitorLabel.vala"
		gtk_style_context_add_provider_for_screen (_tmp24_, (GtkStyleProvider*) _tmp25_, (guint) GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
#line 409 "MonitorLabel.c"
	}
	goto __finally0;
	__catch0_g_error:
	{
		GError* e = NULL;
		GError* _tmp26_;
		const gchar* _tmp27_;
#line 46 "../daemon-gtk3/MonitorLabel.vala"
		e = _inner_error0_;
#line 46 "../daemon-gtk3/MonitorLabel.vala"
		_inner_error0_ = NULL;
#line 57 "../daemon-gtk3/MonitorLabel.vala"
		_tmp26_ = e;
#line 57 "../daemon-gtk3/MonitorLabel.vala"
		_tmp27_ = _tmp26_->message;
#line 57 "../daemon-gtk3/MonitorLabel.vala"
		g_warning ("MonitorLabel.vala:57: Failed to load CSS: %s", _tmp27_);
#line 46 "../daemon-gtk3/MonitorLabel.vala"
		_g_error_free0 (e);
#line 429 "MonitorLabel.c"
	}
	__finally0:
#line 46 "../daemon-gtk3/MonitorLabel.vala"
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 46 "../daemon-gtk3/MonitorLabel.vala"
		_g_object_unref0 (provider);
#line 46 "../daemon-gtk3/MonitorLabel.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
#line 46 "../daemon-gtk3/MonitorLabel.vala"
		g_clear_error (&_inner_error0_);
#line 440 "MonitorLabel.c"
	}
#line 60 "../daemon-gtk3/MonitorLabel.vala"
	gtk_widget_show_all ((GtkWidget*) self);
#line 21 "../daemon-gtk3/MonitorLabel.vala"
	_g_object_unref0 (provider);
#line 21 "../daemon-gtk3/MonitorLabel.vala"
	return obj;
#line 448 "MonitorLabel.c"
}

static void
gala_daemon_monitor_label_class_init (GalaDaemonMonitorLabelClass * klass,
                                      gpointer klass_data)
{
#line 6 "../daemon-gtk3/MonitorLabel.vala"
	gala_daemon_monitor_label_parent_class = g_type_class_peek_parent (klass);
#line 6 "../daemon-gtk3/MonitorLabel.vala"
	g_type_class_adjust_private_offset (klass, &GalaDaemonMonitorLabel_private_offset);
#line 6 "../daemon-gtk3/MonitorLabel.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_gala_daemon_monitor_label_get_property;
#line 6 "../daemon-gtk3/MonitorLabel.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_gala_daemon_monitor_label_set_property;
#line 6 "../daemon-gtk3/MonitorLabel.vala"
	G_OBJECT_CLASS (klass)->constructor = gala_daemon_monitor_label_constructor;
#line 6 "../daemon-gtk3/MonitorLabel.vala"
	G_OBJECT_CLASS (klass)->finalize = gala_daemon_monitor_label_finalize;
#line 6 "../daemon-gtk3/MonitorLabel.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), GALA_DAEMON_MONITOR_LABEL_INFO_PROPERTY, gala_daemon_monitor_label_properties[GALA_DAEMON_MONITOR_LABEL_INFO_PROPERTY] = g_param_spec_boxed ("info", "info", "info", GALA_DAEMON_TYPE_MONITOR_LABEL_INFO, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 469 "MonitorLabel.c"
}

static void
gala_daemon_monitor_label_instance_init (GalaDaemonMonitorLabel * self,
                                         gpointer klass)
{
#line 6 "../daemon-gtk3/MonitorLabel.vala"
	self->priv = gala_daemon_monitor_label_get_instance_private (self);
#line 478 "MonitorLabel.c"
}

static void
gala_daemon_monitor_label_finalize (GObject * obj)
{
	GalaDaemonMonitorLabel * self;
#line 6 "../daemon-gtk3/MonitorLabel.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GALA_DAEMON_TYPE_MONITOR_LABEL, GalaDaemonMonitorLabel);
#line 15 "../daemon-gtk3/MonitorLabel.vala"
	gala_daemon_monitor_label_info_destroy (&self->priv->_info);
#line 6 "../daemon-gtk3/MonitorLabel.vala"
	G_OBJECT_CLASS (gala_daemon_monitor_label_parent_class)->finalize (obj);
#line 491 "MonitorLabel.c"
}

 G_GNUC_NO_INLINE static GType
gala_daemon_monitor_label_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (GalaDaemonMonitorLabelClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gala_daemon_monitor_label_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GalaDaemonMonitorLabel), 0, (GInstanceInitFunc) gala_daemon_monitor_label_instance_init, NULL };
	GType gala_daemon_monitor_label_type_id;
	gala_daemon_monitor_label_type_id = g_type_register_static (hdy_window_get_type (), "GalaDaemonMonitorLabel", &g_define_type_info, 0);
	GalaDaemonMonitorLabel_private_offset = g_type_add_instance_private (gala_daemon_monitor_label_type_id, sizeof (GalaDaemonMonitorLabelPrivate));
	return gala_daemon_monitor_label_type_id;
}

GType
gala_daemon_monitor_label_get_type (void)
{
	static gsize gala_daemon_monitor_label_type_id__once = 0;
	if (g_once_init_enter (&gala_daemon_monitor_label_type_id__once)) {
		GType gala_daemon_monitor_label_type_id;
		gala_daemon_monitor_label_type_id = gala_daemon_monitor_label_get_type_once ();
		g_once_init_leave (&gala_daemon_monitor_label_type_id__once, gala_daemon_monitor_label_type_id);
	}
	return gala_daemon_monitor_label_type_id__once;
}

static void
_vala_gala_daemon_monitor_label_get_property (GObject * object,
                                              guint property_id,
                                              GValue * value,
                                              GParamSpec * pspec)
{
	GalaDaemonMonitorLabel * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GALA_DAEMON_TYPE_MONITOR_LABEL, GalaDaemonMonitorLabel);
#line 6 "../daemon-gtk3/MonitorLabel.vala"
	switch (property_id) {
#line 6 "../daemon-gtk3/MonitorLabel.vala"
		case GALA_DAEMON_MONITOR_LABEL_INFO_PROPERTY:
#line 528 "MonitorLabel.c"
		{
			GalaDaemonMonitorLabelInfo boxed;
#line 6 "../daemon-gtk3/MonitorLabel.vala"
			gala_daemon_monitor_label_get_info (self, &boxed);
#line 6 "../daemon-gtk3/MonitorLabel.vala"
			g_value_set_boxed (value, &boxed);
#line 535 "MonitorLabel.c"
		}
#line 6 "../daemon-gtk3/MonitorLabel.vala"
		break;
#line 539 "MonitorLabel.c"
		default:
#line 6 "../daemon-gtk3/MonitorLabel.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 6 "../daemon-gtk3/MonitorLabel.vala"
		break;
#line 545 "MonitorLabel.c"
	}
}

static void
_vala_gala_daemon_monitor_label_set_property (GObject * object,
                                              guint property_id,
                                              const GValue * value,
                                              GParamSpec * pspec)
{
	GalaDaemonMonitorLabel * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GALA_DAEMON_TYPE_MONITOR_LABEL, GalaDaemonMonitorLabel);
#line 6 "../daemon-gtk3/MonitorLabel.vala"
	switch (property_id) {
#line 6 "../daemon-gtk3/MonitorLabel.vala"
		case GALA_DAEMON_MONITOR_LABEL_INFO_PROPERTY:
#line 6 "../daemon-gtk3/MonitorLabel.vala"
		gala_daemon_monitor_label_set_info (self, g_value_get_boxed (value));
#line 6 "../daemon-gtk3/MonitorLabel.vala"
		break;
#line 565 "MonitorLabel.c"
		default:
#line 6 "../daemon-gtk3/MonitorLabel.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 6 "../daemon-gtk3/MonitorLabel.vala"
		break;
#line 571 "MonitorLabel.c"
	}
}
