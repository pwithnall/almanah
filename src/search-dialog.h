/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 8; tab-width: 8 -*- */
/*
 * Almanah
 * Copyright (C) Philip Withnall 2008 <philip@tecnocode.co.uk>
 * 
 * Almanah is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Almanah is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Almanah.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ALMANAH_SEARCH_DIALOG_H
#define ALMANAH_SEARCH_DIALOG_H

#include <glib.h>
#include <glib-object.h>

G_BEGIN_DECLS

#define ALMANAH_TYPE_SEARCH_DIALOG		(almanah_search_dialog_get_type ())
#define ALMANAH_SEARCH_DIALOG(o)		(G_TYPE_CHECK_INSTANCE_CAST ((o), ALMANAH_TYPE_SEARCH_DIALOG, AlmanahSearchDialog))
#define ALMANAH_SEARCH_DIALOG_CLASS(k)		(G_TYPE_CHECK_CLASS_CAST((k), ALMANAH_TYPE_SEARCH_DIALOG, AlmanahSearchDialogClass))
#define ALMANAH_IS_SEARCH_DIALOG(o)		(G_TYPE_CHECK_INSTANCE_TYPE ((o), ALMANAH_TYPE_SEARCH_DIALOG))
#define ALMANAH_IS_SEARCH_DIALOG_CLASS(k)	(G_TYPE_CHECK_CLASS_TYPE ((k), ALMANAH_TYPE_SEARCH_DIALOG))
#define ALMANAH_SEARCH_DIALOG_GET_CLASS(o)	(G_TYPE_INSTANCE_GET_CLASS ((o), ALMANAH_TYPE_SEARCH_DIALOG, AlmanahSearchDialogClass))

typedef struct _AlmanahSearchDialogPrivate	AlmanahSearchDialogPrivate;

typedef struct {
	GtkDialog parent;
	AlmanahSearchDialogPrivate *priv;
} AlmanahSearchDialog;

typedef struct {
	GtkDialogClass parent;
} AlmanahSearchDialogClass;

GType almanah_search_dialog_get_type (void);
AlmanahSearchDialog *almanah_search_dialog_new (void);

G_END_DECLS

#endif /* !ALMANAH_SEARCH_DIALOG_H */
