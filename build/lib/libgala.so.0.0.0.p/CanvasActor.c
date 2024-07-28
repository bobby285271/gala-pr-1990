/* CanvasActor.c generated by valac 0.56.17, the Vala compiler
 * generated from CanvasActor.vala, do not modify */

/*
 * Copyright 2024 elementary, Inc. (https://elementary.io)
 * SPDX-License-Identifier: LGPL-2.0-or-later
 */

#include "gala.h"
#include <clutter/clutter.h>
#include <cairo-gobject.h>
#include <glib.h>
#include <glib-object.h>

#if !defined(VALA_STRICT_C)
#if !defined(__clang__) && defined(__GNUC__) && (__GNUC__ >= 14)
#pragma GCC diagnostic warning "-Wincompatible-pointer-types"
#elif defined(__clang__) && (__clang_major__ >= 16)
#pragma clang diagnostic ignored "-Wincompatible-function-pointer-types"
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#endif
#endif

enum  {
	GALA_CANVAS_ACTOR_0_PROPERTY,
	GALA_CANVAS_ACTOR_NUM_PROPERTIES
};
static GParamSpec* gala_canvas_actor_properties[GALA_CANVAS_ACTOR_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _GalaCanvasActorPrivate {
	GalaDrawingCanvas* canvas;
};

static gint GalaCanvasActor_private_offset;
static gpointer gala_canvas_actor_parent_class = NULL;

static void gala_canvas_actor_real_resource_scale_changed (ClutterActor* base);
static void gala_canvas_actor_real_allocate (ClutterActor* base,
                                      ClutterActorBox* box);
static void gala_canvas_actor_real_draw (GalaCanvasActor* self,
                                  cairo_t* canvas,
                                  gint width,
                                  gint height);
static GObject * gala_canvas_actor_constructor (GType type,
                                         guint n_construct_properties,
                                         GObjectConstructParam * construct_properties);
static void _gala_canvas_actor___lambda8_ (GalaCanvasActor* self,
                                    cairo_t* ctx,
                                    gint width,
                                    gint height);
static void __gala_canvas_actor___lambda8__gala_drawing_canvas_draw (GalaDrawingCanvas* _sender,
                                                              cairo_t* cr,
                                                              gint width,
                                                              gint height,
                                                              gpointer self);
static void gala_canvas_actor_finalize (GObject * obj);
static GType gala_canvas_actor_get_type_once (void);

static inline gpointer
gala_canvas_actor_get_instance_private (GalaCanvasActor* self)
{
	return G_STRUCT_MEMBER_P (self, GalaCanvasActor_private_offset);
}

static void
gala_canvas_actor_real_resource_scale_changed (ClutterActor* base)
{
	GalaCanvasActor * self;
	GalaDrawingCanvas* _tmp0_;
#line 17 "../lib/CanvasActor.vala"
	self = (GalaCanvasActor*) base;
#line 18 "../lib/CanvasActor.vala"
	_tmp0_ = self->priv->canvas;
#line 18 "../lib/CanvasActor.vala"
	gala_drawing_canvas_set_scale_factor (_tmp0_, clutter_actor_get_resource_scale ((ClutterActor*) self));
#line 78 "CanvasActor.c"
}

static void
gala_canvas_actor_real_allocate (ClutterActor* base,
                                 ClutterActorBox* box)
{
	GalaCanvasActor * self;
	ClutterActorBox _tmp0_;
	GalaDrawingCanvas* _tmp1_;
	GalaDrawingCanvas* _tmp2_;
#line 21 "../lib/CanvasActor.vala"
	self = (GalaCanvasActor*) base;
#line 21 "../lib/CanvasActor.vala"
	g_return_if_fail (box != NULL);
#line 22 "../lib/CanvasActor.vala"
	_tmp0_ = *box;
#line 22 "../lib/CanvasActor.vala"
	CLUTTER_ACTOR_CLASS (gala_canvas_actor_parent_class)->allocate (G_TYPE_CHECK_INSTANCE_CAST (self, clutter_actor_get_type (), ClutterActor), &_tmp0_);
#line 23 "../lib/CanvasActor.vala"
	_tmp1_ = self->priv->canvas;
#line 23 "../lib/CanvasActor.vala"
	gala_drawing_canvas_set_size (_tmp1_, (gint) clutter_actor_box_get_width (box), (gint) clutter_actor_box_get_height (box));
#line 24 "../lib/CanvasActor.vala"
	_tmp2_ = self->priv->canvas;
#line 24 "../lib/CanvasActor.vala"
	gala_drawing_canvas_set_scale_factor (_tmp2_, clutter_actor_get_resource_scale ((ClutterActor*) self));
#line 105 "CanvasActor.c"
}

static void
gala_canvas_actor_real_draw (GalaCanvasActor* self,
                             cairo_t* canvas,
                             gint width,
                             gint height)
{
#line 27 "../lib/CanvasActor.vala"
	g_return_if_fail (canvas != NULL);
#line 116 "CanvasActor.c"
}

void
gala_canvas_actor_draw (GalaCanvasActor* self,
                        cairo_t* canvas,
                        gint width,
                        gint height)
{
	GalaCanvasActorClass* _klass_;
#line 27 "../lib/CanvasActor.vala"
	g_return_if_fail (self != NULL);
#line 27 "../lib/CanvasActor.vala"
	_klass_ = GALA_CANVAS_ACTOR_GET_CLASS (self);
#line 27 "../lib/CanvasActor.vala"
	if (_klass_->draw) {
#line 27 "../lib/CanvasActor.vala"
		_klass_->draw (self, canvas, width, height);
#line 134 "CanvasActor.c"
	}
}

GalaCanvasActor*
gala_canvas_actor_construct (GType object_type)
{
	GalaCanvasActor * self = NULL;
#line 6 "../lib/CanvasActor.vala"
	self = (GalaCanvasActor*) g_object_new (object_type, NULL);
#line 6 "../lib/CanvasActor.vala"
	return self;
#line 146 "CanvasActor.c"
}

GalaCanvasActor*
gala_canvas_actor_new (void)
{
#line 6 "../lib/CanvasActor.vala"
	return gala_canvas_actor_construct (GALA_TYPE_CANVAS_ACTOR);
#line 154 "CanvasActor.c"
}

static void
_gala_canvas_actor___lambda8_ (GalaCanvasActor* self,
                               cairo_t* ctx,
                               gint width,
                               gint height)
{
#line 12 "../lib/CanvasActor.vala"
	g_return_if_fail (ctx != NULL);
#line 13 "../lib/CanvasActor.vala"
	gala_canvas_actor_draw (self, ctx, width, height);
#line 167 "CanvasActor.c"
}

static void
__gala_canvas_actor___lambda8__gala_drawing_canvas_draw (GalaDrawingCanvas* _sender,
                                                         cairo_t* cr,
                                                         gint width,
                                                         gint height,
                                                         gpointer self)
{
#line 12 "../lib/CanvasActor.vala"
	_gala_canvas_actor___lambda8_ ((GalaCanvasActor*) self, cr, width, height);
#line 179 "CanvasActor.c"
}

static GObject *
gala_canvas_actor_constructor (GType type,
                               guint n_construct_properties,
                               GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	GalaCanvasActor * self;
	GalaDrawingCanvas* _tmp0_;
	GalaDrawingCanvas* _tmp1_;
	GalaDrawingCanvas* _tmp2_;
#line 9 "../lib/CanvasActor.vala"
	parent_class = G_OBJECT_CLASS (gala_canvas_actor_parent_class);
#line 9 "../lib/CanvasActor.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 9 "../lib/CanvasActor.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GALA_TYPE_CANVAS_ACTOR, GalaCanvasActor);
#line 10 "../lib/CanvasActor.vala"
	_tmp0_ = gala_drawing_canvas_new ();
#line 10 "../lib/CanvasActor.vala"
	_g_object_unref0 (self->priv->canvas);
#line 10 "../lib/CanvasActor.vala"
	self->priv->canvas = _tmp0_;
#line 11 "../lib/CanvasActor.vala"
	_tmp1_ = self->priv->canvas;
#line 11 "../lib/CanvasActor.vala"
	clutter_actor_set_content ((ClutterActor*) self, (ClutterContent*) _tmp1_);
#line 12 "../lib/CanvasActor.vala"
	_tmp2_ = self->priv->canvas;
#line 12 "../lib/CanvasActor.vala"
	g_signal_connect_object (_tmp2_, "draw", (GCallback) __gala_canvas_actor___lambda8__gala_drawing_canvas_draw, self, 0);
#line 9 "../lib/CanvasActor.vala"
	return obj;
#line 215 "CanvasActor.c"
}

static void
gala_canvas_actor_class_init (GalaCanvasActorClass * klass,
                              gpointer klass_data)
{
#line 6 "../lib/CanvasActor.vala"
	gala_canvas_actor_parent_class = g_type_class_peek_parent (klass);
#line 6 "../lib/CanvasActor.vala"
	g_type_class_adjust_private_offset (klass, &GalaCanvasActor_private_offset);
#line 6 "../lib/CanvasActor.vala"
	((ClutterActorClass *) klass)->resource_scale_changed = (void (*) (ClutterActor*)) gala_canvas_actor_real_resource_scale_changed;
#line 6 "../lib/CanvasActor.vala"
	((ClutterActorClass *) klass)->allocate = (void (*) (ClutterActor*, ClutterActorBox*)) gala_canvas_actor_real_allocate;
#line 6 "../lib/CanvasActor.vala"
	((GalaCanvasActorClass *) klass)->draw = (void (*) (GalaCanvasActor*, cairo_t*, gint, gint)) gala_canvas_actor_real_draw;
#line 6 "../lib/CanvasActor.vala"
	G_OBJECT_CLASS (klass)->constructor = gala_canvas_actor_constructor;
#line 6 "../lib/CanvasActor.vala"
	G_OBJECT_CLASS (klass)->finalize = gala_canvas_actor_finalize;
#line 236 "CanvasActor.c"
}

static void
gala_canvas_actor_instance_init (GalaCanvasActor * self,
                                 gpointer klass)
{
#line 6 "../lib/CanvasActor.vala"
	self->priv = gala_canvas_actor_get_instance_private (self);
#line 245 "CanvasActor.c"
}

static void
gala_canvas_actor_finalize (GObject * obj)
{
	GalaCanvasActor * self;
#line 6 "../lib/CanvasActor.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GALA_TYPE_CANVAS_ACTOR, GalaCanvasActor);
#line 7 "../lib/CanvasActor.vala"
	_g_object_unref0 (self->priv->canvas);
#line 6 "../lib/CanvasActor.vala"
	G_OBJECT_CLASS (gala_canvas_actor_parent_class)->finalize (obj);
#line 258 "CanvasActor.c"
}

 G_GNUC_NO_INLINE static GType
gala_canvas_actor_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (GalaCanvasActorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gala_canvas_actor_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GalaCanvasActor), 0, (GInstanceInitFunc) gala_canvas_actor_instance_init, NULL };
	GType gala_canvas_actor_type_id;
	gala_canvas_actor_type_id = g_type_register_static (clutter_actor_get_type (), "GalaCanvasActor", &g_define_type_info, 0);
	GalaCanvasActor_private_offset = g_type_add_instance_private (gala_canvas_actor_type_id, sizeof (GalaCanvasActorPrivate));
	return gala_canvas_actor_type_id;
}

GType
gala_canvas_actor_get_type (void)
{
	static gsize gala_canvas_actor_type_id__once = 0;
	if (g_once_init_enter (&gala_canvas_actor_type_id__once)) {
		GType gala_canvas_actor_type_id;
		gala_canvas_actor_type_id = gala_canvas_actor_get_type_once ();
		g_once_init_leave (&gala_canvas_actor_type_id__once, gala_canvas_actor_type_id);
	}
	return gala_canvas_actor_type_id__once;
}
