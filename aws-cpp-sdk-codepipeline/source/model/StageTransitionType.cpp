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
#include <aws/codepipeline/model/StageTransitionType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int Inbound_HASH = HashingUtils::HashString("Inbound");
static const int Outbound_HASH = HashingUtils::HashString("Outbound");

namespace Aws
{
namespace CodePipeline
{
namespace Model
{
namespace StageTransitionTypeMapper
{
StageTransitionType GetStageTransitionTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == Inbound_HASH)
  {
    return StageTransitionType::Inbound;
  }
  else if (hashCode == Outbound_HASH)
  {
    return StageTransitionType::Outbound;
  }

  return StageTransitionType::NOT_SET;
}

Aws::String GetNameForStageTransitionType(StageTransitionType value)
{
  switch(value)
  {
  case StageTransitionType::Inbound:
    return "Inbound";
  case StageTransitionType::Outbound:
    return "Outbound";
  default:
    return "";
  }
}

} // namespace StageTransitionTypeMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
