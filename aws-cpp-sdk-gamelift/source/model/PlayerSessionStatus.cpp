/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/gamelift/model/PlayerSessionStatus.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int RESERVED_HASH = HashingUtils::HashString("RESERVED");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int TIMEDOUT_HASH = HashingUtils::HashString("TIMEDOUT");

namespace Aws
{
namespace GameLift
{
namespace Model
{
namespace PlayerSessionStatusMapper
{
PlayerSessionStatus GetPlayerSessionStatusForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == RESERVED_HASH)
  {
    return PlayerSessionStatus::RESERVED;
  }
  else if (hashCode == ACTIVE_HASH)
  {
    return PlayerSessionStatus::ACTIVE;
  }
  else if (hashCode == COMPLETED_HASH)
  {
    return PlayerSessionStatus::COMPLETED;
  }
  else if (hashCode == TIMEDOUT_HASH)
  {
    return PlayerSessionStatus::TIMEDOUT;
  }

  return PlayerSessionStatus::NOT_SET;
}

Aws::String GetNameForPlayerSessionStatus(PlayerSessionStatus value)
{
  switch(value)
  {
  case PlayerSessionStatus::RESERVED:
    return "RESERVED";
  case PlayerSessionStatus::ACTIVE:
    return "ACTIVE";
  case PlayerSessionStatus::COMPLETED:
    return "COMPLETED";
  case PlayerSessionStatus::TIMEDOUT:
    return "TIMEDOUT";
  default:
    return "";
  }
}

} // namespace PlayerSessionStatusMapper
} // namespace Model
} // namespace GameLift
} // namespace Aws
