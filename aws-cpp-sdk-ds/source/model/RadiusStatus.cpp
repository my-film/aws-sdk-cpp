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
#include <aws/ds/model/RadiusStatus.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int Creating_HASH = HashingUtils::HashString("Creating");
static const int Completed_HASH = HashingUtils::HashString("Completed");
static const int Failed_HASH = HashingUtils::HashString("Failed");

namespace Aws
{
namespace DirectoryService
{
namespace Model
{
namespace RadiusStatusMapper
{
RadiusStatus GetRadiusStatusForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == Creating_HASH)
  {
    return RadiusStatus::Creating;
  }
  else if (hashCode == Completed_HASH)
  {
    return RadiusStatus::Completed;
  }
  else if (hashCode == Failed_HASH)
  {
    return RadiusStatus::Failed;
  }

  return RadiusStatus::NOT_SET;
}

Aws::String GetNameForRadiusStatus(RadiusStatus value)
{
  switch(value)
  {
  case RadiusStatus::Creating:
    return "Creating";
  case RadiusStatus::Completed:
    return "Completed";
  case RadiusStatus::Failed:
    return "Failed";
  default:
    return "";
  }
}

} // namespace RadiusStatusMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
