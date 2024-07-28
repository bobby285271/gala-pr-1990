/* AppCache.c generated by valac 0.56.17, the Vala compiler
 * generated from AppCache.vala, do not modify */

/**/
/*  Copyright 2020 elementary, Inc. (https://elementary.io)*/
/**/
/*  This program is free software: you can redistribute it and/or modify*/
/*  it under the terms of the GNU General Public License as published by*/
/*  the Free Software Foundation, either version 3 of the License, or*/
/*  (at your option) any later version.*/
/**/
/*  This program is distributed in the hope that it will be useful,*/
/*  but WITHOUT ANY WARRANTY; without even the implied warranty of*/
/*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the*/
/*  GNU General Public License for more details.*/
/**/
/*  You should have received a copy of the GNU General Public License*/
/*  along with this program.  If not, see <http://www.gnu.org/licenses/>.*/
/**/

#include "gala.h"
#include <glib.h>
#include <stdlib.h>
#include <string.h>
#include <gio/gdesktopappinfo.h>
#include <gio/gio.h>
#include <glib-object.h>

#define GALA_APP_CACHE_DEFAULT_TIMEOUT_SECONDS 3
#if !defined(VALA_STRICT_C)
#if !defined(__clang__) && defined(__GNUC__) && (__GNUC__ >= 14)
#pragma GCC diagnostic warning "-Wincompatible-pointer-types"
#elif defined(__clang__) && (__clang_major__ >= 16)
#pragma clang diagnostic ignored "-Wincompatible-function-pointer-types"
#pragma clang diagnostic ignored "-Wincompatible-pointer-types"
#endif
#endif

enum  {
	GALA_APP_CACHE_0_PROPERTY,
	GALA_APP_CACHE_NUM_PROPERTIES
};
static GParamSpec* gala_app_cache_properties[GALA_APP_CACHE_NUM_PROPERTIES];
#define _g_hash_table_unref0(var) ((var == NULL) ? NULL : (var = (g_hash_table_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _Block1Data Block1Data;
#define _g_thread_unref0(var) ((var == NULL) ? NULL : (var = (g_thread_unref (var), NULL)))
typedef struct _GalaAppCacheRebuildCacheData GalaAppCacheRebuildCacheData;
enum  {
	GALA_APP_CACHE_CHANGED_SIGNAL,
	GALA_APP_CACHE_NUM_SIGNALS
};
static guint gala_app_cache_signals[GALA_APP_CACHE_NUM_SIGNALS] = {0};

struct _GalaAppCachePrivate {
	GHashTable* startup_wm_class_to_id;
	GRecMutex __lock_startup_wm_class_to_id;
	GHashTable* id_to_app;
	GAppInfoMonitor* app_info_monitor;
	guint queued_update_id;
};

struct _Block1Data {
	int _ref_count_;
	GalaAppCache* self;
	GSourceFunc callback;
	gpointer callback_target;
	GDestroyNotify callback_target_destroy_notify;
	gpointer _async_data_;
};

struct _GalaAppCacheRebuildCacheData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GTask* _async_result;
	GalaAppCache* self;
	Block1Data* _data1_;
	GThread* _tmp0_;
	GThread* _tmp1_;
};

static gint GalaAppCache_private_offset;
static gpointer gala_app_cache_parent_class = NULL;

static void gala_app_cache_queue_cache_update (GalaAppCache* self);
static gboolean __lambda4_ (GalaAppCache* self);
static void gala_app_cache_rebuild_cache (GalaAppCache* self,
                                   GAsyncReadyCallback _callback_,
                                   gpointer _user_data_);
static void gala_app_cache_rebuild_cache_finish (GalaAppCache* self,
                                          GAsyncResult* _res_);
static void __lambda6_ (GalaAppCache* self,
                 GObject* obj,
                 GAsyncResult* res);
static void ___lambda6__gasync_ready_callback (GObject* source_object,
                                        GAsyncResult* res,
                                        gpointer self);
static gboolean ___lambda4__gsource_func (gpointer self);
static void gala_app_cache_rebuild_cache_data_free (gpointer _data);
static gboolean gala_app_cache_rebuild_cache_co (GalaAppCacheRebuildCacheData* _data_);
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (void * _userdata_);
static gboolean _gala_app_cache_rebuild_cache_co_gsource_func (gpointer self);
static void __lambda5_ (Block1Data* _data1_);
static void _g_object_unref0_ (gpointer var);
static inline void _g_list_free__g_object_unref0_ (GList* self);
static gpointer ___lambda5__gthread_func (gpointer self);
static GObject * gala_app_cache_constructor (GType type,
                                      guint n_construct_properties,
                                      GObjectConstructParam * construct_properties);
static void _gala_app_cache_queue_cache_update_g_app_info_monitor_changed (GAppInfoMonitor* _sender,
                                                                    gpointer self);
static void gala_app_cache_finalize (GObject * obj);
static GType gala_app_cache_get_type_once (void);

static inline gpointer
gala_app_cache_get_instance_private (GalaAppCache* self)
{
	return G_STRUCT_MEMBER_P (self, GalaAppCache_private_offset);
}

static void
__lambda6_ (GalaAppCache* self,
            GObject* obj,
            GAsyncResult* res)
{
#line 46 "../lib/AppCache.vala"
	g_return_if_fail (res != NULL);
#line 47 "../lib/AppCache.vala"
	gala_app_cache_rebuild_cache_finish (self, res);
#line 48 "../lib/AppCache.vala"
	g_signal_emit (self, gala_app_cache_signals[GALA_APP_CACHE_CHANGED_SIGNAL], 0);
#line 50 "../lib/AppCache.vala"
	self->priv->queued_update_id = (guint) 0;
#line 137 "AppCache.c"
}

static void
___lambda6__gasync_ready_callback (GObject* source_object,
                                   GAsyncResult* res,
                                   gpointer self)
{
#line 46 "../lib/AppCache.vala"
	__lambda6_ ((GalaAppCache*) self, source_object, res);
#line 46 "../lib/AppCache.vala"
	g_object_unref (self);
#line 149 "AppCache.c"
}

static gboolean
__lambda4_ (GalaAppCache* self)
{
	gboolean result;
#line 46 "../lib/AppCache.vala"
	gala_app_cache_rebuild_cache (self, ___lambda6__gasync_ready_callback, g_object_ref (self));
#line 53 "../lib/AppCache.vala"
	result = G_SOURCE_REMOVE;
#line 53 "../lib/AppCache.vala"
	return result;
#line 162 "AppCache.c"
}

static gboolean
___lambda4__gsource_func (gpointer self)
{
	gboolean result;
	result = __lambda4_ ((GalaAppCache*) self);
#line 45 "../lib/AppCache.vala"
	return result;
#line 172 "AppCache.c"
}

static void
gala_app_cache_queue_cache_update (GalaAppCache* self)
{
#line 40 "../lib/AppCache.vala"
	g_return_if_fail (self != NULL);
#line 41 "../lib/AppCache.vala"
	if (self->priv->queued_update_id != ((guint) 0)) {
#line 42 "../lib/AppCache.vala"
		g_source_remove (self->priv->queued_update_id);
#line 184 "AppCache.c"
	}
#line 45 "../lib/AppCache.vala"
	self->priv->queued_update_id = g_timeout_add_seconds_full (G_PRIORITY_DEFAULT, (guint) GALA_APP_CACHE_DEFAULT_TIMEOUT_SECONDS, ___lambda4__gsource_func, g_object_ref (self), g_object_unref);
#line 188 "AppCache.c"
}

static void
gala_app_cache_rebuild_cache_data_free (gpointer _data)
{
	GalaAppCacheRebuildCacheData* _data_;
	_data_ = _data;
#line 18 "../lib/AppCache.vala"
	_g_object_unref0 (_data_->self);
#line 18 "../lib/AppCache.vala"
	g_slice_free (GalaAppCacheRebuildCacheData, _data_);
#line 200 "AppCache.c"
}

static gpointer
_g_object_ref0 (gpointer self)
{
#line 18 "../lib/AppCache.vala"
	return self ? g_object_ref (self) : NULL;
#line 208 "AppCache.c"
}

static void
gala_app_cache_rebuild_cache (GalaAppCache* self,
                              GAsyncReadyCallback _callback_,
                              gpointer _user_data_)
{
	GalaAppCacheRebuildCacheData* _data_;
	GalaAppCache* _tmp0_;
#line 18 "../lib/AppCache.vala"
	g_return_if_fail (self != NULL);
#line 18 "../lib/AppCache.vala"
	_data_ = g_slice_new0 (GalaAppCacheRebuildCacheData);
#line 18 "../lib/AppCache.vala"
	_data_->_async_result = g_task_new (G_OBJECT (self), NULL, _callback_, _user_data_);
#line 18 "../lib/AppCache.vala"
	g_task_set_task_data (_data_->_async_result, _data_, gala_app_cache_rebuild_cache_data_free);
#line 18 "../lib/AppCache.vala"
	_tmp0_ = _g_object_ref0 (self);
#line 18 "../lib/AppCache.vala"
	_data_->self = _tmp0_;
#line 18 "../lib/AppCache.vala"
	gala_app_cache_rebuild_cache_co (_data_);
#line 232 "AppCache.c"
}

static void
gala_app_cache_rebuild_cache_finish (GalaAppCache* self,
                                     GAsyncResult* _res_)
{
	GalaAppCacheRebuildCacheData* _data_;
#line 18 "../lib/AppCache.vala"
	_data_ = g_task_propagate_pointer (G_TASK (_res_), NULL);
#line 242 "AppCache.c"
}

static Block1Data*
block1_data_ref (Block1Data* _data1_)
{
#line 57 "../lib/AppCache.vala"
	g_atomic_int_inc (&_data1_->_ref_count_);
#line 57 "../lib/AppCache.vala"
	return _data1_;
#line 252 "AppCache.c"
}

static void
block1_data_unref (void * _userdata_)
{
	Block1Data* _data1_;
	_data1_ = (Block1Data*) _userdata_;
#line 57 "../lib/AppCache.vala"
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
#line 262 "AppCache.c"
		GalaAppCache* self;
#line 57 "../lib/AppCache.vala"
		self = _data1_->self;
#line 57 "../lib/AppCache.vala"
		(_data1_->callback_target_destroy_notify == NULL) ? NULL : (_data1_->callback_target_destroy_notify (_data1_->callback_target), NULL);
#line 57 "../lib/AppCache.vala"
		_data1_->callback = NULL;
#line 57 "../lib/AppCache.vala"
		_data1_->callback_target = NULL;
#line 57 "../lib/AppCache.vala"
		_data1_->callback_target_destroy_notify = NULL;
#line 57 "../lib/AppCache.vala"
		_g_object_unref0 (self);
#line 57 "../lib/AppCache.vala"
		g_slice_free (Block1Data, _data1_);
#line 278 "AppCache.c"
	}
}

static gboolean
_gala_app_cache_rebuild_cache_co_gsource_func (gpointer self)
{
	gboolean result;
	result = gala_app_cache_rebuild_cache_co (self);
#line 58 "../lib/AppCache.vala"
	return result;
#line 289 "AppCache.c"
}

static void
_g_object_unref0_ (gpointer var)
{
#line 61 "../lib/AppCache.vala"
	(var == NULL) ? NULL : (var = (g_object_unref (var), NULL));
#line 297 "AppCache.c"
}

static inline void
_g_list_free__g_object_unref0_ (GList* self)
{
#line 61 "../lib/AppCache.vala"
	g_list_free_full (self, (GDestroyNotify) _g_object_unref0_);
#line 305 "AppCache.c"
}

static void
__lambda5_ (Block1Data* _data1_)
{
	GalaAppCache* self;
	GSourceFunc _tmp25_;
	gpointer _tmp25__target;
	GDestroyNotify _tmp25__target_destroy_notify;
	GError* _inner_error0_ = NULL;
#line 60 "../lib/AppCache.vala"
	self = _data1_->self;
#line 318 "AppCache.c"
	{
		GHashTable* _tmp0_;
#line 61 "../lib/AppCache.vala"
		_tmp0_ = self->priv->startup_wm_class_to_id;
#line 61 "../lib/AppCache.vala"
		g_rec_mutex_lock (&self->priv->__lock_startup_wm_class_to_id);
#line 325 "AppCache.c"
		{
			GHashTable* _tmp1_;
			GHashTable* _tmp2_;
			GList* app_infos = NULL;
			GList* _tmp3_;
			GList* _tmp4_;
#line 62 "../lib/AppCache.vala"
			_tmp1_ = self->priv->startup_wm_class_to_id;
#line 62 "../lib/AppCache.vala"
			g_hash_table_remove_all (_tmp1_);
#line 63 "../lib/AppCache.vala"
			_tmp2_ = self->priv->id_to_app;
#line 63 "../lib/AppCache.vala"
			g_hash_table_remove_all (_tmp2_);
#line 65 "../lib/AppCache.vala"
			_tmp3_ = g_app_info_get_all ();
#line 65 "../lib/AppCache.vala"
			app_infos = _tmp3_;
#line 67 "../lib/AppCache.vala"
			_tmp4_ = app_infos;
#line 346 "AppCache.c"
			{
				GList* app_collection = NULL;
				GList* app_it = NULL;
#line 67 "../lib/AppCache.vala"
				app_collection = _tmp4_;
#line 67 "../lib/AppCache.vala"
				for (app_it = app_collection; app_it != NULL; app_it = app_it->next) {
#line 354 "AppCache.c"
					GAppInfo* app = NULL;
#line 67 "../lib/AppCache.vala"
					app = (GAppInfo*) app_it->data;
#line 358 "AppCache.c"
					{
						const gchar* id = NULL;
						GAppInfo* _tmp5_;
						const gchar* _tmp6_;
						const gchar* startup_wm_class = NULL;
						GAppInfo* _tmp7_;
						const gchar* _tmp8_;
						GHashTable* _tmp9_;
						const gchar* _tmp10_;
						GAppInfo* _tmp11_;
						GDesktopAppInfo* _tmp12_;
						const gchar* _tmp13_;
						const gchar* old_id = NULL;
						GHashTable* _tmp14_;
						const gchar* _tmp15_;
						gconstpointer _tmp16_;
						gboolean _tmp17_ = FALSE;
						const gchar* _tmp18_;
#line 68 "../lib/AppCache.vala"
						_tmp5_ = app;
#line 68 "../lib/AppCache.vala"
						_tmp6_ = g_app_info_get_id (_tmp5_);
#line 68 "../lib/AppCache.vala"
						id = _tmp6_;
#line 69 "../lib/AppCache.vala"
						_tmp7_ = app;
#line 69 "../lib/AppCache.vala"
						_tmp8_ = g_desktop_app_info_get_startup_wm_class (G_TYPE_CHECK_INSTANCE_CAST (_tmp7_, G_TYPE_DESKTOP_APP_INFO, GDesktopAppInfo));
#line 69 "../lib/AppCache.vala"
						startup_wm_class = _tmp8_;
#line 71 "../lib/AppCache.vala"
						_tmp9_ = self->priv->id_to_app;
#line 71 "../lib/AppCache.vala"
						_tmp10_ = id;
#line 71 "../lib/AppCache.vala"
						_tmp11_ = app;
#line 71 "../lib/AppCache.vala"
						_tmp12_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp11_, G_TYPE_DESKTOP_APP_INFO, GDesktopAppInfo));
#line 71 "../lib/AppCache.vala"
						g_hash_table_insert (_tmp9_, _tmp10_, _tmp12_);
#line 73 "../lib/AppCache.vala"
						_tmp13_ = startup_wm_class;
#line 73 "../lib/AppCache.vala"
						if (_tmp13_ == NULL) {
#line 74 "../lib/AppCache.vala"
							continue;
#line 405 "AppCache.c"
						}
#line 77 "../lib/AppCache.vala"
						_tmp14_ = self->priv->startup_wm_class_to_id;
#line 77 "../lib/AppCache.vala"
						_tmp15_ = startup_wm_class;
#line 77 "../lib/AppCache.vala"
						_tmp16_ = g_hash_table_lookup (_tmp14_, _tmp15_);
#line 77 "../lib/AppCache.vala"
						old_id = (const gchar*) _tmp16_;
#line 78 "../lib/AppCache.vala"
						_tmp18_ = old_id;
#line 78 "../lib/AppCache.vala"
						if (_tmp18_ == NULL) {
#line 78 "../lib/AppCache.vala"
							_tmp17_ = TRUE;
#line 421 "AppCache.c"
						} else {
							const gchar* _tmp19_;
							const gchar* _tmp20_;
#line 78 "../lib/AppCache.vala"
							_tmp19_ = id;
#line 78 "../lib/AppCache.vala"
							_tmp20_ = startup_wm_class;
#line 78 "../lib/AppCache.vala"
							_tmp17_ = g_strcmp0 (_tmp19_, _tmp20_) == 0;
#line 431 "AppCache.c"
						}
#line 78 "../lib/AppCache.vala"
						if (_tmp17_) {
#line 435 "AppCache.c"
							GHashTable* _tmp21_;
							const gchar* _tmp22_;
							const gchar* _tmp23_;
#line 79 "../lib/AppCache.vala"
							_tmp21_ = self->priv->startup_wm_class_to_id;
#line 79 "../lib/AppCache.vala"
							_tmp22_ = startup_wm_class;
#line 79 "../lib/AppCache.vala"
							_tmp23_ = id;
#line 79 "../lib/AppCache.vala"
							g_hash_table_insert (_tmp21_, _tmp22_, _tmp23_);
#line 447 "AppCache.c"
						}
					}
				}
			}
#line 61 "../lib/AppCache.vala"
			(app_infos == NULL) ? NULL : (app_infos = (_g_list_free__g_object_unref0_ (app_infos), NULL));
#line 454 "AppCache.c"
		}
		__finally0:
		{
			GHashTable* _tmp24_;
#line 61 "../lib/AppCache.vala"
			_tmp24_ = self->priv->startup_wm_class_to_id;
#line 61 "../lib/AppCache.vala"
			g_rec_mutex_unlock (&self->priv->__lock_startup_wm_class_to_id);
#line 463 "AppCache.c"
		}
#line 61 "../lib/AppCache.vala"
		if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 61 "../lib/AppCache.vala"
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
#line 61 "../lib/AppCache.vala"
			g_clear_error (&_inner_error0_);
#line 61 "../lib/AppCache.vala"
			return;
#line 473 "AppCache.c"
		}
	}
#line 84 "../lib/AppCache.vala"
	_tmp25_ = _data1_->callback;
#line 84 "../lib/AppCache.vala"
	_tmp25__target = _data1_->callback_target;
#line 84 "../lib/AppCache.vala"
	_tmp25__target_destroy_notify = _data1_->callback_target_destroy_notify;
#line 84 "../lib/AppCache.vala"
	_data1_->callback = NULL;
#line 84 "../lib/AppCache.vala"
	_data1_->callback_target = NULL;
#line 84 "../lib/AppCache.vala"
	_data1_->callback_target_destroy_notify = NULL;
#line 84 "../lib/AppCache.vala"
	g_idle_add_full (G_PRIORITY_DEFAULT_IDLE, _tmp25_, _tmp25__target, _tmp25__target_destroy_notify);
#line 490 "AppCache.c"
}

static gpointer
___lambda5__gthread_func (gpointer self)
{
	gpointer result;
#line 60 "../lib/AppCache.vala"
	__lambda5_ (self);
#line 499 "AppCache.c"
	result = NULL;
#line 60 "../lib/AppCache.vala"
	block1_data_unref (self);
#line 60 "../lib/AppCache.vala"
	return result;
#line 505 "AppCache.c"
}

static gboolean
gala_app_cache_rebuild_cache_co (GalaAppCacheRebuildCacheData* _data_)
{
#line 57 "../lib/AppCache.vala"
	switch (_data_->_state_) {
#line 57 "../lib/AppCache.vala"
		case 0:
#line 515 "AppCache.c"
		goto _state_0;
#line 57 "../lib/AppCache.vala"
		case 1:
#line 519 "AppCache.c"
		goto _state_1;
		default:
#line 57 "../lib/AppCache.vala"
		g_assert_not_reached ();
#line 524 "AppCache.c"
	}
	_state_0:
#line 57 "../lib/AppCache.vala"
	_data_->_data1_ = g_slice_new0 (Block1Data);
#line 57 "../lib/AppCache.vala"
	_data_->_data1_->_ref_count_ = 1;
#line 57 "../lib/AppCache.vala"
	_data_->_data1_->self = g_object_ref (_data_->self);
#line 57 "../lib/AppCache.vala"
	_data_->_data1_->_async_data_ = _data_;
#line 58 "../lib/AppCache.vala"
	_data_->_data1_->callback = _gala_app_cache_rebuild_cache_co_gsource_func;
#line 58 "../lib/AppCache.vala"
	_data_->_data1_->callback_target = _data_;
#line 58 "../lib/AppCache.vala"
	_data_->_data1_->callback_target_destroy_notify = NULL;
#line 60 "../lib/AppCache.vala"
	_data_->_tmp0_ = g_thread_new ("rebuild_cache", ___lambda5__gthread_func, block1_data_ref (_data_->_data1_));
#line 60 "../lib/AppCache.vala"
	_data_->_tmp1_ = _data_->_tmp0_;
#line 60 "../lib/AppCache.vala"
	_g_thread_unref0 (_data_->_tmp1_);
#line 87 "../lib/AppCache.vala"
	_data_->_state_ = 1;
#line 87 "../lib/AppCache.vala"
	return FALSE;
#line 551 "AppCache.c"
	_state_1:
	;
#line 57 "../lib/AppCache.vala"
	block1_data_unref (_data_->_data1_);
#line 57 "../lib/AppCache.vala"
	_data_->_data1_ = NULL;
#line 57 "../lib/AppCache.vala"
	g_task_return_pointer (_data_->_async_result, _data_, NULL);
#line 57 "../lib/AppCache.vala"
	if (_data_->_state_ != 0) {
#line 57 "../lib/AppCache.vala"
		while (!g_task_get_completed (_data_->_async_result)) {
#line 57 "../lib/AppCache.vala"
			g_main_context_iteration (g_task_get_context (_data_->_async_result), TRUE);
#line 566 "AppCache.c"
		}
	}
#line 57 "../lib/AppCache.vala"
	g_object_unref (_data_->_async_result);
#line 57 "../lib/AppCache.vala"
	return FALSE;
#line 573 "AppCache.c"
}

GDesktopAppInfo*
gala_app_cache_lookup_id (GalaAppCache* self,
                          const gchar* id)
{
	GHashTable* _tmp0_;
	gconstpointer _tmp1_;
	GDesktopAppInfo* result;
#line 90 "../lib/AppCache.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 91 "../lib/AppCache.vala"
	if (id == NULL) {
#line 92 "../lib/AppCache.vala"
		result = NULL;
#line 92 "../lib/AppCache.vala"
		return result;
#line 591 "AppCache.c"
	}
#line 95 "../lib/AppCache.vala"
	_tmp0_ = self->priv->id_to_app;
#line 95 "../lib/AppCache.vala"
	_tmp1_ = g_hash_table_lookup (_tmp0_, id);
#line 95 "../lib/AppCache.vala"
	result = (GDesktopAppInfo*) _tmp1_;
#line 95 "../lib/AppCache.vala"
	return result;
#line 601 "AppCache.c"
}

GDesktopAppInfo*
gala_app_cache_lookup_startup_wmclass (GalaAppCache* self,
                                       const gchar* wm_class)
{
	const gchar* id = NULL;
	GHashTable* _tmp0_;
	gconstpointer _tmp1_;
	const gchar* _tmp2_;
	GHashTable* _tmp3_;
	const gchar* _tmp4_;
	gconstpointer _tmp5_;
	GDesktopAppInfo* _tmp6_;
	GDesktopAppInfo* result;
#line 98 "../lib/AppCache.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 99 "../lib/AppCache.vala"
	if (wm_class == NULL) {
#line 100 "../lib/AppCache.vala"
		result = NULL;
#line 100 "../lib/AppCache.vala"
		return result;
#line 625 "AppCache.c"
	}
#line 103 "../lib/AppCache.vala"
	_tmp0_ = self->priv->startup_wm_class_to_id;
#line 103 "../lib/AppCache.vala"
	_tmp1_ = g_hash_table_lookup (_tmp0_, wm_class);
#line 103 "../lib/AppCache.vala"
	id = (const gchar*) _tmp1_;
#line 104 "../lib/AppCache.vala"
	_tmp2_ = id;
#line 104 "../lib/AppCache.vala"
	if (_tmp2_ == NULL) {
#line 105 "../lib/AppCache.vala"
		result = NULL;
#line 105 "../lib/AppCache.vala"
		return result;
#line 641 "AppCache.c"
	}
#line 108 "../lib/AppCache.vala"
	_tmp3_ = self->priv->id_to_app;
#line 108 "../lib/AppCache.vala"
	_tmp4_ = id;
#line 108 "../lib/AppCache.vala"
	_tmp5_ = g_hash_table_lookup (_tmp3_, _tmp4_);
#line 108 "../lib/AppCache.vala"
	_tmp6_ = _g_object_ref0 ((GDesktopAppInfo*) _tmp5_);
#line 108 "../lib/AppCache.vala"
	result = _tmp6_;
#line 108 "../lib/AppCache.vala"
	return result;
#line 655 "AppCache.c"
}

GalaAppCache*
gala_app_cache_construct (GType object_type)
{
	GalaAppCache * self = NULL;
#line 18 "../lib/AppCache.vala"
	self = (GalaAppCache*) g_object_new (object_type, NULL);
#line 18 "../lib/AppCache.vala"
	return self;
#line 666 "AppCache.c"
}

GalaAppCache*
gala_app_cache_new (void)
{
#line 18 "../lib/AppCache.vala"
	return gala_app_cache_construct (GALA_TYPE_APP_CACHE);
#line 674 "AppCache.c"
}

static void
_gala_app_cache_queue_cache_update_g_app_info_monitor_changed (GAppInfoMonitor* _sender,
                                                               gpointer self)
{
#line 35 "../lib/AppCache.vala"
	gala_app_cache_queue_cache_update ((GalaAppCache*) self);
#line 683 "AppCache.c"
}

static GObject *
gala_app_cache_constructor (GType type,
                            guint n_construct_properties,
                            GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	GalaAppCache * self;
	GHashFunc _tmp0_;
	GEqualFunc _tmp1_;
	GHashTable* _tmp2_;
	GHashFunc _tmp3_;
	GEqualFunc _tmp4_;
	GHashTable* _tmp5_;
	GAppInfoMonitor* _tmp6_;
	GAppInfoMonitor* _tmp7_;
#line 30 "../lib/AppCache.vala"
	parent_class = G_OBJECT_CLASS (gala_app_cache_parent_class);
#line 30 "../lib/AppCache.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 30 "../lib/AppCache.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GALA_TYPE_APP_CACHE, GalaAppCache);
#line 31 "../lib/AppCache.vala"
	_tmp0_ = g_str_hash;
#line 31 "../lib/AppCache.vala"
	_tmp1_ = g_str_equal;
#line 31 "../lib/AppCache.vala"
	_tmp2_ = g_hash_table_new_full (_tmp0_, _tmp1_, NULL, NULL);
#line 31 "../lib/AppCache.vala"
	_g_hash_table_unref0 (self->priv->startup_wm_class_to_id);
#line 31 "../lib/AppCache.vala"
	self->priv->startup_wm_class_to_id = _tmp2_;
#line 32 "../lib/AppCache.vala"
	_tmp3_ = g_str_hash;
#line 32 "../lib/AppCache.vala"
	_tmp4_ = g_str_equal;
#line 32 "../lib/AppCache.vala"
	_tmp5_ = g_hash_table_new_full (_tmp3_, _tmp4_, NULL, _g_object_unref0_);
#line 32 "../lib/AppCache.vala"
	_g_hash_table_unref0 (self->priv->id_to_app);
#line 32 "../lib/AppCache.vala"
	self->priv->id_to_app = _tmp5_;
#line 34 "../lib/AppCache.vala"
	_tmp6_ = g_app_info_monitor_get ();
#line 34 "../lib/AppCache.vala"
	_g_object_unref0 (self->priv->app_info_monitor);
#line 34 "../lib/AppCache.vala"
	self->priv->app_info_monitor = _tmp6_;
#line 35 "../lib/AppCache.vala"
	_tmp7_ = self->priv->app_info_monitor;
#line 35 "../lib/AppCache.vala"
	g_signal_connect_object (_tmp7_, "changed", (GCallback) _gala_app_cache_queue_cache_update_g_app_info_monitor_changed, self, 0);
#line 37 "../lib/AppCache.vala"
	gala_app_cache_rebuild_cache (self, NULL, NULL);
#line 30 "../lib/AppCache.vala"
	return obj;
#line 742 "AppCache.c"
}

static void
gala_app_cache_class_init (GalaAppCacheClass * klass,
                           gpointer klass_data)
{
#line 18 "../lib/AppCache.vala"
	gala_app_cache_parent_class = g_type_class_peek_parent (klass);
#line 18 "../lib/AppCache.vala"
	g_type_class_adjust_private_offset (klass, &GalaAppCache_private_offset);
#line 18 "../lib/AppCache.vala"
	G_OBJECT_CLASS (klass)->constructor = gala_app_cache_constructor;
#line 18 "../lib/AppCache.vala"
	G_OBJECT_CLASS (klass)->finalize = gala_app_cache_finalize;
#line 18 "../lib/AppCache.vala"
	gala_app_cache_signals[GALA_APP_CACHE_CHANGED_SIGNAL] = g_signal_new ("changed", GALA_TYPE_APP_CACHE, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
#line 759 "AppCache.c"
}

static void
gala_app_cache_instance_init (GalaAppCache * self,
                              gpointer klass)
{
#line 18 "../lib/AppCache.vala"
	self->priv = gala_app_cache_get_instance_private (self);
#line 23 "../lib/AppCache.vala"
	g_rec_mutex_init (&self->priv->__lock_startup_wm_class_to_id);
#line 28 "../lib/AppCache.vala"
	self->priv->queued_update_id = (guint) 0;
#line 772 "AppCache.c"
}

static void
gala_app_cache_finalize (GObject * obj)
{
	GalaAppCache * self;
#line 18 "../lib/AppCache.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GALA_TYPE_APP_CACHE, GalaAppCache);
#line 23 "../lib/AppCache.vala"
	g_rec_mutex_clear (&self->priv->__lock_startup_wm_class_to_id);
#line 23 "../lib/AppCache.vala"
	_g_hash_table_unref0 (self->priv->startup_wm_class_to_id);
#line 24 "../lib/AppCache.vala"
	_g_hash_table_unref0 (self->priv->id_to_app);
#line 26 "../lib/AppCache.vala"
	_g_object_unref0 (self->priv->app_info_monitor);
#line 18 "../lib/AppCache.vala"
	G_OBJECT_CLASS (gala_app_cache_parent_class)->finalize (obj);
#line 791 "AppCache.c"
}

 G_GNUC_NO_INLINE static GType
gala_app_cache_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (GalaAppCacheClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gala_app_cache_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GalaAppCache), 0, (GInstanceInitFunc) gala_app_cache_instance_init, NULL };
	GType gala_app_cache_type_id;
	gala_app_cache_type_id = g_type_register_static (G_TYPE_OBJECT, "GalaAppCache", &g_define_type_info, 0);
	GalaAppCache_private_offset = g_type_add_instance_private (gala_app_cache_type_id, sizeof (GalaAppCachePrivate));
	return gala_app_cache_type_id;
}

GType
gala_app_cache_get_type (void)
{
	static gsize gala_app_cache_type_id__once = 0;
	if (g_once_init_enter (&gala_app_cache_type_id__once)) {
		GType gala_app_cache_type_id;
		gala_app_cache_type_id = gala_app_cache_get_type_once ();
		g_once_init_leave (&gala_app_cache_type_id__once, gala_app_cache_type_id);
	}
	return gala_app_cache_type_id__once;
}
