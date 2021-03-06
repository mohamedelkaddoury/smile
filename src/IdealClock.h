//
// Copyright (C) 2018 Tomasz Jankowski <t.jankowski AT pwr.edu.pl>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
//
#pragma once

#include <omnetpp.h>
#include "Clock.h"

namespace smile {

class IdealClock : public Clock
{
 public:
  IdealClock() = default;
  IdealClock(const IdealClock& source) = delete;
  IdealClock(IdealClock&& source) = delete;
  ~IdealClock() override = default;

  IdealClock& operator=(const IdealClock& source) = delete;
  IdealClock& operator=(IdealClock&& source) = delete;

  omnetpp::SimTime getClockTimestamp() override;
  OptionalSimTime convertToSimulationTimestamp(const omnetpp::SimTime& timestamp) override;
};

}  // namespace smile
