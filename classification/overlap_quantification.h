//
// Expansion Hunter
// Copyright (c) 2016 Illumina, Inc.
//
// Author: Egor Dolzhenko <edolzhenko@illumina.com>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#pragma once

#include <cstdint>

#include "graphs/graph_mapping.h"

class StrOverlapQuantifier {
 public:
  StrOverlapQuantifier(int32_t left_flank_id, int32_t repeat_unit_id,
                       int32_t right_flank_id, int32_t str_unit_len)
      : left_flank_id_(left_flank_id),
        repeat_unit_id_(repeat_unit_id),
        right_flank_id_(right_flank_id),
        str_unit_len_(str_unit_len) {}

  int32_t NumUnitsOverlapped(const GraphMapping& mapping) const;

 private:
  int32_t left_flank_id_;
  int32_t repeat_unit_id_;
  int32_t right_flank_id_;
  int32_t str_unit_len_;
};