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
#include <aws/waf/model/IPSetDescriptorType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int IPV4_HASH = HashingUtils::HashString("IPV4");

namespace Aws
{
namespace WAF
{
namespace Model
{
namespace IPSetDescriptorTypeMapper
{
IPSetDescriptorType GetIPSetDescriptorTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == IPV4_HASH)
  {
    return IPSetDescriptorType::IPV4;
  }

  return IPSetDescriptorType::NOT_SET;
}

Aws::String GetNameForIPSetDescriptorType(IPSetDescriptorType value)
{
  switch(value)
  {
  case IPSetDescriptorType::IPV4:
    return "IPV4";
  default:
    return "";
  }
}

} // namespace IPSetDescriptorTypeMapper
} // namespace Model
} // namespace WAF
} // namespace Aws
