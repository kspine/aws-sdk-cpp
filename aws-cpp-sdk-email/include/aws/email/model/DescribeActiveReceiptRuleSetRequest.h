﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to return the metadata and receipt rules for the receipt
   * rule set that is currently active. You use receipt rule sets to receive email
   * with Amazon SES. For more information, see the <a
   * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-concepts.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DescribeActiveReceiptRuleSetRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API DescribeActiveReceiptRuleSetRequest : public SESRequest
  {
  public:
    DescribeActiveReceiptRuleSetRequest();
    Aws::String SerializePayload() const override;


  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:
  };

} // namespace Model
} // namespace SES
} // namespace Aws
