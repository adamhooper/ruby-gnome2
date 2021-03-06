# Copyright (C) 2016  Ruby-GNOME2 Project Team
#
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2.1 of the License, or (at your option) any later version.
#
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public
# License along with this library; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA

module GdkPixbuf
#  class Pixbuf
    class Loader < GObjectIntrospection::Loader
      private
      def load_function_info(info)
        name = info.name
        case name
        when "init"
          # ignore
        else
          super
        end
      end

      def pre_load(repository, namespace)
      end

      def post_load(repository, namespace)
        require_libraries
      end

      def require_libraries
        require "gdk_pixbuf2/pixbuf"
      end

      def initialize_post(object)
        super
        return unless object.is_a?(GLib::Object)
        self.class.reference_gobject(object, :sink => true)
      end
    end
#  end
end
