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

#include "Clock.h"
#include <inet/common/INETDefs.h>

namespace smile {

Define_Module(Clock);

int Clock::numInitStages() const
{
  return inet::INITSTAGE_LOCAL + 1;
}

omnetpp::SimTime Clock::getClockTimestamp()
{
  throw omnetpp::cRuntimeError("Called default Clock::getClockTimestamp() implementation");
}

Clock::OptionalSimTime Clock::convertToSimulationTimestamp(const omnetpp::SimTime&)
{
  throw omnetpp::cRuntimeError("Called default Clock::convertToSimulationTimestamp() implementation");
}

}  // namespace smile
