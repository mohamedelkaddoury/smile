//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

cplusplus	{{
#include <inet/linklayer/ideal/IdealMacFrame_m.h>
#include "IRangingWirelessNic.h"

using IdealMacFramePointer = const inet::IdealMacFrame*;
}}

namespace smile;

class noncobject IRangingWirelessNic::IdealRxCompletionStatus;
class noncobject IdealMacFramePointer;

class IdealRxCompletion {
    IRangingWirelessNic::IdealRxCompletionStatus status = IRangingWirelessNic::IdealRxCompletionStatus::SUCCESS;
    simtime_t operationBeginClockTimestamp = 0;
    IdealMacFramePointer frame = nullptr;
}