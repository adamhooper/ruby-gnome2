/* -*- c-file-style: "ruby"; indent-tabs-mode: nil -*- */
/*
 *  Copyright (C) 2015  Ruby-GNOME2 Project Team
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *  MA  02110-1301  USA
 */

#ifndef RB_GTK3_PRIVATE_H
#define RB_GTK3_PRIVATE_H

#include "rb-gtk3.h"

G_GNUC_INTERNAL void rbgtk3_class_init_func(gpointer g_class, gpointer class_data);
G_GNUC_INTERNAL void rbgtk3_initialize(VALUE self);

G_GNUC_INTERNAL void rbgtk3_cell_layout_init(void);
G_GNUC_INTERNAL void rbgtk3_container_init(void);
G_GNUC_INTERNAL void rbgtk3_tree_model_init(void);
G_GNUC_INTERNAL void rbgtk3_tree_view_init(void);
G_GNUC_INTERNAL void rbgtk3_widget_init(void);

#endif
