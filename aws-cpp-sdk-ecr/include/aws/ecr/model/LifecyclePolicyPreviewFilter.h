﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/TagStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ECR
{
namespace Model
{

  /**
   * <p>The filter for the lifecycle policy preview.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/LifecyclePolicyPreviewFilter">AWS
   * API Reference</a></p>
   */
  class AWS_ECR_API LifecyclePolicyPreviewFilter
  {
  public:
    LifecyclePolicyPreviewFilter();
    LifecyclePolicyPreviewFilter(Aws::Utils::Json::JsonView jsonValue);
    LifecyclePolicyPreviewFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The tag status of the image.</p>
     */
    inline const TagStatus& GetTagStatus() const{ return m_tagStatus; }

    /**
     * <p>The tag status of the image.</p>
     */
    inline bool TagStatusHasBeenSet() const { return m_tagStatusHasBeenSet; }

    /**
     * <p>The tag status of the image.</p>
     */
    inline void SetTagStatus(const TagStatus& value) { m_tagStatusHasBeenSet = true; m_tagStatus = value; }

    /**
     * <p>The tag status of the image.</p>
     */
    inline void SetTagStatus(TagStatus&& value) { m_tagStatusHasBeenSet = true; m_tagStatus = std::move(value); }

    /**
     * <p>The tag status of the image.</p>
     */
    inline LifecyclePolicyPreviewFilter& WithTagStatus(const TagStatus& value) { SetTagStatus(value); return *this;}

    /**
     * <p>The tag status of the image.</p>
     */
    inline LifecyclePolicyPreviewFilter& WithTagStatus(TagStatus&& value) { SetTagStatus(std::move(value)); return *this;}

  private:

    TagStatus m_tagStatus;
    bool m_tagStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
