﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/model/EncryptionType.h>
#include <utility>

namespace Aws
{
namespace Kinesis
{
namespace Model
{

  /**
   */
  class AWS_KINESIS_API StopStreamEncryptionRequest : public KinesisRequest
  {
  public:
    StopStreamEncryptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopStreamEncryption"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the stream on which to stop encrypting records.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the stream on which to stop encrypting records.</p>
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * <p>The name of the stream on which to stop encrypting records.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the stream on which to stop encrypting records.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * <p>The name of the stream on which to stop encrypting records.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The name of the stream on which to stop encrypting records.</p>
     */
    inline StopStreamEncryptionRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the stream on which to stop encrypting records.</p>
     */
    inline StopStreamEncryptionRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the stream on which to stop encrypting records.</p>
     */
    inline StopStreamEncryptionRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}


    /**
     * <p>The encryption type. The only valid value is <code>KMS</code>.</p>
     */
    inline const EncryptionType& GetEncryptionType() const{ return m_encryptionType; }

    /**
     * <p>The encryption type. The only valid value is <code>KMS</code>.</p>
     */
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }

    /**
     * <p>The encryption type. The only valid value is <code>KMS</code>.</p>
     */
    inline void SetEncryptionType(const EncryptionType& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }

    /**
     * <p>The encryption type. The only valid value is <code>KMS</code>.</p>
     */
    inline void SetEncryptionType(EncryptionType&& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = std::move(value); }

    /**
     * <p>The encryption type. The only valid value is <code>KMS</code>.</p>
     */
    inline StopStreamEncryptionRequest& WithEncryptionType(const EncryptionType& value) { SetEncryptionType(value); return *this;}

    /**
     * <p>The encryption type. The only valid value is <code>KMS</code>.</p>
     */
    inline StopStreamEncryptionRequest& WithEncryptionType(EncryptionType&& value) { SetEncryptionType(std::move(value)); return *this;}


    /**
     * <p>The GUID for the customer-managed Amazon Web Services KMS key to use for
     * encryption. This value can be a globally unique identifier, a fully specified
     * Amazon Resource Name (ARN) to either an alias or a key, or an alias name
     * prefixed by "alias/".You can also use a master key owned by Kinesis Data Streams
     * by specifying the alias <code>aws/kinesis</code>.</p> <ul> <li> <p>Key ARN
     * example:
     * <code>arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p> </li> <li> <p>Alias ARN example:
     * <code>arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</code> </p> </li>
     * <li> <p>Globally unique key ID example:
     * <code>12345678-1234-1234-1234-123456789012</code> </p> </li> <li> <p>Alias name
     * example: <code>alias/MyAliasName</code> </p> </li> <li> <p>Master key owned by
     * Kinesis Data Streams: <code>alias/aws/kinesis</code> </p> </li> </ul>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The GUID for the customer-managed Amazon Web Services KMS key to use for
     * encryption. This value can be a globally unique identifier, a fully specified
     * Amazon Resource Name (ARN) to either an alias or a key, or an alias name
     * prefixed by "alias/".You can also use a master key owned by Kinesis Data Streams
     * by specifying the alias <code>aws/kinesis</code>.</p> <ul> <li> <p>Key ARN
     * example:
     * <code>arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p> </li> <li> <p>Alias ARN example:
     * <code>arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</code> </p> </li>
     * <li> <p>Globally unique key ID example:
     * <code>12345678-1234-1234-1234-123456789012</code> </p> </li> <li> <p>Alias name
     * example: <code>alias/MyAliasName</code> </p> </li> <li> <p>Master key owned by
     * Kinesis Data Streams: <code>alias/aws/kinesis</code> </p> </li> </ul>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>The GUID for the customer-managed Amazon Web Services KMS key to use for
     * encryption. This value can be a globally unique identifier, a fully specified
     * Amazon Resource Name (ARN) to either an alias or a key, or an alias name
     * prefixed by "alias/".You can also use a master key owned by Kinesis Data Streams
     * by specifying the alias <code>aws/kinesis</code>.</p> <ul> <li> <p>Key ARN
     * example:
     * <code>arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p> </li> <li> <p>Alias ARN example:
     * <code>arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</code> </p> </li>
     * <li> <p>Globally unique key ID example:
     * <code>12345678-1234-1234-1234-123456789012</code> </p> </li> <li> <p>Alias name
     * example: <code>alias/MyAliasName</code> </p> </li> <li> <p>Master key owned by
     * Kinesis Data Streams: <code>alias/aws/kinesis</code> </p> </li> </ul>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The GUID for the customer-managed Amazon Web Services KMS key to use for
     * encryption. This value can be a globally unique identifier, a fully specified
     * Amazon Resource Name (ARN) to either an alias or a key, or an alias name
     * prefixed by "alias/".You can also use a master key owned by Kinesis Data Streams
     * by specifying the alias <code>aws/kinesis</code>.</p> <ul> <li> <p>Key ARN
     * example:
     * <code>arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p> </li> <li> <p>Alias ARN example:
     * <code>arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</code> </p> </li>
     * <li> <p>Globally unique key ID example:
     * <code>12345678-1234-1234-1234-123456789012</code> </p> </li> <li> <p>Alias name
     * example: <code>alias/MyAliasName</code> </p> </li> <li> <p>Master key owned by
     * Kinesis Data Streams: <code>alias/aws/kinesis</code> </p> </li> </ul>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>The GUID for the customer-managed Amazon Web Services KMS key to use for
     * encryption. This value can be a globally unique identifier, a fully specified
     * Amazon Resource Name (ARN) to either an alias or a key, or an alias name
     * prefixed by "alias/".You can also use a master key owned by Kinesis Data Streams
     * by specifying the alias <code>aws/kinesis</code>.</p> <ul> <li> <p>Key ARN
     * example:
     * <code>arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p> </li> <li> <p>Alias ARN example:
     * <code>arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</code> </p> </li>
     * <li> <p>Globally unique key ID example:
     * <code>12345678-1234-1234-1234-123456789012</code> </p> </li> <li> <p>Alias name
     * example: <code>alias/MyAliasName</code> </p> </li> <li> <p>Master key owned by
     * Kinesis Data Streams: <code>alias/aws/kinesis</code> </p> </li> </ul>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The GUID for the customer-managed Amazon Web Services KMS key to use for
     * encryption. This value can be a globally unique identifier, a fully specified
     * Amazon Resource Name (ARN) to either an alias or a key, or an alias name
     * prefixed by "alias/".You can also use a master key owned by Kinesis Data Streams
     * by specifying the alias <code>aws/kinesis</code>.</p> <ul> <li> <p>Key ARN
     * example:
     * <code>arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p> </li> <li> <p>Alias ARN example:
     * <code>arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</code> </p> </li>
     * <li> <p>Globally unique key ID example:
     * <code>12345678-1234-1234-1234-123456789012</code> </p> </li> <li> <p>Alias name
     * example: <code>alias/MyAliasName</code> </p> </li> <li> <p>Master key owned by
     * Kinesis Data Streams: <code>alias/aws/kinesis</code> </p> </li> </ul>
     */
    inline StopStreamEncryptionRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The GUID for the customer-managed Amazon Web Services KMS key to use for
     * encryption. This value can be a globally unique identifier, a fully specified
     * Amazon Resource Name (ARN) to either an alias or a key, or an alias name
     * prefixed by "alias/".You can also use a master key owned by Kinesis Data Streams
     * by specifying the alias <code>aws/kinesis</code>.</p> <ul> <li> <p>Key ARN
     * example:
     * <code>arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p> </li> <li> <p>Alias ARN example:
     * <code>arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</code> </p> </li>
     * <li> <p>Globally unique key ID example:
     * <code>12345678-1234-1234-1234-123456789012</code> </p> </li> <li> <p>Alias name
     * example: <code>alias/MyAliasName</code> </p> </li> <li> <p>Master key owned by
     * Kinesis Data Streams: <code>alias/aws/kinesis</code> </p> </li> </ul>
     */
    inline StopStreamEncryptionRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The GUID for the customer-managed Amazon Web Services KMS key to use for
     * encryption. This value can be a globally unique identifier, a fully specified
     * Amazon Resource Name (ARN) to either an alias or a key, or an alias name
     * prefixed by "alias/".You can also use a master key owned by Kinesis Data Streams
     * by specifying the alias <code>aws/kinesis</code>.</p> <ul> <li> <p>Key ARN
     * example:
     * <code>arn:aws:kms:us-east-1:123456789012:key/12345678-1234-1234-1234-123456789012</code>
     * </p> </li> <li> <p>Alias ARN example:
     * <code>arn:aws:kms:us-east-1:123456789012:alias/MyAliasName</code> </p> </li>
     * <li> <p>Globally unique key ID example:
     * <code>12345678-1234-1234-1234-123456789012</code> </p> </li> <li> <p>Alias name
     * example: <code>alias/MyAliasName</code> </p> </li> <li> <p>Master key owned by
     * Kinesis Data Streams: <code>alias/aws/kinesis</code> </p> </li> </ul>
     */
    inline StopStreamEncryptionRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}

  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    EncryptionType m_encryptionType;
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
