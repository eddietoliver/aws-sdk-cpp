﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/FirehoseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Firehose
{
namespace Model
{

  /**
   */
  class AWS_FIREHOSE_API ListTagsForDeliveryStreamRequest : public FirehoseRequest
  {
  public:
    ListTagsForDeliveryStreamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForDeliveryStream"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the delivery stream whose tags you want to list.</p>
     */
    inline const Aws::String& GetDeliveryStreamName() const{ return m_deliveryStreamName; }

    /**
     * <p>The name of the delivery stream whose tags you want to list.</p>
     */
    inline bool DeliveryStreamNameHasBeenSet() const { return m_deliveryStreamNameHasBeenSet; }

    /**
     * <p>The name of the delivery stream whose tags you want to list.</p>
     */
    inline void SetDeliveryStreamName(const Aws::String& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = value; }

    /**
     * <p>The name of the delivery stream whose tags you want to list.</p>
     */
    inline void SetDeliveryStreamName(Aws::String&& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = std::move(value); }

    /**
     * <p>The name of the delivery stream whose tags you want to list.</p>
     */
    inline void SetDeliveryStreamName(const char* value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName.assign(value); }

    /**
     * <p>The name of the delivery stream whose tags you want to list.</p>
     */
    inline ListTagsForDeliveryStreamRequest& WithDeliveryStreamName(const Aws::String& value) { SetDeliveryStreamName(value); return *this;}

    /**
     * <p>The name of the delivery stream whose tags you want to list.</p>
     */
    inline ListTagsForDeliveryStreamRequest& WithDeliveryStreamName(Aws::String&& value) { SetDeliveryStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the delivery stream whose tags you want to list.</p>
     */
    inline ListTagsForDeliveryStreamRequest& WithDeliveryStreamName(const char* value) { SetDeliveryStreamName(value); return *this;}


    /**
     * <p>The key to use as the starting point for the list of tags. If you set this
     * parameter, <code>ListTagsForDeliveryStream</code> gets all tags that occur after
     * <code>ExclusiveStartTagKey</code>.</p>
     */
    inline const Aws::String& GetExclusiveStartTagKey() const{ return m_exclusiveStartTagKey; }

    /**
     * <p>The key to use as the starting point for the list of tags. If you set this
     * parameter, <code>ListTagsForDeliveryStream</code> gets all tags that occur after
     * <code>ExclusiveStartTagKey</code>.</p>
     */
    inline bool ExclusiveStartTagKeyHasBeenSet() const { return m_exclusiveStartTagKeyHasBeenSet; }

    /**
     * <p>The key to use as the starting point for the list of tags. If you set this
     * parameter, <code>ListTagsForDeliveryStream</code> gets all tags that occur after
     * <code>ExclusiveStartTagKey</code>.</p>
     */
    inline void SetExclusiveStartTagKey(const Aws::String& value) { m_exclusiveStartTagKeyHasBeenSet = true; m_exclusiveStartTagKey = value; }

    /**
     * <p>The key to use as the starting point for the list of tags. If you set this
     * parameter, <code>ListTagsForDeliveryStream</code> gets all tags that occur after
     * <code>ExclusiveStartTagKey</code>.</p>
     */
    inline void SetExclusiveStartTagKey(Aws::String&& value) { m_exclusiveStartTagKeyHasBeenSet = true; m_exclusiveStartTagKey = std::move(value); }

    /**
     * <p>The key to use as the starting point for the list of tags. If you set this
     * parameter, <code>ListTagsForDeliveryStream</code> gets all tags that occur after
     * <code>ExclusiveStartTagKey</code>.</p>
     */
    inline void SetExclusiveStartTagKey(const char* value) { m_exclusiveStartTagKeyHasBeenSet = true; m_exclusiveStartTagKey.assign(value); }

    /**
     * <p>The key to use as the starting point for the list of tags. If you set this
     * parameter, <code>ListTagsForDeliveryStream</code> gets all tags that occur after
     * <code>ExclusiveStartTagKey</code>.</p>
     */
    inline ListTagsForDeliveryStreamRequest& WithExclusiveStartTagKey(const Aws::String& value) { SetExclusiveStartTagKey(value); return *this;}

    /**
     * <p>The key to use as the starting point for the list of tags. If you set this
     * parameter, <code>ListTagsForDeliveryStream</code> gets all tags that occur after
     * <code>ExclusiveStartTagKey</code>.</p>
     */
    inline ListTagsForDeliveryStreamRequest& WithExclusiveStartTagKey(Aws::String&& value) { SetExclusiveStartTagKey(std::move(value)); return *this;}

    /**
     * <p>The key to use as the starting point for the list of tags. If you set this
     * parameter, <code>ListTagsForDeliveryStream</code> gets all tags that occur after
     * <code>ExclusiveStartTagKey</code>.</p>
     */
    inline ListTagsForDeliveryStreamRequest& WithExclusiveStartTagKey(const char* value) { SetExclusiveStartTagKey(value); return *this;}


    /**
     * <p>The number of tags to return. If this number is less than the total number of
     * tags associated with the delivery stream, <code>HasMoreTags</code> is set to
     * <code>true</code> in the response. To list additional tags, set
     * <code>ExclusiveStartTagKey</code> to the last key in the response. </p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The number of tags to return. If this number is less than the total number of
     * tags associated with the delivery stream, <code>HasMoreTags</code> is set to
     * <code>true</code> in the response. To list additional tags, set
     * <code>ExclusiveStartTagKey</code> to the last key in the response. </p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The number of tags to return. If this number is less than the total number of
     * tags associated with the delivery stream, <code>HasMoreTags</code> is set to
     * <code>true</code> in the response. To list additional tags, set
     * <code>ExclusiveStartTagKey</code> to the last key in the response. </p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The number of tags to return. If this number is less than the total number of
     * tags associated with the delivery stream, <code>HasMoreTags</code> is set to
     * <code>true</code> in the response. To list additional tags, set
     * <code>ExclusiveStartTagKey</code> to the last key in the response. </p>
     */
    inline ListTagsForDeliveryStreamRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::String m_deliveryStreamName;
    bool m_deliveryStreamNameHasBeenSet = false;

    Aws::String m_exclusiveStartTagKey;
    bool m_exclusiveStartTagKeyHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
