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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API AssociateVpcCidrBlockRequest : public EC2Request
  {
  public:
    AssociateVpcCidrBlockRequest();
    Aws::String SerializePayload() const override;


  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:
    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline AssociateVpcCidrBlockRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline AssociateVpcCidrBlockRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline AssociateVpcCidrBlockRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}

    /**
     * <p>Requests an Amazon-provided IPv6 CIDR block with a /56 prefix length for the
     * VPC. You cannot specify the range of IPv6 addresses, or the size of the CIDR
     * block.</p>
     */
    inline bool GetAmazonProvidedIpv6CidrBlock() const{ return m_amazonProvidedIpv6CidrBlock; }

    /**
     * <p>Requests an Amazon-provided IPv6 CIDR block with a /56 prefix length for the
     * VPC. You cannot specify the range of IPv6 addresses, or the size of the CIDR
     * block.</p>
     */
    inline void SetAmazonProvidedIpv6CidrBlock(bool value) { m_amazonProvidedIpv6CidrBlockHasBeenSet = true; m_amazonProvidedIpv6CidrBlock = value; }

    /**
     * <p>Requests an Amazon-provided IPv6 CIDR block with a /56 prefix length for the
     * VPC. You cannot specify the range of IPv6 addresses, or the size of the CIDR
     * block.</p>
     */
    inline AssociateVpcCidrBlockRequest& WithAmazonProvidedIpv6CidrBlock(bool value) { SetAmazonProvidedIpv6CidrBlock(value); return *this;}

  private:
    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
    bool m_amazonProvidedIpv6CidrBlock;
    bool m_amazonProvidedIpv6CidrBlockHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
