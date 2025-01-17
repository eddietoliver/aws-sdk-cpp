﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3-crt/model/OwnershipControlsRule.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Crt
{
namespace Model
{

  /**
   * <p>The container element for a bucket's ownership controls.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/OwnershipControls">AWS
   * API Reference</a></p>
   */
  class AWS_S3CRT_API OwnershipControls
  {
  public:
    OwnershipControls();
    OwnershipControls(const Aws::Utils::Xml::XmlNode& xmlNode);
    OwnershipControls& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The container element for an ownership control rule.</p>
     */
    inline const Aws::Vector<OwnershipControlsRule>& GetRules() const{ return m_rules; }

    /**
     * <p>The container element for an ownership control rule.</p>
     */
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }

    /**
     * <p>The container element for an ownership control rule.</p>
     */
    inline void SetRules(const Aws::Vector<OwnershipControlsRule>& value) { m_rulesHasBeenSet = true; m_rules = value; }

    /**
     * <p>The container element for an ownership control rule.</p>
     */
    inline void SetRules(Aws::Vector<OwnershipControlsRule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }

    /**
     * <p>The container element for an ownership control rule.</p>
     */
    inline OwnershipControls& WithRules(const Aws::Vector<OwnershipControlsRule>& value) { SetRules(value); return *this;}

    /**
     * <p>The container element for an ownership control rule.</p>
     */
    inline OwnershipControls& WithRules(Aws::Vector<OwnershipControlsRule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>The container element for an ownership control rule.</p>
     */
    inline OwnershipControls& AddRules(const OwnershipControlsRule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }

    /**
     * <p>The container element for an ownership control rule.</p>
     */
    inline OwnershipControls& AddRules(OwnershipControlsRule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<OwnershipControlsRule> m_rules;
    bool m_rulesHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
