/**********************************************************
 * /home/cmb/esp/esp-idf/examples/open62541/build/open62541/src_generated/ua_statuscode_descriptions.hgen -- do not modify
 **********************************************************
 * Generated from /home/cmb/esp/esp-idf/examples/open62541/components/open62541/open62541/tools/schema/Opc.Ua.StatusCodes.csv with script /home/cmb/esp/esp-idf/examples/open62541/components/open62541/open62541/tools/generate_statuscode_descriptions.py
 * on host galliumos by user root at 2018-05-11 08:47:51
 **********************************************************/


#include "ua_types.h"

#ifndef UA_ENABLE_STATUSCODE_DESCRIPTIONS
static const size_t statusCodeDescriptionsSize = 1;
static const UA_StatusCodeDescription statusCodeDescriptions[1] = {
{0xffffffff, "StatusCode descriptions not available", "open62541 was compiled without support for statuscode descriptions"}
};
#else
static const size_t statusCodeDescriptionsSize = 229;
static const UA_StatusCodeDescription statusCodeDescriptions[229] =
{
 {UA_STATUSCODE_GOOD, "Good", "Success / No error"},
 {UA_STATUSCODE_BADUNEXPECTEDERROR, "BadUnexpectedError", "An unexpected error occurred."},
 {UA_STATUSCODE_BADINTERNALERROR, "BadInternalError", "An internal error occurred as a result of a programming or configuration error."},
 {UA_STATUSCODE_BADOUTOFMEMORY, "BadOutOfMemory", "Not enough memory to complete the operation."},
 {UA_STATUSCODE_BADRESOURCEUNAVAILABLE, "BadResourceUnavailable", "An operating system resource is not available."},
 {UA_STATUSCODE_BADCOMMUNICATIONERROR, "BadCommunicationError", "A low level communication error occurred."},
 {UA_STATUSCODE_BADENCODINGERROR, "BadEncodingError", "Encoding halted because of invalid data in the objects being serialized."},
 {UA_STATUSCODE_BADDECODINGERROR, "BadDecodingError", "Decoding halted because of invalid data in the stream."},
 {UA_STATUSCODE_BADENCODINGLIMITSEXCEEDED, "BadEncodingLimitsExceeded", "The message encoding/decoding limits imposed by the stack have been exceeded."},
 {UA_STATUSCODE_BADREQUESTTOOLARGE, "BadRequestTooLarge", "The request message size exceeds limits set by the server."},
 {UA_STATUSCODE_BADRESPONSETOOLARGE, "BadResponseTooLarge", "The response message size exceeds limits set by the client."},
 {UA_STATUSCODE_BADUNKNOWNRESPONSE, "BadUnknownResponse", "An unrecognized response was received from the server."},
 {UA_STATUSCODE_BADTIMEOUT, "BadTimeout", "The operation timed out."},
 {UA_STATUSCODE_BADSERVICEUNSUPPORTED, "BadServiceUnsupported", "The server does not support the requested service."},
 {UA_STATUSCODE_BADSHUTDOWN, "BadShutdown", "The operation was cancelled because the application is shutting down."},
 {UA_STATUSCODE_BADSERVERNOTCONNECTED, "BadServerNotConnected", "The operation could not complete because the client is not connected to the server."},
 {UA_STATUSCODE_BADSERVERHALTED, "BadServerHalted", "The server has stopped and cannot process any requests."},
 {UA_STATUSCODE_BADNOTHINGTODO, "BadNothingToDo", "There was nothing to do because the client passed a list of operations with no elements."},
 {UA_STATUSCODE_BADTOOMANYOPERATIONS, "BadTooManyOperations", "The request could not be processed because it specified too many operations."},
 {UA_STATUSCODE_BADTOOMANYMONITOREDITEMS, "BadTooManyMonitoredItems", "The request could not be processed because there are too many monitored items in the subscription."},
 {UA_STATUSCODE_BADDATATYPEIDUNKNOWN, "BadDataTypeIdUnknown", "The extension object cannot be (de)serialized because the data type id is not recognized."},
 {UA_STATUSCODE_BADCERTIFICATEINVALID, "BadCertificateInvalid", "The certificate provided as a parameter is not valid."},
 {UA_STATUSCODE_BADSECURITYCHECKSFAILED, "BadSecurityChecksFailed", "An error occurred verifying security."},
 {UA_STATUSCODE_BADCERTIFICATETIMEINVALID, "BadCertificateTimeInvalid", "The Certificate has expired or is not yet valid."},
 {UA_STATUSCODE_BADCERTIFICATEISSUERTIMEINVALID, "BadCertificateIssuerTimeInvalid", "An Issuer Certificate has expired or is not yet valid."},
 {UA_STATUSCODE_BADCERTIFICATEHOSTNAMEINVALID, "BadCertificateHostNameInvalid", "The HostName used to connect to a Server does not match a HostName in the Certificate."},
 {UA_STATUSCODE_BADCERTIFICATEURIINVALID, "BadCertificateUriInvalid", "The URI specified in the ApplicationDescription does not match the URI in the Certificate."},
 {UA_STATUSCODE_BADCERTIFICATEUSENOTALLOWED, "BadCertificateUseNotAllowed", "The Certificate may not be used for the requested operation."},
 {UA_STATUSCODE_BADCERTIFICATEISSUERUSENOTALLOWED, "BadCertificateIssuerUseNotAllowed", "The Issuer Certificate may not be used for the requested operation."},
 {UA_STATUSCODE_BADCERTIFICATEUNTRUSTED, "BadCertificateUntrusted", "The Certificate is not trusted."},
 {UA_STATUSCODE_BADCERTIFICATEREVOCATIONUNKNOWN, "BadCertificateRevocationUnknown", "It was not possible to determine if the Certificate has been revoked."},
 {UA_STATUSCODE_BADCERTIFICATEISSUERREVOCATIONUNKNOWN, "BadCertificateIssuerRevocationUnknown", "It was not possible to determine if the Issuer Certificate has been revoked."},
 {UA_STATUSCODE_BADCERTIFICATEREVOKED, "BadCertificateRevoked", "The certificate has been revoked."},
 {UA_STATUSCODE_BADCERTIFICATEISSUERREVOKED, "BadCertificateIssuerRevoked", "The issuer certificate has been revoked."},
 {UA_STATUSCODE_BADCERTIFICATECHAININCOMPLETE, "BadCertificateChainIncomplete", "The certificate chain is incomplete."},
 {UA_STATUSCODE_BADUSERACCESSDENIED, "BadUserAccessDenied", "User does not have permission to perform the requested operation."},
 {UA_STATUSCODE_BADIDENTITYTOKENINVALID, "BadIdentityTokenInvalid", "The user identity token is not valid."},
 {UA_STATUSCODE_BADIDENTITYTOKENREJECTED, "BadIdentityTokenRejected", "The user identity token is valid but the server has rejected it."},
 {UA_STATUSCODE_BADSECURECHANNELIDINVALID, "BadSecureChannelIdInvalid", "The specified secure channel is no longer valid."},
 {UA_STATUSCODE_BADINVALIDTIMESTAMP, "BadInvalidTimestamp", "The timestamp is outside the range allowed by the server."},
 {UA_STATUSCODE_BADNONCEINVALID, "BadNonceInvalid", "The nonce does appear to be not a random value or it is not the correct length."},
 {UA_STATUSCODE_BADSESSIONIDINVALID, "BadSessionIdInvalid", "The session id is not valid."},
 {UA_STATUSCODE_BADSESSIONCLOSED, "BadSessionClosed", "The session was closed by the client."},
 {UA_STATUSCODE_BADSESSIONNOTACTIVATED, "BadSessionNotActivated", "The session cannot be used because ActivateSession has not been called."},
 {UA_STATUSCODE_BADSUBSCRIPTIONIDINVALID, "BadSubscriptionIdInvalid", "The subscription id is not valid."},
 {UA_STATUSCODE_BADREQUESTHEADERINVALID, "BadRequestHeaderInvalid", "The header for the request is missing or invalid."},
 {UA_STATUSCODE_BADTIMESTAMPSTORETURNINVALID, "BadTimestampsToReturnInvalid", "The timestamps to return parameter is invalid."},
 {UA_STATUSCODE_BADREQUESTCANCELLEDBYCLIENT, "BadRequestCancelledByClient", "The request was cancelled by the client."},
 {UA_STATUSCODE_BADTOOMANYARGUMENTS, "BadTooManyArguments", "Too many arguments were provided."},
 {UA_STATUSCODE_GOODSUBSCRIPTIONTRANSFERRED, "GoodSubscriptionTransferred", "The subscription was transferred to another session."},
 {UA_STATUSCODE_GOODCOMPLETESASYNCHRONOUSLY, "GoodCompletesAsynchronously", "The processing will complete asynchronously."},
 {UA_STATUSCODE_GOODOVERLOAD, "GoodOverload", "Sampling has slowed down due to resource limitations."},
 {UA_STATUSCODE_GOODCLAMPED, "GoodClamped", "The value written was accepted but was clamped."},
 {UA_STATUSCODE_BADNOCOMMUNICATION, "BadNoCommunication", "Communication with the data source is defined"},
 {UA_STATUSCODE_BADWAITINGFORINITIALDATA, "BadWaitingForInitialData", "Waiting for the server to obtain values from the underlying data source."},
 {UA_STATUSCODE_BADNODEIDINVALID, "BadNodeIdInvalid", "The syntax of the node id is not valid."},
 {UA_STATUSCODE_BADNODEIDUNKNOWN, "BadNodeIdUnknown", "The node id refers to a node that does not exist in the server address space."},
 {UA_STATUSCODE_BADATTRIBUTEIDINVALID, "BadAttributeIdInvalid", "The attribute is not supported for the specified Node."},
 {UA_STATUSCODE_BADINDEXRANGEINVALID, "BadIndexRangeInvalid", "The syntax of the index range parameter is invalid."},
 {UA_STATUSCODE_BADINDEXRANGENODATA, "BadIndexRangeNoData", "No data exists within the range of indexes specified."},
 {UA_STATUSCODE_BADDATAENCODINGINVALID, "BadDataEncodingInvalid", "The data encoding is invalid."},
 {UA_STATUSCODE_BADDATAENCODINGUNSUPPORTED, "BadDataEncodingUnsupported", "The server does not support the requested data encoding for the node."},
 {UA_STATUSCODE_BADNOTREADABLE, "BadNotReadable", "The access level does not allow reading or subscribing to the Node."},
 {UA_STATUSCODE_BADNOTWRITABLE, "BadNotWritable", "The access level does not allow writing to the Node."},
 {UA_STATUSCODE_BADOUTOFRANGE, "BadOutOfRange", "The value was out of range."},
 {UA_STATUSCODE_BADNOTSUPPORTED, "BadNotSupported", "The requested operation is not supported."},
 {UA_STATUSCODE_BADNOTFOUND, "BadNotFound", "A requested item was not found or a search operation ended without success."},
 {UA_STATUSCODE_BADOBJECTDELETED, "BadObjectDeleted", "The object cannot be used because it has been deleted."},
 {UA_STATUSCODE_BADNOTIMPLEMENTED, "BadNotImplemented", "Requested operation is not implemented."},
 {UA_STATUSCODE_BADMONITORINGMODEINVALID, "BadMonitoringModeInvalid", "The monitoring mode is invalid."},
 {UA_STATUSCODE_BADMONITOREDITEMIDINVALID, "BadMonitoredItemIdInvalid", "The monitoring item id does not refer to a valid monitored item."},
 {UA_STATUSCODE_BADMONITOREDITEMFILTERINVALID, "BadMonitoredItemFilterInvalid", "The monitored item filter parameter is not valid."},
 {UA_STATUSCODE_BADMONITOREDITEMFILTERUNSUPPORTED, "BadMonitoredItemFilterUnsupported", "The server does not support the requested monitored item filter."},
 {UA_STATUSCODE_BADFILTERNOTALLOWED, "BadFilterNotAllowed", "A monitoring filter cannot be used in combination with the attribute specified."},
 {UA_STATUSCODE_BADSTRUCTUREMISSING, "BadStructureMissing", "A mandatory structured parameter was missing or null."},
 {UA_STATUSCODE_BADEVENTFILTERINVALID, "BadEventFilterInvalid", "The event filter is not valid."},
 {UA_STATUSCODE_BADCONTENTFILTERINVALID, "BadContentFilterInvalid", "The content filter is not valid."},
 {UA_STATUSCODE_BADFILTEROPERATORINVALID, "BadFilterOperatorInvalid", "An unregognized operator was provided in a filter."},
 {UA_STATUSCODE_BADFILTEROPERATORUNSUPPORTED, "BadFilterOperatorUnsupported", "A valid operator was provided"},
 {UA_STATUSCODE_BADFILTEROPERANDCOUNTMISMATCH, "BadFilterOperandCountMismatch", "The number of operands provided for the filter operator was less then expected for the operand provided."},
 {UA_STATUSCODE_BADFILTEROPERANDINVALID, "BadFilterOperandInvalid", "The operand used in a content filter is not valid."},
 {UA_STATUSCODE_BADFILTERELEMENTINVALID, "BadFilterElementInvalid", "The referenced element is not a valid element in the content filter."},
 {UA_STATUSCODE_BADFILTERLITERALINVALID, "BadFilterLiteralInvalid", "The referenced literal is not a valid value."},
 {UA_STATUSCODE_BADCONTINUATIONPOINTINVALID, "BadContinuationPointInvalid", "The continuation point provide is longer valid."},
 {UA_STATUSCODE_BADNOCONTINUATIONPOINTS, "BadNoContinuationPoints", "The operation could not be processed because all continuation points have been allocated."},
 {UA_STATUSCODE_BADREFERENCETYPEIDINVALID, "BadReferenceTypeIdInvalid", "The operation could not be processed because all continuation points have been allocated."},
 {UA_STATUSCODE_BADBROWSEDIRECTIONINVALID, "BadBrowseDirectionInvalid", "The browse direction is not valid."},
 {UA_STATUSCODE_BADNODENOTINVIEW, "BadNodeNotInView", "The node is not part of the view."},
 {UA_STATUSCODE_BADSERVERURIINVALID, "BadServerUriInvalid", "The ServerUri is not a valid URI."},
 {UA_STATUSCODE_BADSERVERNAMEMISSING, "BadServerNameMissing", "No ServerName was specified."},
 {UA_STATUSCODE_BADDISCOVERYURLMISSING, "BadDiscoveryUrlMissing", "No DiscoveryUrl was specified."},
 {UA_STATUSCODE_BADSEMPAHOREFILEMISSING, "BadSempahoreFileMissing", "The semaphore file specified by the client is not valid."},
 {UA_STATUSCODE_BADREQUESTTYPEINVALID, "BadRequestTypeInvalid", "The security token request type is not valid."},
 {UA_STATUSCODE_BADSECURITYMODEREJECTED, "BadSecurityModeRejected", "The security mode does not meet the requirements set by the Server."},
 {UA_STATUSCODE_BADSECURITYPOLICYREJECTED, "BadSecurityPolicyRejected", "The security policy does not meet the requirements set by the Server."},
 {UA_STATUSCODE_BADTOOMANYSESSIONS, "BadTooManySessions", "The server has reached its maximum number of sessions."},
 {UA_STATUSCODE_BADUSERSIGNATUREINVALID, "BadUserSignatureInvalid", "The user token signature is missing or invalid."},
 {UA_STATUSCODE_BADAPPLICATIONSIGNATUREINVALID, "BadApplicationSignatureInvalid", "The signature generated with the client certificate is missing or invalid."},
 {UA_STATUSCODE_BADNOVALIDCERTIFICATES, "BadNoValidCertificates", "The client did not provide at least one software certificate that is valid and meets the profile requirements for the server."},
 {UA_STATUSCODE_BADIDENTITYCHANGENOTSUPPORTED, "BadIdentityChangeNotSupported", "The Server does not support changing the user identity assigned to the session."},
 {UA_STATUSCODE_BADREQUESTCANCELLEDBYREQUEST, "BadRequestCancelledByRequest", "The request was cancelled by the client with the Cancel service."},
 {UA_STATUSCODE_BADPARENTNODEIDINVALID, "BadParentNodeIdInvalid", "The parent node id does not to refer to a valid node."},
 {UA_STATUSCODE_BADREFERENCENOTALLOWED, "BadReferenceNotAllowed", "The reference could not be created because it violates constraints imposed by the data model."},
 {UA_STATUSCODE_BADNODEIDREJECTED, "BadNodeIdRejected", "The requested node id was reject because it was either invalid or server does not allow node ids to be specified by the client."},
 {UA_STATUSCODE_BADNODEIDEXISTS, "BadNodeIdExists", "The requested node id is already used by another node."},
 {UA_STATUSCODE_BADNODECLASSINVALID, "BadNodeClassInvalid", "The node class is not valid."},
 {UA_STATUSCODE_BADBROWSENAMEINVALID, "BadBrowseNameInvalid", "The browse name is invalid."},
 {UA_STATUSCODE_BADBROWSENAMEDUPLICATED, "BadBrowseNameDuplicated", "The browse name is not unique among nodes that share the same relationship with the parent."},
 {UA_STATUSCODE_BADNODEATTRIBUTESINVALID, "BadNodeAttributesInvalid", "The node attributes are not valid for the node class."},
 {UA_STATUSCODE_BADTYPEDEFINITIONINVALID, "BadTypeDefinitionInvalid", "The type definition node id does not reference an appropriate type node."},
 {UA_STATUSCODE_BADSOURCENODEIDINVALID, "BadSourceNodeIdInvalid", "The source node id does not reference a valid node."},
 {UA_STATUSCODE_BADTARGETNODEIDINVALID, "BadTargetNodeIdInvalid", "The target node id does not reference a valid node."},
 {UA_STATUSCODE_BADDUPLICATEREFERENCENOTALLOWED, "BadDuplicateReferenceNotAllowed", "The reference type between the nodes is already defined."},
 {UA_STATUSCODE_BADINVALIDSELFREFERENCE, "BadInvalidSelfReference", "The server does not allow this type of self reference on this node."},
 {UA_STATUSCODE_BADREFERENCELOCALONLY, "BadReferenceLocalOnly", "The reference type is not valid for a reference to a remote server."},
 {UA_STATUSCODE_BADNODELETERIGHTS, "BadNoDeleteRights", "The server will not allow the node to be deleted."},
 {UA_STATUSCODE_UNCERTAINREFERENCENOTDELETED, "UncertainReferenceNotDeleted", "The server was not able to delete all target references."},
 {UA_STATUSCODE_BADSERVERINDEXINVALID, "BadServerIndexInvalid", "The server index is not valid."},
 {UA_STATUSCODE_BADVIEWIDUNKNOWN, "BadViewIdUnknown", "The view id does not refer to a valid view node."},
 {UA_STATUSCODE_BADVIEWTIMESTAMPINVALID, "BadViewTimestampInvalid", "The view timestamp is not available or not supported."},
 {UA_STATUSCODE_BADVIEWPARAMETERMISMATCH, "BadViewParameterMismatch", "The view parameters are not consistent with each other."},
 {UA_STATUSCODE_BADVIEWVERSIONINVALID, "BadViewVersionInvalid", "The view version is not available or not supported."},
 {UA_STATUSCODE_UNCERTAINNOTALLNODESAVAILABLE, "UncertainNotAllNodesAvailable", "The list of references may not be complete because the underlying system is not available."},
 {UA_STATUSCODE_GOODRESULTSMAYBEINCOMPLETE, "GoodResultsMayBeIncomplete", "The server should have followed a reference to a node in a remote server but did not. The result set may be incomplete."},
 {UA_STATUSCODE_BADNOTTYPEDEFINITION, "BadNotTypeDefinition", "The provided Nodeid was not a type definition nodeid."},
 {UA_STATUSCODE_UNCERTAINREFERENCEOUTOFSERVER, "UncertainReferenceOutOfServer", "One of the references to follow in the relative path references to a node in the address space in another server."},
 {UA_STATUSCODE_BADTOOMANYMATCHES, "BadTooManyMatches", "The requested operation has too many matches to return."},
 {UA_STATUSCODE_BADQUERYTOOCOMPLEX, "BadQueryTooComplex", "The requested operation requires too many resources in the server."},
 {UA_STATUSCODE_BADNOMATCH, "BadNoMatch", "The requested operation has no match to return."},
 {UA_STATUSCODE_BADMAXAGEINVALID, "BadMaxAgeInvalid", "The max age parameter is invalid."},
 {UA_STATUSCODE_BADSECURITYMODEINSUFFICIENT, "BadSecurityModeInsufficient", "The operation is not permitted over the current secure channel."},
 {UA_STATUSCODE_BADHISTORYOPERATIONINVALID, "BadHistoryOperationInvalid", "The history details parameter is not valid."},
 {UA_STATUSCODE_BADHISTORYOPERATIONUNSUPPORTED, "BadHistoryOperationUnsupported", "The server does not support the requested operation."},
 {UA_STATUSCODE_BADINVALIDTIMESTAMPARGUMENT, "BadInvalidTimestampArgument", "The defined timestamp to return was invalid."},
 {UA_STATUSCODE_BADWRITENOTSUPPORTED, "BadWriteNotSupported", "The server not does support writing the combination of value"},
 {UA_STATUSCODE_BADTYPEMISMATCH, "BadTypeMismatch", "The value supplied for the attribute is not of the same type as the attribute's value."},
 {UA_STATUSCODE_BADMETHODINVALID, "BadMethodInvalid", "The method id does not refer to a method for the specified object."},
 {UA_STATUSCODE_BADARGUMENTSMISSING, "BadArgumentsMissing", "The client did not specify all of the input arguments for the method."},
 {UA_STATUSCODE_BADTOOMANYSUBSCRIPTIONS, "BadTooManySubscriptions", "The server has reached its  maximum number of subscriptions."},
 {UA_STATUSCODE_BADTOOMANYPUBLISHREQUESTS, "BadTooManyPublishRequests", "The server has reached the maximum number of queued publish requests."},
 {UA_STATUSCODE_BADNOSUBSCRIPTION, "BadNoSubscription", "There is no subscription available for this session."},
 {UA_STATUSCODE_BADSEQUENCENUMBERUNKNOWN, "BadSequenceNumberUnknown", "The sequence number is unknown to the server."},
 {UA_STATUSCODE_BADMESSAGENOTAVAILABLE, "BadMessageNotAvailable", "The requested notification message is no longer available."},
 {UA_STATUSCODE_BADINSUFFICIENTCLIENTPROFILE, "BadInsufficientClientProfile", "The Client of the current Session does not support one or more Profiles that are necessary for the Subscription."},
 {UA_STATUSCODE_BADSTATENOTACTIVE, "BadStateNotActive", "The sub-state machine is not currently active."},
 {UA_STATUSCODE_BADTCPSERVERTOOBUSY, "BadTcpServerTooBusy", "The server cannot process the request because it is too busy."},
 {UA_STATUSCODE_BADTCPMESSAGETYPEINVALID, "BadTcpMessageTypeInvalid", "The type of the message specified in the header invalid."},
 {UA_STATUSCODE_BADTCPSECURECHANNELUNKNOWN, "BadTcpSecureChannelUnknown", "The SecureChannelId and/or TokenId are not currently in use."},
 {UA_STATUSCODE_BADTCPMESSAGETOOLARGE, "BadTcpMessageTooLarge", "The size of the message specified in the header is too large."},
 {UA_STATUSCODE_BADTCPNOTENOUGHRESOURCES, "BadTcpNotEnoughResources", "There are not enough resources to process the request."},
 {UA_STATUSCODE_BADTCPINTERNALERROR, "BadTcpInternalError", "An internal error occurred."},
 {UA_STATUSCODE_BADTCPENDPOINTURLINVALID, "BadTcpEndpointUrlInvalid", "The Server does not recognize the QueryString specified."},
 {UA_STATUSCODE_BADREQUESTINTERRUPTED, "BadRequestInterrupted", "The request could not be sent because of a network interruption."},
 {UA_STATUSCODE_BADREQUESTTIMEOUT, "BadRequestTimeout", "Timeout occurred while processing the request."},
 {UA_STATUSCODE_BADSECURECHANNELCLOSED, "BadSecureChannelClosed", "The secure channel has been closed."},
 {UA_STATUSCODE_BADSECURECHANNELTOKENUNKNOWN, "BadSecureChannelTokenUnknown", "The token has expired or is not recognized."},
 {UA_STATUSCODE_BADSEQUENCENUMBERINVALID, "BadSequenceNumberInvalid", "The sequence number is not valid."},
 {UA_STATUSCODE_BADPROTOCOLVERSIONUNSUPPORTED, "BadProtocolVersionUnsupported", "The applications do not have compatible protocol versions."},
 {UA_STATUSCODE_BADCONFIGURATIONERROR, "BadConfigurationError", "There is a problem with the configuration that affects the usefulness of the value."},
 {UA_STATUSCODE_BADNOTCONNECTED, "BadNotConnected", "The variable should receive its value from another variable"},
 {UA_STATUSCODE_BADDEVICEFAILURE, "BadDeviceFailure", "There has been a failure in the device/data source that generates the value that has affected the value."},
 {UA_STATUSCODE_BADSENSORFAILURE, "BadSensorFailure", "There has been a failure in the sensor from which the value is derived by the device/data source."},
 {UA_STATUSCODE_BADOUTOFSERVICE, "BadOutOfService", "The source of the data is not operational."},
 {UA_STATUSCODE_BADDEADBANDFILTERINVALID, "BadDeadbandFilterInvalid", "The deadband filter is not valid."},
 {UA_STATUSCODE_UNCERTAINNOCOMMUNICATIONLASTUSABLEVALUE, "UncertainNoCommunicationLastUsableValue", "Communication to the data source has failed. The variable value is the last value that had a good quality."},
 {UA_STATUSCODE_UNCERTAINLASTUSABLEVALUE, "UncertainLastUsableValue", "Whatever was updating this value has stopped doing so."},
 {UA_STATUSCODE_UNCERTAINSUBSTITUTEVALUE, "UncertainSubstituteValue", "The value is an operational value that was manually overwritten."},
 {UA_STATUSCODE_UNCERTAININITIALVALUE, "UncertainInitialValue", "The value is an initial value for a variable that normally receives its value from another variable."},
 {UA_STATUSCODE_UNCERTAINSENSORNOTACCURATE, "UncertainSensorNotAccurate", "The value is at one of the sensor limits."},
 {UA_STATUSCODE_UNCERTAINENGINEERINGUNITSEXCEEDED, "UncertainEngineeringUnitsExceeded", "The value is outside of the range of values defined for this parameter."},
 {UA_STATUSCODE_UNCERTAINSUBNORMAL, "UncertainSubNormal", "The value is derived from multiple sources and has less than the required number of Good sources."},
 {UA_STATUSCODE_GOODLOCALOVERRIDE, "GoodLocalOverride", "The value has been overridden."},
 {UA_STATUSCODE_BADREFRESHINPROGRESS, "BadRefreshInProgress", "This Condition refresh failed"},
 {UA_STATUSCODE_BADCONDITIONALREADYDISABLED, "BadConditionAlreadyDisabled", "This condition has already been disabled."},
 {UA_STATUSCODE_BADCONDITIONALREADYENABLED, "BadConditionAlreadyEnabled", "This condition has already been enabled."},
 {UA_STATUSCODE_BADCONDITIONDISABLED, "BadConditionDisabled", "Property not available"},
 {UA_STATUSCODE_BADEVENTIDUNKNOWN, "BadEventIdUnknown", "The specified event id is not recognized."},
 {UA_STATUSCODE_BADEVENTNOTACKNOWLEDGEABLE, "BadEventNotAcknowledgeable", "The event cannot be acknowledged."},
 {UA_STATUSCODE_BADDIALOGNOTACTIVE, "BadDialogNotActive", "The dialog condition is not active."},
 {UA_STATUSCODE_BADDIALOGRESPONSEINVALID, "BadDialogResponseInvalid", "The response is not valid for the dialog."},
 {UA_STATUSCODE_BADCONDITIONBRANCHALREADYACKED, "BadConditionBranchAlreadyAcked", "The condition branch has already been acknowledged."},
 {UA_STATUSCODE_BADCONDITIONBRANCHALREADYCONFIRMED, "BadConditionBranchAlreadyConfirmed", "The condition branch has already been confirmed."},
 {UA_STATUSCODE_BADCONDITIONALREADYSHELVED, "BadConditionAlreadyShelved", "The condition has already been shelved."},
 {UA_STATUSCODE_BADCONDITIONNOTSHELVED, "BadConditionNotShelved", "The condition is not currently shelved."},
 {UA_STATUSCODE_BADSHELVINGTIMEOUTOFRANGE, "BadShelvingTimeOutOfRange", "The shelving time not within an acceptable range."},
 {UA_STATUSCODE_BADNODATA, "BadNoData", "No data exists for the requested time range or event filter."},
 {UA_STATUSCODE_BADBOUNDNOTFOUND, "BadBoundNotFound", "No data found to provide upper or lower bound value."},
 {UA_STATUSCODE_BADBOUNDNOTSUPPORTED, "BadBoundNotSupported", "The server cannot retrieve a bound for the variable."},
 {UA_STATUSCODE_BADDATALOST, "BadDataLost", "Data is missing due to collection started/stopped/lost."},
 {UA_STATUSCODE_BADDATAUNAVAILABLE, "BadDataUnavailable", "Expected data is unavailable for the requested time range due to an un-mounted volume"},
 {UA_STATUSCODE_BADENTRYEXISTS, "BadEntryExists", "The data or event was not successfully inserted because a matching entry exists."},
 {UA_STATUSCODE_BADNOENTRYEXISTS, "BadNoEntryExists", "The data or event was not successfully updated because no matching entry exists."},
 {UA_STATUSCODE_BADTIMESTAMPNOTSUPPORTED, "BadTimestampNotSupported", "The client requested history using a timestamp format the server does not support (i.e requested ServerTimestamp when server only supports SourceTimestamp)."},
 {UA_STATUSCODE_GOODENTRYINSERTED, "GoodEntryInserted", "The data or event was successfully inserted into the historical database."},
 {UA_STATUSCODE_GOODENTRYREPLACED, "GoodEntryReplaced", "The data or event field was successfully replaced in the historical database."},
 {UA_STATUSCODE_UNCERTAINDATASUBNORMAL, "UncertainDataSubNormal", "The value is derived from multiple values and has less than the required number of Good values."},
 {UA_STATUSCODE_GOODNODATA, "GoodNoData", "No data exists for the requested time range or event filter."},
 {UA_STATUSCODE_GOODMOREDATA, "GoodMoreData", "The data or event field was successfully replaced in the historical database."},
 {UA_STATUSCODE_BADAGGREGATELISTMISMATCH, "BadAggregateListMismatch", "The requested number of Aggregates does not match the requested number of NodeIds."},
 {UA_STATUSCODE_BADAGGREGATENOTSUPPORTED, "BadAggregateNotSupported", "The requested Aggregate is not support by the server."},
 {UA_STATUSCODE_BADAGGREGATEINVALIDINPUTS, "BadAggregateInvalidInputs", "The aggregate value could not be derived due to invalid data inputs."},
 {UA_STATUSCODE_BADAGGREGATECONFIGURATIONREJECTED, "BadAggregateConfigurationRejected", "The aggregate configuration is not valid for specified node."},
 {UA_STATUSCODE_GOODDATAIGNORED, "GoodDataIgnored", "The request pecifies fields which are not valid for the EventType or cannot be saved by the historian."},
 {UA_STATUSCODE_BADREQUESTNOTALLOWED, "BadRequestNotAllowed", "The request was rejected by the server because it did not meet the criteria set by the server."},
 {UA_STATUSCODE_GOODEDITED, "GoodEdited", "The value does not come from the real source and has been edited by the server."},
 {UA_STATUSCODE_GOODPOSTACTIONFAILED, "GoodPostActionFailed", "There was an error in execution of these post-actions."},
 {UA_STATUSCODE_UNCERTAINDOMINANTVALUECHANGED, "UncertainDominantValueChanged", "The related EngineeringUnit has been changed but the Variable Value is still provided based on the previous unit."},
 {UA_STATUSCODE_GOODDEPENDENTVALUECHANGED, "GoodDependentValueChanged", "A dependent value has been changed but the change has not been applied to the device."},
 {UA_STATUSCODE_BADDOMINANTVALUECHANGED, "BadDominantValueChanged", "The related EngineeringUnit has been changed but this change has not been applied to the device. The Variable Value is still dependent on the previous unit but its status is currently Bad."},
 {UA_STATUSCODE_UNCERTAINDEPENDENTVALUECHANGED, "UncertainDependentValueChanged", "A dependent value has been changed but the change has not been applied to the device. The quality of the dominant variable is uncertain."},
 {UA_STATUSCODE_BADDEPENDENTVALUECHANGED, "BadDependentValueChanged", "A dependent value has been changed but the change has not been applied to the device. The quality of the dominant variable is Bad."},
 {UA_STATUSCODE_GOODCOMMUNICATIONEVENT, "GoodCommunicationEvent", "The communication layer has raised an event."},
 {UA_STATUSCODE_GOODSHUTDOWNEVENT, "GoodShutdownEvent", "The system is shutting down."},
 {UA_STATUSCODE_GOODCALLAGAIN, "GoodCallAgain", "The operation is not finished and needs to be called again."},
 {UA_STATUSCODE_GOODNONCRITICALTIMEOUT, "GoodNonCriticalTimeout", "A non-critical timeout occurred."},
 {UA_STATUSCODE_BADINVALIDARGUMENT, "BadInvalidArgument", "One or more arguments are invalid."},
 {UA_STATUSCODE_BADCONNECTIONREJECTED, "BadConnectionRejected", "Could not establish a network connection to remote server."},
 {UA_STATUSCODE_BADDISCONNECT, "BadDisconnect", "The server has disconnected from the client."},
 {UA_STATUSCODE_BADCONNECTIONCLOSED, "BadConnectionClosed", "The network connection has been closed."},
 {UA_STATUSCODE_BADINVALIDSTATE, "BadInvalidState", "The operation cannot be completed because the object is closed"},
 {UA_STATUSCODE_BADENDOFSTREAM, "BadEndOfStream", "Cannot move beyond end of the stream."},
 {UA_STATUSCODE_BADNODATAAVAILABLE, "BadNoDataAvailable", "No data is currently available for reading from a non-blocking stream."},
 {UA_STATUSCODE_BADWAITINGFORRESPONSE, "BadWaitingForResponse", "The asynchronous operation is waiting for a response."},
 {UA_STATUSCODE_BADOPERATIONABANDONED, "BadOperationAbandoned", "The asynchronous operation was abandoned by the caller."},
 {UA_STATUSCODE_BADEXPECTEDSTREAMTOBLOCK, "BadExpectedStreamToBlock", "The stream did not return all data requested (possibly because it is a non-blocking stream)."},
 {UA_STATUSCODE_BADWOULDBLOCK, "BadWouldBlock", "Non blocking behaviour is required and the operation would block."},
 {UA_STATUSCODE_BADSYNTAXERROR, "BadSyntaxError", "A value had an invalid syntax."},
 {UA_STATUSCODE_BADMAXCONNECTIONSREACHED, "BadMaxConnectionsReached", "The operation could not be finished because all available connections are in use."},
 {0xffffffff, "Unknown", "Unknown StatusCode"},

};
#endif

const UA_StatusCodeDescription * UA_StatusCode_description(UA_StatusCode code) {
    for(size_t i = 0; i < statusCodeDescriptionsSize; ++i) {
        if(statusCodeDescriptions[i].code == code)
            return &statusCodeDescriptions[i];
    }
    return &statusCodeDescriptions[statusCodeDescriptionsSize-1];
}

