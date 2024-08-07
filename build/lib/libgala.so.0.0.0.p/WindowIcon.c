/* WindowIcon.c generated by valac 0.56.17, the Vala compiler
 * generated from WindowIcon.vala, do not modify */

/*
 * Copyright 2012 Tom Beckmann
 * Copyright 2012 Rico Tzschichholz
 * Copyright 2023 elementary, Inc. <https://elementary.io>
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#include "gala.h"
#include <meta/window.h>
#include <glib.h>
#include <glib-object.h>
#include <clutter/clutter.h>
#include <float.h>
#include <math.h>
#include <gdk-pixbuf/gdk-pixbuf.h>
#include <cogl/cogl.h>

#if !defined(VALA_STRICT_C)
#if !defined(__clang__) && defined(__GNUC__) && (__GNUC__ >= 14)
#pragma GCC diagnostic warning "-Wincompatible-pointer-types"
#elif defined(__clang__) && (__clang_major__ >= 16)
#pragma clang diagnostic ignored "-Wincompatible-function-pointer-types"
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#endif
#endif

enum  {
	GALA_WINDOW_ICON_0_PROPERTY,
	GALA_WINDOW_ICON_WINDOW_PROPERTY,
	GALA_WINDOW_ICON_ICON_SIZE_PROPERTY,
	GALA_WINDOW_ICON_SCALE_PROPERTY,
	GALA_WINDOW_ICON_NUM_PROPERTIES
};
static GParamSpec* gala_window_icon_properties[GALA_WINDOW_ICON_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _GalaWindowIconPrivate {
	MetaWindow* _window;
	gint _icon_size;
	gint _scale;
};

static gint GalaWindowIcon_private_offset;
static gpointer gala_window_icon_parent_class = NULL;

static GObject * gala_window_icon_constructor (GType type,
                                        guint n_construct_properties,
                                        GObjectConstructParam * construct_properties);
static void gala_window_icon_finalize (GObject * obj);
static GType gala_window_icon_get_type_once (void);
static void _vala_gala_window_icon_get_property (GObject * object,
                                          guint property_id,
                                          GValue * value,
                                          GParamSpec * pspec);
static void _vala_gala_window_icon_set_property (GObject * object,
                                          guint property_id,
                                          const GValue * value,
                                          GParamSpec * pspec);

static inline gpointer
gala_window_icon_get_instance_private (GalaWindowIcon* self)
{
	return G_STRUCT_MEMBER_P (self, GalaWindowIcon_private_offset);
}

/**
     * Creates a new WindowIcon
     *
     * @param window               The window for which to create the icon
     * @param icon_size            The size of the icon in pixels
     * @param scale                The desired scale of the icon
     */
GalaWindowIcon*
gala_window_icon_construct (GType object_type,
                            MetaWindow* window,
                            gint icon_size,
                            gint scale)
{
	GalaWindowIcon * self = NULL;
#line 25 "../lib/WindowIcon.vala"
	g_return_val_if_fail (window != NULL, NULL);
#line 26 "../lib/WindowIcon.vala"
	self = (GalaWindowIcon*) g_object_new (object_type, "window", window, "icon-size", icon_size, "scale", scale, NULL);
#line 25 "../lib/WindowIcon.vala"
	return self;
#line 90 "WindowIcon.c"
}

GalaWindowIcon*
gala_window_icon_new (MetaWindow* window,
                      gint icon_size,
                      gint scale)
{
#line 25 "../lib/WindowIcon.vala"
	return gala_window_icon_construct (GALA_TYPE_WINDOW_ICON, window, icon_size, scale);
#line 100 "WindowIcon.c"
}

MetaWindow*
gala_window_icon_get_window (GalaWindowIcon* self)
{
	MetaWindow* result;
	MetaWindow* _tmp0_;
#line 14 "../lib/WindowIcon.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 14 "../lib/WindowIcon.vala"
	_tmp0_ = self->priv->_window;
#line 14 "../lib/WindowIcon.vala"
	result = _tmp0_;
#line 14 "../lib/WindowIcon.vala"
	return result;
#line 116 "WindowIcon.c"
}

static gpointer
_g_object_ref0 (gpointer self)
{
#line 14 "../lib/WindowIcon.vala"
	return self ? g_object_ref (self) : NULL;
#line 124 "WindowIcon.c"
}

static void
gala_window_icon_set_window (GalaWindowIcon* self,
                             MetaWindow* value)
{
	MetaWindow* old_value;
#line 14 "../lib/WindowIcon.vala"
	g_return_if_fail (self != NULL);
#line 14 "../lib/WindowIcon.vala"
	old_value = gala_window_icon_get_window (self);
#line 14 "../lib/WindowIcon.vala"
	if (old_value != value) {
#line 138 "WindowIcon.c"
		MetaWindow* _tmp0_;
#line 14 "../lib/WindowIcon.vala"
		_tmp0_ = _g_object_ref0 (value);
#line 14 "../lib/WindowIcon.vala"
		_g_object_unref0 (self->priv->_window);
#line 14 "../lib/WindowIcon.vala"
		self->priv->_window = _tmp0_;
#line 14 "../lib/WindowIcon.vala"
		g_object_notify_by_pspec ((GObject *) self, gala_window_icon_properties[GALA_WINDOW_ICON_WINDOW_PROPERTY]);
#line 148 "WindowIcon.c"
	}
}

gint
gala_window_icon_get_icon_size (GalaWindowIcon* self)
{
	gint result;
#line 15 "../lib/WindowIcon.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 15 "../lib/WindowIcon.vala"
	result = self->priv->_icon_size;
#line 15 "../lib/WindowIcon.vala"
	return result;
#line 162 "WindowIcon.c"
}

static void
gala_window_icon_set_icon_size (GalaWindowIcon* self,
                                gint value)
{
	gint old_value;
#line 15 "../lib/WindowIcon.vala"
	g_return_if_fail (self != NULL);
#line 15 "../lib/WindowIcon.vala"
	old_value = gala_window_icon_get_icon_size (self);
#line 15 "../lib/WindowIcon.vala"
	if (old_value != value) {
#line 15 "../lib/WindowIcon.vala"
		self->priv->_icon_size = value;
#line 15 "../lib/WindowIcon.vala"
		g_object_notify_by_pspec ((GObject *) self, gala_window_icon_properties[GALA_WINDOW_ICON_ICON_SIZE_PROPERTY]);
#line 180 "WindowIcon.c"
	}
}

gint
gala_window_icon_get_scale (GalaWindowIcon* self)
{
	gint result;
#line 16 "../lib/WindowIcon.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 16 "../lib/WindowIcon.vala"
	result = self->priv->_scale;
#line 16 "../lib/WindowIcon.vala"
	return result;
#line 194 "WindowIcon.c"
}

static void
gala_window_icon_set_scale (GalaWindowIcon* self,
                            gint value)
{
	gint old_value;
#line 16 "../lib/WindowIcon.vala"
	g_return_if_fail (self != NULL);
#line 16 "../lib/WindowIcon.vala"
	old_value = gala_window_icon_get_scale (self);
#line 16 "../lib/WindowIcon.vala"
	if (old_value != value) {
#line 16 "../lib/WindowIcon.vala"
		self->priv->_scale = value;
#line 16 "../lib/WindowIcon.vala"
		g_object_notify_by_pspec ((GObject *) self, gala_window_icon_properties[GALA_WINDOW_ICON_SCALE_PROPERTY]);
#line 212 "WindowIcon.c"
	}
}

static GObject *
gala_window_icon_constructor (GType type,
                              guint n_construct_properties,
                              GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	GalaWindowIcon * self;
	gint _tmp0_;
	gint _tmp1_;
	gint _tmp2_;
	gint _tmp3_;
	GdkPixbuf* pixbuf = NULL;
	MetaWindow* _tmp4_;
	gint _tmp5_;
	gint _tmp6_;
	GdkPixbuf* _tmp7_;
	GError* _inner_error0_ = NULL;
#line 31 "../lib/WindowIcon.vala"
	parent_class = G_OBJECT_CLASS (gala_window_icon_parent_class);
#line 31 "../lib/WindowIcon.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 31 "../lib/WindowIcon.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GALA_TYPE_WINDOW_ICON, GalaWindowIcon);
#line 32 "../lib/WindowIcon.vala"
	_tmp0_ = self->priv->_icon_size;
#line 32 "../lib/WindowIcon.vala"
	_tmp1_ = self->priv->_scale;
#line 32 "../lib/WindowIcon.vala"
	clutter_actor_set_width ((ClutterActor*) self, (gfloat) (_tmp0_ * _tmp1_));
#line 33 "../lib/WindowIcon.vala"
	_tmp2_ = self->priv->_icon_size;
#line 33 "../lib/WindowIcon.vala"
	_tmp3_ = self->priv->_scale;
#line 33 "../lib/WindowIcon.vala"
	clutter_actor_set_height ((ClutterActor*) self, (gfloat) (_tmp2_ * _tmp3_));
#line 35 "../lib/WindowIcon.vala"
	_tmp4_ = self->priv->_window;
#line 35 "../lib/WindowIcon.vala"
	_tmp5_ = self->priv->_icon_size;
#line 35 "../lib/WindowIcon.vala"
	_tmp6_ = self->priv->_scale;
#line 35 "../lib/WindowIcon.vala"
	_tmp7_ = gala_utils_get_icon_for_window (_tmp4_, _tmp5_, _tmp6_);
#line 35 "../lib/WindowIcon.vala"
	pixbuf = _tmp7_;
#line 262 "WindowIcon.c"
	{
		ClutterImage* image = NULL;
		ClutterImage* _tmp8_;
		CoglPixelFormat _tmp9_ = 0;
		GdkPixbuf* _tmp10_;
		CoglPixelFormat pixel_format = 0;
		ClutterImage* _tmp11_;
		GdkPixbuf* _tmp12_;
		guint8* _tmp13_;
		GdkPixbuf* _tmp14_;
		gint _tmp15_;
		gint _tmp16_;
		GdkPixbuf* _tmp17_;
		gint _tmp18_;
		gint _tmp19_;
		GdkPixbuf* _tmp20_;
		gint _tmp21_;
		gint _tmp22_;
		ClutterImage* _tmp23_;
#line 37 "../lib/WindowIcon.vala"
		_tmp8_ = (ClutterImage*) clutter_image_new ();
#line 37 "../lib/WindowIcon.vala"
		image = _tmp8_;
#line 38 "../lib/WindowIcon.vala"
		_tmp10_ = pixbuf;
#line 38 "../lib/WindowIcon.vala"
		if (gdk_pixbuf_get_has_alpha (_tmp10_)) {
#line 38 "../lib/WindowIcon.vala"
			_tmp9_ = COGL_PIXEL_FORMAT_RGBA_8888;
#line 292 "WindowIcon.c"
		} else {
#line 38 "../lib/WindowIcon.vala"
			_tmp9_ = COGL_PIXEL_FORMAT_RGB_888;
#line 296 "WindowIcon.c"
		}
#line 38 "../lib/WindowIcon.vala"
		pixel_format = _tmp9_;
#line 39 "../lib/WindowIcon.vala"
		_tmp11_ = image;
#line 39 "../lib/WindowIcon.vala"
		_tmp12_ = pixbuf;
#line 39 "../lib/WindowIcon.vala"
		_tmp13_ = gdk_pixbuf_get_pixels (_tmp12_);
#line 39 "../lib/WindowIcon.vala"
		_tmp14_ = pixbuf;
#line 39 "../lib/WindowIcon.vala"
		_tmp15_ = gdk_pixbuf_get_width (_tmp14_);
#line 39 "../lib/WindowIcon.vala"
		_tmp16_ = _tmp15_;
#line 39 "../lib/WindowIcon.vala"
		_tmp17_ = pixbuf;
#line 39 "../lib/WindowIcon.vala"
		_tmp18_ = gdk_pixbuf_get_height (_tmp17_);
#line 39 "../lib/WindowIcon.vala"
		_tmp19_ = _tmp18_;
#line 39 "../lib/WindowIcon.vala"
		_tmp20_ = pixbuf;
#line 39 "../lib/WindowIcon.vala"
		_tmp21_ = gdk_pixbuf_get_rowstride (_tmp20_);
#line 39 "../lib/WindowIcon.vala"
		_tmp22_ = _tmp21_;
#line 39 "../lib/WindowIcon.vala"
		clutter_image_set_data (_tmp11_, _tmp13_, pixel_format, (guint) _tmp16_, (guint) _tmp19_, (guint) _tmp22_, &_inner_error0_);
#line 39 "../lib/WindowIcon.vala"
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 39 "../lib/WindowIcon.vala"
			_g_object_unref0 (image);
#line 330 "WindowIcon.c"
			goto __catch0_g_error;
		}
#line 40 "../lib/WindowIcon.vala"
		_tmp23_ = image;
#line 40 "../lib/WindowIcon.vala"
		clutter_actor_set_content ((ClutterActor*) self, (ClutterContent*) _tmp23_);
#line 36 "../lib/WindowIcon.vala"
		_g_object_unref0 (image);
#line 339 "WindowIcon.c"
	}
	goto __finally0;
	__catch0_g_error:
	{
#line 36 "../lib/WindowIcon.vala"
		g_clear_error (&_inner_error0_);
#line 346 "WindowIcon.c"
	}
	__finally0:
#line 36 "../lib/WindowIcon.vala"
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 36 "../lib/WindowIcon.vala"
		_g_object_unref0 (pixbuf);
#line 36 "../lib/WindowIcon.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
#line 36 "../lib/WindowIcon.vala"
		g_clear_error (&_inner_error0_);
#line 357 "WindowIcon.c"
	}
#line 31 "../lib/WindowIcon.vala"
	_g_object_unref0 (pixbuf);
#line 31 "../lib/WindowIcon.vala"
	return obj;
#line 363 "WindowIcon.c"
}

static void
gala_window_icon_class_init (GalaWindowIconClass * klass,
                             gpointer klass_data)
{
#line 13 "../lib/WindowIcon.vala"
	gala_window_icon_parent_class = g_type_class_peek_parent (klass);
#line 13 "../lib/WindowIcon.vala"
	g_type_class_adjust_private_offset (klass, &GalaWindowIcon_private_offset);
#line 13 "../lib/WindowIcon.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_gala_window_icon_get_property;
#line 13 "../lib/WindowIcon.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_gala_window_icon_set_property;
#line 13 "../lib/WindowIcon.vala"
	G_OBJECT_CLASS (klass)->constructor = gala_window_icon_constructor;
#line 13 "../lib/WindowIcon.vala"
	G_OBJECT_CLASS (klass)->finalize = gala_window_icon_finalize;
#line 13 "../lib/WindowIcon.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), GALA_WINDOW_ICON_WINDOW_PROPERTY, gala_window_icon_properties[GALA_WINDOW_ICON_WINDOW_PROPERTY] = g_param_spec_object ("window", "window", "window", meta_window_get_type (), G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 13 "../lib/WindowIcon.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), GALA_WINDOW_ICON_ICON_SIZE_PROPERTY, gala_window_icon_properties[GALA_WINDOW_ICON_ICON_SIZE_PROPERTY] = g_param_spec_int ("icon-size", "icon-size", "icon-size", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 13 "../lib/WindowIcon.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), GALA_WINDOW_ICON_SCALE_PROPERTY, gala_window_icon_properties[GALA_WINDOW_ICON_SCALE_PROPERTY] = g_param_spec_int ("scale", "scale", "scale", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 388 "WindowIcon.c"
}

static void
gala_window_icon_instance_init (GalaWindowIcon * self,
                                gpointer klass)
{
#line 13 "../lib/WindowIcon.vala"
	self->priv = gala_window_icon_get_instance_private (self);
#line 397 "WindowIcon.c"
}

static void
gala_window_icon_finalize (GObject * obj)
{
	GalaWindowIcon * self;
#line 13 "../lib/WindowIcon.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GALA_TYPE_WINDOW_ICON, GalaWindowIcon);
#line 14 "../lib/WindowIcon.vala"
	_g_object_unref0 (self->priv->_window);
#line 13 "../lib/WindowIcon.vala"
	G_OBJECT_CLASS (gala_window_icon_parent_class)->finalize (obj);
#line 410 "WindowIcon.c"
}

/**
 * Creates a new ClutterTexture with an icon for the window at the given size.
 * This is recommended way to grab an icon for a window as this method will make
 * sure the icon is updated if it becomes available at a later point.
 */
 G_GNUC_NO_INLINE static GType
gala_window_icon_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (GalaWindowIconClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gala_window_icon_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GalaWindowIcon), 0, (GInstanceInitFunc) gala_window_icon_instance_init, NULL };
	GType gala_window_icon_type_id;
	gala_window_icon_type_id = g_type_register_static (clutter_actor_get_type (), "GalaWindowIcon", &g_define_type_info, 0);
	GalaWindowIcon_private_offset = g_type_add_instance_private (gala_window_icon_type_id, sizeof (GalaWindowIconPrivate));
	return gala_window_icon_type_id;
}

GType
gala_window_icon_get_type (void)
{
	static gsize gala_window_icon_type_id__once = 0;
	if (g_once_init_enter (&gala_window_icon_type_id__once)) {
		GType gala_window_icon_type_id;
		gala_window_icon_type_id = gala_window_icon_get_type_once ();
		g_once_init_leave (&gala_window_icon_type_id__once, gala_window_icon_type_id);
	}
	return gala_window_icon_type_id__once;
}

static void
_vala_gala_window_icon_get_property (GObject * object,
                                     guint property_id,
                                     GValue * value,
                                     GParamSpec * pspec)
{
	GalaWindowIcon * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GALA_TYPE_WINDOW_ICON, GalaWindowIcon);
#line 13 "../lib/WindowIcon.vala"
	switch (property_id) {
#line 13 "../lib/WindowIcon.vala"
		case GALA_WINDOW_ICON_WINDOW_PROPERTY:
#line 13 "../lib/WindowIcon.vala"
		g_value_set_object (value, gala_window_icon_get_window (self));
#line 13 "../lib/WindowIcon.vala"
		break;
#line 13 "../lib/WindowIcon.vala"
		case GALA_WINDOW_ICON_ICON_SIZE_PROPERTY:
#line 13 "../lib/WindowIcon.vala"
		g_value_set_int (value, gala_window_icon_get_icon_size (self));
#line 13 "../lib/WindowIcon.vala"
		break;
#line 13 "../lib/WindowIcon.vala"
		case GALA_WINDOW_ICON_SCALE_PROPERTY:
#line 13 "../lib/WindowIcon.vala"
		g_value_set_int (value, gala_window_icon_get_scale (self));
#line 13 "../lib/WindowIcon.vala"
		break;
#line 468 "WindowIcon.c"
		default:
#line 13 "../lib/WindowIcon.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 13 "../lib/WindowIcon.vala"
		break;
#line 474 "WindowIcon.c"
	}
}

static void
_vala_gala_window_icon_set_property (GObject * object,
                                     guint property_id,
                                     const GValue * value,
                                     GParamSpec * pspec)
{
	GalaWindowIcon * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GALA_TYPE_WINDOW_ICON, GalaWindowIcon);
#line 13 "../lib/WindowIcon.vala"
	switch (property_id) {
#line 13 "../lib/WindowIcon.vala"
		case GALA_WINDOW_ICON_WINDOW_PROPERTY:
#line 13 "../lib/WindowIcon.vala"
		gala_window_icon_set_window (self, g_value_get_object (value));
#line 13 "../lib/WindowIcon.vala"
		break;
#line 13 "../lib/WindowIcon.vala"
		case GALA_WINDOW_ICON_ICON_SIZE_PROPERTY:
#line 13 "../lib/WindowIcon.vala"
		gala_window_icon_set_icon_size (self, g_value_get_int (value));
#line 13 "../lib/WindowIcon.vala"
		break;
#line 13 "../lib/WindowIcon.vala"
		case GALA_WINDOW_ICON_SCALE_PROPERTY:
#line 13 "../lib/WindowIcon.vala"
		gala_window_icon_set_scale (self, g_value_get_int (value));
#line 13 "../lib/WindowIcon.vala"
		break;
#line 506 "WindowIcon.c"
		default:
#line 13 "../lib/WindowIcon.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 13 "../lib/WindowIcon.vala"
		break;
#line 512 "WindowIcon.c"
	}
}

