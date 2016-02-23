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
#include <aws/ec2/model/AutoPlacement.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int on_HASH = HashingUtils::HashString("on");
static const int off_HASH = HashingUtils::HashString("off");

namespace Aws
{
namespace EC2
{
namespace Model
{
namespace AutoPlacementMapper
{
AutoPlacement GetAutoPlacementForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == on_HASH)
  {
    return AutoPlacement::on;
  }
  else if (hashCode == off_HASH)
  {
    return AutoPlacement::off;
  }

  return AutoPlacement::NOT_SET;
}

Aws::String GetNameForAutoPlacement(AutoPlacement value)
{
  switch(value)
  {
  case AutoPlacement::on:
    return "on";
  case AutoPlacement::off:
    return "off";
  default:
    return "";
  }
}

} // namespace AutoPlacementMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
