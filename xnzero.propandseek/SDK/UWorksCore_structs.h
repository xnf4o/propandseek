#pragma once

// Name: pns, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum UWorksCore.EUWorksResult
enum class UWorksCore_EUWorksResult : uint8_t
{
	EUWorksResult__OK              = 0,
	EUWorksResult__Fail            = 1,
	EUWorksResult__NoConnection    = 2,
	EUWorksResult__InvalidPassword = 3,
	EUWorksResult__LoggedInElsewhere = 4,
	EUWorksResult__InvalidProtocolVer = 5,
	EUWorksResult__InvalidParam    = 6,
	EUWorksResult__FileNotFound    = 7,
	EUWorksResult__Busy            = 8,
	EUWorksResult__InvalidState    = 9,
	EUWorksResult__InvalidName     = 10,
	EUWorksResult__InvalidEmail    = 11,
	EUWorksResult__DuplicateName   = 12,
	EUWorksResult__AccessDenied    = 13,
	EUWorksResult__Timeout         = 14,
	EUWorksResult__Banned          = 15,
	EUWorksResult__AccountNotFound = 16,
	EUWorksResult__InvalidSteamID  = 17,
	EUWorksResult__ServiceUnavailable = 18,
	EUWorksResult__NotLoggedOn     = 19,
	EUWorksResult__Pending         = 20,
	EUWorksResult__EncryptionFailure = 21,
	EUWorksResult__InsufficientPrivilege = 22,
	EUWorksResult__LimitExceeded   = 23,
	EUWorksResult__Revoked         = 24,
	EUWorksResult__Expired         = 25,
	EUWorksResult__AlreadyRedeemed = 26,
	EUWorksResult__DuplicateRequest = 27,
	EUWorksResult__AlreadyOwned    = 28,
	EUWorksResult__IPNotFound      = 29,
	EUWorksResult__PersistFailed   = 30,
	EUWorksResult__LockingFailed   = 31,
	EUWorksResult__LogonSessionReplaced = 32,
	EUWorksResult__ConnectFailed   = 33,
	EUWorksResult__HandshakeFailed = 34,
	EUWorksResult__IOFailure       = 35,
	EUWorksResult__RemoteDisconnect = 36,
	EUWorksResult__ShoppingCartNotFound = 37,
	EUWorksResult__Blocked         = 38,
	EUWorksResult__Ignored         = 39,
	EUWorksResult__NoMatch         = 40,
	EUWorksResult__AccountDisabled = 41,
	EUWorksResult__ServiceReadOnly = 42,
	EUWorksResult__AccountNotFeatured = 43,
	EUWorksResult__AdministratorOK = 44,
	EUWorksResult__ContentVersion  = 45,
	EUWorksResult__TryAnotherCM    = 46,
	EUWorksResult__PasswordRequiredToKickSession = 47,
	EUWorksResult__AlreadyLoggedInElsewhere = 48,
	EUWorksResult__Suspended       = 49,
	EUWorksResult__Cancelled       = 50,
	EUWorksResult__DataCorruption  = 51,
	EUWorksResult__DiskFull        = 52,
	EUWorksResult__RemoteCallFailed = 53,
	EUWorksResult__PasswordUnset   = 54,
	EUWorksResult__ExternalAccountUnlinked = 55,
	EUWorksResult__PSNTicketInvalid = 56,
	EUWorksResult__ExternalAccountAlreadyLinked = 57,
	EUWorksResult__RemoteFileConflict = 58,
	EUWorksResult__IllegalPassword = 59,
	EUWorksResult__SameAsPreviousValue = 60,
	EUWorksResult__AccountLogonDenied = 61,
	EUWorksResult__CannotUseOldPassword = 62,
	EUWorksResult__InvalidLoginAuthCode = 63,
	EUWorksResult__AccountLogonDeniedNoMail = 64,
	EUWorksResult__HardwareNotCapableOfIPT = 65,
	EUWorksResult__IPTInitError    = 66,
	EUWorksResult__ParentalControlRestricted = 67,
	EUWorksResult__FacebookQueryError = 68,
	EUWorksResult__ExpiredLoginAuthCode = 69,
	EUWorksResult__IPLoginRestrictionFailed = 70,
	EUWorksResult__AccountLockedDown = 71,
	EUWorksResult__AccountLogonDeniedVerifiedEmailRequired = 72,
	EUWorksResult__NoMatchingURL   = 73,
	EUWorksResult__BadResponse     = 74,
	EUWorksResult__RequirePasswordReEntry = 75,
	EUWorksResult__ValueOutOfRange = 76,
	EUWorksResult__UnexpectedError = 77,
	EUWorksResult__Disabled        = 78,
	EUWorksResult__InvalidCEGSubmission = 79,
	EUWorksResult__RestrictedDevice = 80,
	EUWorksResult__RegionLocked    = 81,
	EUWorksResult__RateLimitExceeded = 82,
	EUWorksResult__AccountLoginDeniedNeedTwoFactor = 83,
	EUWorksResult__ItemDeleted     = 84,
	EUWorksResult__AccountLoginDeniedThrottle = 85,
	EUWorksResult__TwoFactorCodeMismatch = 86,
	EUWorksResult__TwoFactorActivationCodeMismatch = 87,
	EUWorksResult__AccountAssociatedToMultiplePartners = 88,
	EUWorksResult__NotModified     = 89,
	EUWorksResult__NoMobileDevice  = 90,
	EUWorksResult__TimeNotSynced   = 91,
	EUWorksResult__SmsCodeFailed   = 92,
	EUWorksResult__AccountLimitExceeded = 93,
	EUWorksResult__AccountActivityLimitExceeded = 94,
	EUWorksResult__PhoneActivityLimitExceeded = 95,
	EUWorksResult__RefundToWallet  = 96,
	EUWorksResult__EmailSendFailure = 97,
	EUWorksResult__NotSettled      = 98,
	EUWorksResult__NeedCaptcha     = 99,
	EUWorksResult__GSLTDenied      = 100,
	EUWorksResult__GSOwnerDenied   = 101,
	EUWorksResult__InvalidItemType = 102,
	EUWorksResult__IPBanned        = 103,
	EUWorksResult__GSLTExpired     = 104,
	EUWorksResult__EUWorksResult_MAX = 105,

};

// Enum UWorksCore.EUWorksChatRoomEnterResponse
enum class UWorksCore_EUWorksChatRoomEnterResponse : uint8_t
{
	EUWorksChatRoomEnterResponse__Success = 0,
	EUWorksChatRoomEnterResponse__DoesntExist = 1,
	EUWorksChatRoomEnterResponse__NotAllowed = 2,
	EUWorksChatRoomEnterResponse__Full = 3,
	EUWorksChatRoomEnterResponse__Error = 4,
	EUWorksChatRoomEnterResponse__Banned = 5,
	EUWorksChatRoomEnterResponse__Limited = 6,
	EUWorksChatRoomEnterResponse__ClanDisabled = 7,
	EUWorksChatRoomEnterResponse__CommunityBan = 8,
	EUWorksChatRoomEnterResponse__MemberBlockedYou = 9,
	EUWorksChatRoomEnterResponse__YouBlockedMember = 10,
	EUWorksChatRoomEnterResponse__EUWorksChatRoomEnterResponse_MAX = 11,

};

// Enum UWorksCore.EUWorksPersonaChange
enum class UWorksCore_EUWorksPersonaChange : uint8_t
{
	EUWorksPersonaChange__Name     = 0,
	EUWorksPersonaChange__Status   = 1,
	EUWorksPersonaChange__ComeOnline = 2,
	EUWorksPersonaChange__GoneOffline = 3,
	EUWorksPersonaChange__GamePlayed = 4,
	EUWorksPersonaChange__GameServer = 5,
	EUWorksPersonaChange__Avatar   = 6,
	EUWorksPersonaChange__JoinedSource = 7,
	EUWorksPersonaChange__LeftSource = 8,
	EUWorksPersonaChange__RelationshipChanged = 9,
	EUWorksPersonaChange__NameFirstSet = 10,
	EUWorksPersonaChange__FacebookInfo = 11,
	EUWorksPersonaChange__Nickname = 12,
	EUWorksPersonaChange__SteamLevel = 13,
	EUWorksPersonaChange__EUWorksPersonaChange_MAX = 14,

};

// Enum UWorksCore.EUWorksAuthSessionResponse
enum class UWorksCore_EUWorksAuthSessionResponse : uint8_t
{
	EUWorksAuthSessionResponse__OK = 0,
	EUWorksAuthSessionResponse__UserNotConnectedToSteam = 1,
	EUWorksAuthSessionResponse__NoLicenseOrExpired = 2,
	EUWorksAuthSessionResponse__VACBanned = 3,
	EUWorksAuthSessionResponse__LoggedInElseWhere = 4,
	EUWorksAuthSessionResponse__VACCheckTimedOut = 5,
	EUWorksAuthSessionResponse__AuthTicketCanceled = 6,
	EUWorksAuthSessionResponse__AuthTicketInvalidAlreadyUsed = 7,
	EUWorksAuthSessionResponse__AuthTicketInvalid = 8,
	EUWorksAuthSessionResponse__PublisherIssuedBan = 9,
	EUWorksAuthSessionResponse__EUWorksAuthSessionResponse_MAX = 10,

};

// Enum UWorksCore.EUWorksFavoriteFlags
enum class UWorksCore_EUWorksFavoriteFlags : uint8_t
{
	EUWorksFavoriteFlags__Favorite = 0,
	EUWorksFavoriteFlags__History  = 1,
	EUWorksFavoriteFlags__EUWorksFavoriteFlags_MAX = 2,

};

// Enum UWorksCore.EUWorksChatMemberStateChange
enum class UWorksCore_EUWorksChatMemberStateChange : uint8_t
{
	EUWorksChatMemberStateChange__Entered = 0,
	EUWorksChatMemberStateChange__Left = 1,
	EUWorksChatMemberStateChange__Disconnected = 2,
	EUWorksChatMemberStateChange__Kicked = 3,
	EUWorksChatMemberStateChange__Banned = 4,
	EUWorksChatMemberStateChange__EUWorksChatMemberStateChange_MAX = 5,

};

// Enum UWorksCore.EUWorksChatEntryType
enum class UWorksCore_EUWorksChatEntryType : uint8_t
{
	EUWorksChatEntryType__Invalid  = 0,
	EUWorksChatEntryType__ChatMessage = 1,
	EUWorksChatEntryType__Typing   = 2,
	EUWorksChatEntryType__InviteGame = 3,
	EUWorksChatEntryType__Emote    = 4,
	EUWorksChatEntryType__LeftConversation = 5,
	EUWorksChatEntryType__Entered  = 6,
	EUWorksChatEntryType__WasKicked = 7,
	EUWorksChatEntryType__WasBanned = 8,
	EUWorksChatEntryType__Disconnected = 9,
	EUWorksChatEntryType__HistoricalChat = 10,
	EUWorksChatEntryType__LinkBlocked = 11,
	EUWorksChatEntryType__EUWorksChatEntryType_MAX = 12,

};

// Enum UWorksCore.EUWorksP2PSessionError
enum class UWorksCore_EUWorksP2PSessionError : uint8_t
{
	EUWorksP2PSessionError__None   = 0,
	EUWorksP2PSessionError__NotRunningApp = 1,
	EUWorksP2PSessionError__NoRightsToApp = 2,
	EUWorksP2PSessionError__DestinationNotLoggedIn = 3,
	EUWorksP2PSessionError__Timeout = 4,
	EUWorksP2PSessionError__Max    = 5,

};

// Enum UWorksCore.EUWorksDenyReason
enum class UWorksCore_EUWorksDenyReason : uint8_t
{
	EUWorksDenyReason__Invalid     = 0,
	EUWorksDenyReason__InvalidVersion = 1,
	EUWorksDenyReason__Generic     = 2,
	EUWorksDenyReason__NotLoggedOn = 3,
	EUWorksDenyReason__NoLicense   = 4,
	EUWorksDenyReason__Cheater     = 5,
	EUWorksDenyReason__LoggedInElseWhere = 6,
	EUWorksDenyReason__UnknownText = 7,
	EUWorksDenyReason__IncompatibleAnticheat = 8,
	EUWorksDenyReason__MemoryCorruption = 9,
	EUWorksDenyReason__IncompatibleSoftware = 10,
	EUWorksDenyReason__SteamConnectionLost = 11,
	EUWorksDenyReason__SteamConnectionError = 12,
	EUWorksDenyReason__SteamResponseTimedOut = 13,
	EUWorksDenyReason__SteamValidationStalled = 14,
	EUWorksDenyReason__SteamOwnerLeftGuestUser = 15,
	EUWorksDenyReason__EUWorksDenyReason_MAX = 16,

};

// Enum UWorksCore.EUWorksFailureType
enum class UWorksCore_EUWorksFailureType : uint8_t
{
	EUWorksFailureType__FlushedCallbackQueue = 0,
	EUWorksFailureType__PipeFail   = 1,
	EUWorksFailureType__EUWorksFailureType_MAX = 2,

};

// Enum UWorksCore.EUWorksBroadcastUploadResult
enum class UWorksCore_EUWorksBroadcastUploadResult : uint8_t
{
	EUWorksBroadcastUploadResult__None = 0,
	EUWorksBroadcastUploadResult__OK = 1,
	EUWorksBroadcastUploadResult__InitFailed = 2,
	EUWorksBroadcastUploadResult__FrameFailed = 3,
	EUWorksBroadcastUploadResult__Timeout = 4,
	EUWorksBroadcastUploadResult__BandwidthExceeded = 5,
	EUWorksBroadcastUploadResult__LowFPS = 6,
	EUWorksBroadcastUploadResult__MissingKeyFrames = 7,
	EUWorksBroadcastUploadResult__NoConnection = 8,
	EUWorksBroadcastUploadResult__RelayFailed = 9,
	EUWorksBroadcastUploadResult__SettingsChanged = 10,
	EUWorksBroadcastUploadResult__MissingAudio = 11,
	EUWorksBroadcastUploadResult__TooFarBehind = 12,
	EUWorksBroadcastUploadResult__TranscodeBehind = 13,
	EUWorksBroadcastUploadResult__EUWorksBroadcastUploadResult_MAX = 14,

};

// Enum UWorksCore.EUWorksSteamControllerPad
enum class UWorksCore_EUWorksSteamControllerPad : uint8_t
{
	EUWorksSteamControllerPad__Left = 0,
	EUWorksSteamControllerPad__Right = 1,
	EUWorksSteamControllerPad__EUWorksSteamControllerPad_MAX = 2,

};

// Enum UWorksCore.EUWorksSteamControllerLEDFlag
enum class UWorksCore_EUWorksSteamControllerLEDFlag : uint8_t
{
	EUWorksSteamControllerLEDFlag__SetColor = 0,
	EUWorksSteamControllerLEDFlag__RestoreUserDefault = 1,
	EUWorksSteamControllerLEDFlag__EUWorksSteamControllerLEDFlag_MAX = 2,

};

// Enum UWorksCore.EUWorksControllerSourceMode
enum class UWorksCore_EUWorksControllerSourceMode : uint8_t
{
	EUWorksControllerSourceMode__None = 0,
	EUWorksControllerSourceMode__Dpad = 1,
	EUWorksControllerSourceMode__Buttons = 2,
	EUWorksControllerSourceMode__FourButtons = 3,
	EUWorksControllerSourceMode__AbsoluteMouse = 4,
	EUWorksControllerSourceMode__RelativeMouse = 5,
	EUWorksControllerSourceMode__JoystickMove = 6,
	EUWorksControllerSourceMode__JoystickMouse = 7,
	EUWorksControllerSourceMode__JoystickCamera = 8,
	EUWorksControllerSourceMode__ScrollWheel = 9,
	EUWorksControllerSourceMode__Trigger = 10,
	EUWorksControllerSourceMode__TouchMenu = 11,
	EUWorksControllerSourceMode__MouseJoystick = 12,
	EUWorksControllerSourceMode__MouseRegion = 13,
	EUWorksControllerSourceMode__RadialMenu = 14,
	EUWorksControllerSourceMode__Switches = 15,
	EUWorksControllerSourceMode__EUWorksControllerSourceMode_MAX = 16,

};

// Enum UWorksCore.EUWorksControllerSource
enum class UWorksCore_EUWorksControllerSource : uint8_t
{
	EUWorksControllerSource__None  = 0,
	EUWorksControllerSource__LeftTrackpad = 1,
	EUWorksControllerSource__RightTrackpad = 2,
	EUWorksControllerSource__Joystick = 3,
	EUWorksControllerSource__ABXY  = 4,
	EUWorksControllerSource__Switch = 5,
	EUWorksControllerSource__LeftTrigger = 6,
	EUWorksControllerSource__RightTrigger = 7,
	EUWorksControllerSource__Gyro  = 8,
	EUWorksControllerSource__CenterTrackpad = 9,
	EUWorksControllerSource__RightJoystick = 10,
	EUWorksControllerSource__DPad  = 11,
	EUWorksControllerSource__Count = 12,
	EUWorksControllerSource__EUWorksControllerSource_MAX = 13,

};

// Enum UWorksCore.EUWorksControllerActionOrigin
enum class UWorksCore_EUWorksControllerActionOrigin : uint8_t
{
	EUWorksControllerActionOrigin__None = 0,
	EUWorksControllerActionOrigin__A = 1,
	EUWorksControllerActionOrigin__B = 2,
	EUWorksControllerActionOrigin__X = 3,
	EUWorksControllerActionOrigin__Y = 4,
	EUWorksControllerActionOrigin__LeftBumper = 5,
	EUWorksControllerActionOrigin__RightBumper = 6,
	EUWorksControllerActionOrigin__LeftGrip = 7,
	EUWorksControllerActionOrigin__RightGrip = 8,
	EUWorksControllerActionOrigin__Start = 9,
	EUWorksControllerActionOrigin__Back = 10,
	EUWorksControllerActionOrigin__LeftPad_Touch = 11,
	EUWorksControllerActionOrigin__LeftPad_Swipe = 12,
	EUWorksControllerActionOrigin__LeftPad_Click = 13,
	EUWorksControllerActionOrigin__LeftPad_DPadNorth = 14,
	EUWorksControllerActionOrigin__LeftPad_DPadSouth = 15,
	EUWorksControllerActionOrigin__LeftPad_DPadWest = 16,
	EUWorksControllerActionOrigin__LeftPad_DPadEast = 17,
	EUWorksControllerActionOrigin__RightPad_Touch = 18,
	EUWorksControllerActionOrigin__RightPad_Swipe = 19,
	EUWorksControllerActionOrigin__RightPad_Click = 20,
	EUWorksControllerActionOrigin__RightPad_DPadNorth = 21,
	EUWorksControllerActionOrigin__RightPad_DPadSouth = 22,
	EUWorksControllerActionOrigin__RightPad_DPadWest = 23,
	EUWorksControllerActionOrigin__RightPad_DPadEast = 24,
	EUWorksControllerActionOrigin__LeftTrigger_Pull = 25,
	EUWorksControllerActionOrigin__LeftTrigger_Click = 26,
	EUWorksControllerActionOrigin__RightTrigger_Pull = 27,
	EUWorksControllerActionOrigin__RightTrigger_Click = 28,
	EUWorksControllerActionOrigin__LeftStick_Move = 29,
	EUWorksControllerActionOrigin__LeftStick_Click = 30,
	EUWorksControllerActionOrigin__LeftStick_DPadNorth = 31,
	EUWorksControllerActionOrigin__LeftStick_DPadSouth = 32,
	EUWorksControllerActionOrigin__LeftStick_DPadWest = 33,
	EUWorksControllerActionOrigin__LeftStick_DPadEast = 34,
	EUWorksControllerActionOrigin__Gyro_Move = 35,
	EUWorksControllerActionOrigin__Gyro_Pitch = 36,
	EUWorksControllerActionOrigin__Gyro_Yaw = 37,
	EUWorksControllerActionOrigin__Gyro_Roll = 38,
	EUWorksControllerActionOrigin__PS4_X = 39,
	EUWorksControllerActionOrigin__PS4_Circle = 40,
	EUWorksControllerActionOrigin__PS4_Triangle = 41,
	EUWorksControllerActionOrigin__PS4_Square = 42,
	EUWorksControllerActionOrigin__PS4_LeftBumper = 43,
	EUWorksControllerActionOrigin__PS4_RightBumper = 44,
	EUWorksControllerActionOrigin__PS4_Options = 45,
	EUWorksControllerActionOrigin__PS4_Share = 46,
	EUWorksControllerActionOrigin__PS4_LeftPad_Touch = 47,
	EUWorksControllerActionOrigin__PS4_LeftPad_Swipe = 48,
	EUWorksControllerActionOrigin__PS4_LeftPad_Click = 49,
	EUWorksControllerActionOrigin__PS4_LeftPad_DPadNorth = 50,
	EUWorksControllerActionOrigin__PS4_LeftPad_DPadSouth = 51,
	EUWorksControllerActionOrigin__PS4_LeftPad_DPadWest = 52,
	EUWorksControllerActionOrigin__PS4_LeftPad_DPadEast = 53,
	EUWorksControllerActionOrigin__PS4_RightPad_Touch = 54,
	EUWorksControllerActionOrigin__PS4_RightPad_Swipe = 55,
	EUWorksControllerActionOrigin__PS4_RightPad_Click = 56,
	EUWorksControllerActionOrigin__PS4_RightPad_DPadNorth = 57,
	EUWorksControllerActionOrigin__PS4_RightPad_DPadSouth = 58,
	EUWorksControllerActionOrigin__PS4_RightPad_DPadWest = 59,
	EUWorksControllerActionOrigin__PS4_RightPad_DPadEast = 60,
	EUWorksControllerActionOrigin__PS4_CenterPad_Touch = 61,
	EUWorksControllerActionOrigin__PS4_CenterPad_Swipe = 62,
	EUWorksControllerActionOrigin__PS4_CenterPad_Click = 63,
	EUWorksControllerActionOrigin__PS4_CenterPad_DPadNorth = 64,
	EUWorksControllerActionOrigin__PS4_CenterPad_DPadSouth = 65,
	EUWorksControllerActionOrigin__PS4_CenterPad_DPadWest = 66,
	EUWorksControllerActionOrigin__PS4_CenterPad_DPadEast = 67,
	EUWorksControllerActionOrigin__PS4_LeftTrigger_Pull = 68,
	EUWorksControllerActionOrigin__PS4_LeftTrigger_Click = 69,
	EUWorksControllerActionOrigin__PS4_RightTrigger_Pull = 70,
	EUWorksControllerActionOrigin__PS4_RightTrigger_Click = 71,
	EUWorksControllerActionOrigin__PS4_LeftStick_Move = 72,
	EUWorksControllerActionOrigin__PS4_LeftStick_Click = 73,
	EUWorksControllerActionOrigin__PS4_LeftStick_DPadNorth = 74,
	EUWorksControllerActionOrigin__PS4_LeftStick_DPadSouth = 75,
	EUWorksControllerActionOrigin__PS4_LeftStick_DPadWest = 76,
	EUWorksControllerActionOrigin__PS4_LeftStick_DPadEast = 77,
	EUWorksControllerActionOrigin__PS4_RightStick_Move = 78,
	EUWorksControllerActionOrigin__PS4_RightStick_Click = 79,
	EUWorksControllerActionOrigin__PS4_RightStick_DPadNorth = 80,
	EUWorksControllerActionOrigin__PS4_RightStick_DPadSouth = 81,
	EUWorksControllerActionOrigin__PS4_RightStick_DPadWest = 82,
	EUWorksControllerActionOrigin__PS4_RightStick_DPadEast = 83,
	EUWorksControllerActionOrigin__PS4_DPad_North = 84,
	EUWorksControllerActionOrigin__PS4_DPad_South = 85,
	EUWorksControllerActionOrigin__PS4_DPad_West = 86,
	EUWorksControllerActionOrigin__PS4_DPad_East = 87,
	EUWorksControllerActionOrigin__PS4_Gyro_Move = 88,
	EUWorksControllerActionOrigin__PS4_Gyro_Pitch = 89,
	EUWorksControllerActionOrigin__PS4_Gyro_Yaw = 90,
	EUWorksControllerActionOrigin__PS4_Gyro_Roll = 91,
	EUWorksControllerActionOrigin__XBoxOne_A = 92,
	EUWorksControllerActionOrigin__XBoxOne_B = 93,
	EUWorksControllerActionOrigin__XBoxOne_X = 94,
	EUWorksControllerActionOrigin__XBoxOne_Y = 95,
	EUWorksControllerActionOrigin__XBoxOne_LeftBumper = 96,
	EUWorksControllerActionOrigin__XBoxOne_RightBumper = 97,
	EUWorksControllerActionOrigin__XBoxOne_Menu = 98,
	EUWorksControllerActionOrigin__XBoxOne_View = 99,
	EUWorksControllerActionOrigin__XBoxOne_LeftTrigger_Pull = 100,
	EUWorksControllerActionOrigin__XBoxOne_LeftTrigger_Click = 101,
	EUWorksControllerActionOrigin__XBoxOne_RightTrigger_Pull = 102,
	EUWorksControllerActionOrigin__XBoxOne_RightTrigger_Click = 103,
	EUWorksControllerActionOrigin__XBoxOne_LeftStick_Move = 104,
	EUWorksControllerActionOrigin__XBoxOne_LeftStick_Click = 105,
	EUWorksControllerActionOrigin__XBoxOne_LeftStick_DPadNorth = 106,
	EUWorksControllerActionOrigin__XBoxOne_LeftStick_DPadSouth = 107,
	EUWorksControllerActionOrigin__XBoxOne_LeftStick_DPadWest = 108,
	EUWorksControllerActionOrigin__XBoxOne_LeftStick_DPadEast = 109,
	EUWorksControllerActionOrigin__XBoxOne_RightStick_Move = 110,
	EUWorksControllerActionOrigin__XBoxOne_RightStick_Click = 111,
	EUWorksControllerActionOrigin__XBoxOne_RightStick_DPadNorth = 112,
	EUWorksControllerActionOrigin__XBoxOne_RightStick_DPadSouth = 113,
	EUWorksControllerActionOrigin__XBoxOne_RightStick_DPadWest = 114,
	EUWorksControllerActionOrigin__XBoxOne_RightStick_DPadEast = 115,
	EUWorksControllerActionOrigin__XBoxOne_DPad_North = 116,
	EUWorksControllerActionOrigin__XBoxOne_DPad_South = 117,
	EUWorksControllerActionOrigin__XBoxOne_DPad_West = 118,
	EUWorksControllerActionOrigin__XBoxOne_DPad_East = 119,
	EUWorksControllerActionOrigin__XBox360_A = 120,
	EUWorksControllerActionOrigin__XBox360_B = 121,
	EUWorksControllerActionOrigin__XBox360_X = 122,
	EUWorksControllerActionOrigin__XBox360_Y = 123,
	EUWorksControllerActionOrigin__XBox360_LeftBumper = 124,
	EUWorksControllerActionOrigin__XBox360_RightBumper = 125,
	EUWorksControllerActionOrigin__XBox360_Start = 126,
	EUWorksControllerActionOrigin__XBox360_Back = 127,
	EUWorksControllerActionOrigin__XBox360_LeftTrigger_Pull = 128,
	EUWorksControllerActionOrigin__XBox360_LeftTrigger_Click = 129,
	EUWorksControllerActionOrigin__XBox360_RightTrigger_Pull = 130,
	EUWorksControllerActionOrigin__XBox360_RightTrigger_Click = 131,
	EUWorksControllerActionOrigin__XBox360_LeftStick_Move = 132,
	EUWorksControllerActionOrigin__XBox360_LeftStick_Click = 133,
	EUWorksControllerActionOrigin__XBox360_LeftStick_DPadNorth = 134,
	EUWorksControllerActionOrigin__XBox360_LeftStick_DPadSouth = 135,
	EUWorksControllerActionOrigin__XBox360_LeftStick_DPadWest = 136,
	EUWorksControllerActionOrigin__XBox360_LeftStick_DPadEast = 137,
	EUWorksControllerActionOrigin__XBox360_RightStick_Move = 138,
	EUWorksControllerActionOrigin__XBox360_RightStick_Click = 139,
	EUWorksControllerActionOrigin__XBox360_RightStick_DPadNorth = 140,
	EUWorksControllerActionOrigin__XBox360_RightStick_DPadSouth = 141,
	EUWorksControllerActionOrigin__XBox360_RightStick_DPadWest = 142,
	EUWorksControllerActionOrigin__XBox360_RightStick_DPadEast = 143,
	EUWorksControllerActionOrigin__XBox360_DPad_North = 144,
	EUWorksControllerActionOrigin__XBox360_DPad_South = 145,
	EUWorksControllerActionOrigin__XBox360_DPad_West = 146,
	EUWorksControllerActionOrigin__XBox360_DPad_East = 147,
	EUWorksControllerActionOrigin__SteamV2_A = 148,
	EUWorksControllerActionOrigin__SteamV2_B = 149,
	EUWorksControllerActionOrigin__SteamV2_X = 150,
	EUWorksControllerActionOrigin__SteamV2_Y = 151,
	EUWorksControllerActionOrigin__SteamV2_LeftBumper = 152,
	EUWorksControllerActionOrigin__SteamV2_RightBumper = 153,
	EUWorksControllerActionOrigin__SteamV2_LeftGrip = 154,
	EUWorksControllerActionOrigin__SteamV2_RightGrip = 155,
	EUWorksControllerActionOrigin__SteamV2_Start = 156,
	EUWorksControllerActionOrigin__SteamV2_Back = 157,
	EUWorksControllerActionOrigin__SteamV2_LeftPad_Touch = 158,
	EUWorksControllerActionOrigin__SteamV2_LeftPad_Swipe = 159,
	EUWorksControllerActionOrigin__SteamV2_LeftPad_Click = 160,
	EUWorksControllerActionOrigin__SteamV2_LeftPad_DPadNorth = 161,
	EUWorksControllerActionOrigin__SteamV2_LeftPad_DPadSouth = 162,
	EUWorksControllerActionOrigin__SteamV2_LeftPad_DPadWest = 163,
	EUWorksControllerActionOrigin__SteamV2_LeftPad_DPadEast = 164,
	EUWorksControllerActionOrigin__SteamV2_RightPad_Touch = 165,
	EUWorksControllerActionOrigin__SteamV2_RightPad_Swipe = 166,
	EUWorksControllerActionOrigin__SteamV2_RightPad_Click = 167,
	EUWorksControllerActionOrigin__SteamV2_RightPad_DPadNorth = 168,
	EUWorksControllerActionOrigin__SteamV2_RightPad_DPadSouth = 169,
	EUWorksControllerActionOrigin__SteamV2_RightPad_DPadWest = 170,
	EUWorksControllerActionOrigin__SteamV2_RightPad_DPadEast = 171,
	EUWorksControllerActionOrigin__SteamV2_LeftTrigger_Pull = 172,
	EUWorksControllerActionOrigin__SteamV2_LeftTrigger_Click = 173,
	EUWorksControllerActionOrigin__SteamV2_RightTrigger_Pull = 174,
	EUWorksControllerActionOrigin__SteamV2_RightTrigger_Click = 175,
	EUWorksControllerActionOrigin__SteamV2_LeftStick_Move = 176,
	EUWorksControllerActionOrigin__SteamV2_LeftStick_Click = 177,
	EUWorksControllerActionOrigin__SteamV2_LeftStick_DPadNorth = 178,
	EUWorksControllerActionOrigin__SteamV2_LeftStick_DPadSouth = 179,
	EUWorksControllerActionOrigin__SteamV2_LeftStick_DPadWest = 180,
	EUWorksControllerActionOrigin__SteamV2_LeftStick_DPadEast = 181,
	EUWorksControllerActionOrigin__SteamV2_Gyro_Move = 182,
	EUWorksControllerActionOrigin__SteamV2_Gyro_Pitch = 183,
	EUWorksControllerActionOrigin__SteamV2_Gyro_Yaw = 184,
	EUWorksControllerActionOrigin__SteamV2_Gyro_Roll = 185,
	EUWorksControllerActionOrigin__Count = 186,
	EUWorksControllerActionOrigin__EUWorksControllerActionOrigin_MAX = 187,

};

// Enum UWorksCore.EUWorksUserRestriction
enum class UWorksCore_EUWorksUserRestriction : uint8_t
{
	EUWorksUserRestriction__Unknown = 0,
	EUWorksUserRestriction__AnyChat = 1,
	EUWorksUserRestriction__VoiceChat = 2,
	EUWorksUserRestriction__GroupChat = 3,
	EUWorksUserRestriction__Rating = 4,
	EUWorksUserRestriction__GameInvites = 5,
	EUWorksUserRestriction__Trading = 6,
	EUWorksUserRestriction__EUWorksUserRestriction_MAX = 7,

};

// Enum UWorksCore.EUWorksOverlaySpecific
enum class UWorksCore_EUWorksOverlaySpecific : uint8_t
{
	EUWorksOverlaySpecific__SteamID = 0,
	EUWorksOverlaySpecific__Chat   = 1,
	EUWorksOverlaySpecific__JoinTrade = 2,
	EUWorksOverlaySpecific__Stats  = 3,
	EUWorksOverlaySpecific__Achievements = 4,
	EUWorksOverlaySpecific__FriendAdd = 5,
	EUWorksOverlaySpecific__FriendRemove = 6,
	EUWorksOverlaySpecific__FriendRequestAccept = 7,
	EUWorksOverlaySpecific__FriendRequestIgnore = 8,
	EUWorksOverlaySpecific__EUWorksOverlaySpecific_MAX = 9,

};

// Enum UWorksCore.EUWorksOverlayGeneric
enum class UWorksCore_EUWorksOverlayGeneric : uint8_t
{
	EUWorksOverlayGeneric__Friends = 0,
	EUWorksOverlayGeneric__Community = 1,
	EUWorksOverlayGeneric__Players = 2,
	EUWorksOverlayGeneric__Settings = 3,
	EUWorksOverlayGeneric__OfficialGameGroup = 4,
	EUWorksOverlayGeneric__Stats   = 5,
	EUWorksOverlayGeneric__Achievements = 6,
	EUWorksOverlayGeneric__EUWorksOverlayGeneric_MAX = 7,

};

// Enum UWorksCore.EUWorksPersonaState
enum class UWorksCore_EUWorksPersonaState : uint8_t
{
	EUWorksPersonaState__Offline   = 0,
	EUWorksPersonaState__Online    = 1,
	EUWorksPersonaState__Busy      = 2,
	EUWorksPersonaState__Away      = 3,
	EUWorksPersonaState__Snooze    = 4,
	EUWorksPersonaState__LookingToTrade = 5,
	EUWorksPersonaState__LookingToPlay = 6,
	EUWorksPersonaState__Max       = 7,

};

// Enum UWorksCore.EUWorksOverlayToStoreFlag
enum class UWorksCore_EUWorksOverlayToStoreFlag : uint8_t
{
	EUWorksOverlayToStoreFlag__None = 0,
	EUWorksOverlayToStoreFlag__AddToCart = 1,
	EUWorksOverlayToStoreFlag__AddToCartAndShow = 2,
	EUWorksOverlayToStoreFlag__EUWorksOverlayToStoreFlag_MAX = 3,

};

// Enum UWorksCore.EUWorksFriendRelationship
enum class UWorksCore_EUWorksFriendRelationship : uint8_t
{
	EUWorksFriendRelationship__None = 0,
	EUWorksFriendRelationship__Blocked = 1,
	EUWorksFriendRelationship__RequestRecipient = 2,
	EUWorksFriendRelationship__Friend = 3,
	EUWorksFriendRelationship__RequestInitiator = 4,
	EUWorksFriendRelationship__Ignored = 5,
	EUWorksFriendRelationship__IgnoredFriend = 6,
	EUWorksFriendRelationship__Max = 7,

};

// Enum UWorksCore.EUWorksFriendFlags
enum class UWorksCore_EUWorksFriendFlags : uint8_t
{
	EUWorksFriendFlags__Blocked    = 0,
	EUWorksFriendFlags__FriendshipRequested = 1,
	EUWorksFriendFlags__Immediate  = 2,
	EUWorksFriendFlags__ClanMember = 3,
	EUWorksFriendFlags__OnGameServer = 4,
	EUWorksFriendFlags__HasPlayedWith = 5,
	EUWorksFriendFlags__FriendOfFriend = 6,
	EUWorksFriendFlags__RequestingFriendship = 7,
	EUWorksFriendFlags__RequestingInfo = 8,
	EUWorksFriendFlags__Ignored    = 9,
	EUWorksFriendFlags__IgnoredFriend = 10,
	EUWorksFriendFlags__Suggested  = 11,
	EUWorksFriendFlags__ChatMember = 12,
	EUWorksFriendFlags__All        = 13,
	EUWorksFriendFlags__EUWorksFriendFlags_MAX = 14,

};

// Enum UWorksCore.EUWorksSteamItemFlags
enum class UWorksCore_EUWorksSteamItemFlags : uint8_t
{
	EUWorksSteamItemFlags__NoTrade = 0,
	EUWorksSteamItemFlags__Removed = 1,
	EUWorksSteamItemFlags__Consumed = 2,
	EUWorksSteamItemFlags__EUWorksSteamItemFlags_MAX = 3,

};

// Enum UWorksCore.EUWorksLobbyType
enum class UWorksCore_EUWorksLobbyType : uint8_t
{
	EUWorksLobbyType__Private      = 0,
	EUWorksLobbyType__FriendsOnly  = 1,
	EUWorksLobbyType__Public       = 2,
	EUWorksLobbyType__Invisible    = 3,
	EUWorksLobbyType__EUWorksLobbyType_MAX = 4,

};

// Enum UWorksCore.EUWorksLobbyDistanceFilter
enum class UWorksCore_EUWorksLobbyDistanceFilter : uint8_t
{
	EUWorksLobbyDistanceFilter__Close = 0,
	EUWorksLobbyDistanceFilter__Default = 1,
	EUWorksLobbyDistanceFilter__Far = 2,
	EUWorksLobbyDistanceFilter__Worldwide = 3,
	EUWorksLobbyDistanceFilter__EUWorksLobbyDistanceFilter_MAX = 4,

};

// Enum UWorksCore.EUWorksLobbyComparison
enum class UWorksCore_EUWorksLobbyComparison : uint8_t
{
	EUWorksLobbyComparison__EqualToOrLessThan = 0,
	EUWorksLobbyComparison__LessThan = 1,
	EUWorksLobbyComparison__Equal  = 2,
	EUWorksLobbyComparison__GreaterThan = 3,
	EUWorksLobbyComparison__EqualToOrGreaterThan = 4,
	EUWorksLobbyComparison__NotEqual = 5,
	EUWorksLobbyComparison__EUWorksLobbyComparison_MAX = 6,

};

// Enum UWorksCore.EUWorksServerQueryType
enum class UWorksCore_EUWorksServerQueryType : uint8_t
{
	EUWorksServerQueryType__Internet = 0,
	EUWorksServerQueryType__LAN    = 1,
	EUWorksServerQueryType__Friends = 2,
	EUWorksServerQueryType__Favorites = 3,
	EUWorksServerQueryType__History = 4,
	EUWorksServerQueryType__Spectator = 5,
	EUWorksServerQueryType__EUWorksServerQueryType_MAX = 6,

};

// Enum UWorksCore.EUWorksAudioPlaybackStatus
enum class UWorksCore_EUWorksAudioPlaybackStatus : uint8_t
{
	EUWorksAudioPlaybackStatus__Undefined = 0,
	EUWorksAudioPlaybackStatus__Playing = 1,
	EUWorksAudioPlaybackStatus__Paused = 2,
	EUWorksAudioPlaybackStatus__Idle = 3,
	EUWorksAudioPlaybackStatus__EUWorksAudioPlaybackStatus_MAX = 4,

};

// Enum UWorksCore.EUWorksP2PSend
enum class UWorksCore_EUWorksP2PSend : uint8_t
{
	EUWorksP2PSend__Unreliable     = 0,
	EUWorksP2PSend__UnreliableNoDelay = 1,
	EUWorksP2PSend__Reliable       = 2,
	EUWorksP2PSend__ReliableWithBuffering = 3,
	EUWorksP2PSend__EUWorksP2PSend_MAX = 4,

};

// Enum UWorksCore.EUWorksRemoteStoragePlatform
enum class UWorksCore_EUWorksRemoteStoragePlatform : uint8_t
{
	EUWorksRemoteStoragePlatform__Windows = 0,
	EUWorksRemoteStoragePlatform__OSX = 1,
	EUWorksRemoteStoragePlatform__PS3 = 2,
	EUWorksRemoteStoragePlatform__Linux = 3,
	EUWorksRemoteStoragePlatform__Reserved = 4,
	EUWorksRemoteStoragePlatform__All = 5,
	EUWorksRemoteStoragePlatform__EUWorksRemoteStoragePlatform_MAX = 6,

};

// Enum UWorksCore.EUWorksVRScreenshotType
enum class UWorksCore_EUWorksVRScreenshotType : uint8_t
{
	EUWorksVRScreenshotType__None  = 0,
	EUWorksVRScreenshotType__Mono  = 1,
	EUWorksVRScreenshotType__Stereo = 2,
	EUWorksVRScreenshotType__MonoCubemap = 3,
	EUWorksVRScreenshotType__MonoPanorama = 4,
	EUWorksVRScreenshotType__StereoPanorama = 5,
	EUWorksVRScreenshotType__EUWorksVRScreenshotType_MAX = 6,

};

// Enum UWorksCore.EUWorksWorkshopFileType
enum class UWorksCore_EUWorksWorkshopFileType : uint8_t
{
	EUWorksWorkshopFileType__Community = 0,
	EUWorksWorkshopFileType__Microtransaction = 1,
	EUWorksWorkshopFileType__Collection = 2,
	EUWorksWorkshopFileType__Art   = 3,
	EUWorksWorkshopFileType__Video = 4,
	EUWorksWorkshopFileType__Screenshot = 5,
	EUWorksWorkshopFileType__Game  = 6,
	EUWorksWorkshopFileType__Software = 7,
	EUWorksWorkshopFileType__Concept = 8,
	EUWorksWorkshopFileType__WebGuide = 9,
	EUWorksWorkshopFileType__IntegratedGuide = 10,
	EUWorksWorkshopFileType__Merch = 11,
	EUWorksWorkshopFileType__ControllerBinding = 12,
	EUWorksWorkshopFileType__SteamworksAccessInvite = 13,
	EUWorksWorkshopFileType__SteamVideo = 14,
	EUWorksWorkshopFileType__GameManagedItem = 15,
	EUWorksWorkshopFileType__Max   = 16,

};

// Enum UWorksCore.EUWorksRemoteStoragePublishedFileVisibility
enum class UWorksCore_EUWorksRemoteStoragePublishedFileVisibility : uint8_t
{
	EUWorksRemoteStoragePublishedFileVisibility__Public = 0,
	EUWorksRemoteStoragePublishedFileVisibility__FriendsOnly = 1,
	EUWorksRemoteStoragePublishedFileVisibility__Private = 2,
	EUWorksRemoteStoragePublishedFileVisibility__EUWorksRemoteStoragePublishedFileVisibility_MAX = 3,

};

// Enum UWorksCore.EUWorksUserUGCListSortOrder
enum class UWorksCore_EUWorksUserUGCListSortOrder : uint8_t
{
	EUWorksUserUGCListSortOrder__CreationOrderDesc = 0,
	EUWorksUserUGCListSortOrder__CreationOrderAsc = 1,
	EUWorksUserUGCListSortOrder__TitleAsc = 2,
	EUWorksUserUGCListSortOrder__LastUpdatedDesc = 3,
	EUWorksUserUGCListSortOrder__SubscriptionDateDesc = 4,
	EUWorksUserUGCListSortOrder__VoteScoreDesc = 5,
	EUWorksUserUGCListSortOrder__ForModeration = 6,
	EUWorksUserUGCListSortOrder__EUWorksUserUGCListSortOrder_MAX = 7,

};

// Enum UWorksCore.EUWorksUserUGCList
enum class UWorksCore_EUWorksUserUGCList : uint8_t
{
	EUWorksUserUGCList__Published  = 0,
	EUWorksUserUGCList__VotedOn    = 1,
	EUWorksUserUGCList__VotedUp    = 2,
	EUWorksUserUGCList__VotedDown  = 3,
	EUWorksUserUGCList__WillVoteLater = 4,
	EUWorksUserUGCList__Favorited  = 5,
	EUWorksUserUGCList__Subscribed = 6,
	EUWorksUserUGCList__UsedOrPlayed = 7,
	EUWorksUserUGCList__Followed   = 8,
	EUWorksUserUGCList__EUWorksUserUGCList_MAX = 9,

};

// Enum UWorksCore.EUWorksUGCQuery
enum class UWorksCore_EUWorksUGCQuery : uint8_t
{
	EUWorksUGCQuery__RankedByVote  = 0,
	EUWorksUGCQuery__RankedByPublicationDate = 1,
	EUWorksUGCQuery__AcceptedForGameRankedByAcceptanceDate = 2,
	EUWorksUGCQuery__RankedByTrend = 3,
	EUWorksUGCQuery__FavoritedByFriendsRankedByPublicationDate = 4,
	EUWorksUGCQuery__CreatedByFriendsRankedByPublicationDate = 5,
	EUWorksUGCQuery__RankedByNumTimesReported = 6,
	EUWorksUGCQuery__CreatedByFollowedUsersRankedByPublicationDate = 7,
	EUWorksUGCQuery__NotYetRated   = 8,
	EUWorksUGCQuery__RankedByTotalVotesAsc = 9,
	EUWorksUGCQuery__RankedByVotesUp = 10,
	EUWorksUGCQuery__RankedByTextSearch = 11,
	EUWorksUGCQuery__RankedByTotalUniqueSubscriptions = 12,
	EUWorksUGCQuery__RankedByPlaytimeTrend = 13,
	EUWorksUGCQuery__RankedByTotalPlaytime = 14,
	EUWorksUGCQuery__RankedByAveragePlaytimeTrend = 15,
	EUWorksUGCQuery__RankedByLifetimeAveragePlaytime = 16,
	EUWorksUGCQuery__RankedByPlaytimeSessionsTrend = 17,
	EUWorksUGCQuery__RankedByLifetimePlaytimeSessions = 18,
	EUWorksUGCQuery__EUWorksUGCQuery_MAX = 19,

};

// Enum UWorksCore.EUWorksUGCMatchingUGCType
enum class UWorksCore_EUWorksUGCMatchingUGCType : uint8_t
{
	EUWorksUGCMatchingUGCType__Items = 0,
	EUWorksUGCMatchingUGCType__Items_Mtx = 1,
	EUWorksUGCMatchingUGCType__Items_ReadyToUse = 2,
	EUWorksUGCMatchingUGCType__Collections = 3,
	EUWorksUGCMatchingUGCType__Artwork = 4,
	EUWorksUGCMatchingUGCType__Videos = 5,
	EUWorksUGCMatchingUGCType__Screenshots = 6,
	EUWorksUGCMatchingUGCType__AllGuides = 7,
	EUWorksUGCMatchingUGCType__WebGuides = 8,
	EUWorksUGCMatchingUGCType__IntegratedGuides = 9,
	EUWorksUGCMatchingUGCType__UsableInGame = 10,
	EUWorksUGCMatchingUGCType__ControllerBindings = 11,
	EUWorksUGCMatchingUGCType__GameManagedItems = 12,
	EUWorksUGCMatchingUGCType__All = 13,
	EUWorksUGCMatchingUGCType__EUWorksUGCMatchingUGCType_MAX = 14,

};

// Enum UWorksCore.EUWorksItemUpdateStatus
enum class UWorksCore_EUWorksItemUpdateStatus : uint8_t
{
	EUWorksItemUpdateStatus__Invalid = 0,
	EUWorksItemUpdateStatus__PreparingConfig = 1,
	EUWorksItemUpdateStatus__PreparingContent = 2,
	EUWorksItemUpdateStatus__UploadingContent = 3,
	EUWorksItemUpdateStatus__UploadingPreviewFile = 4,
	EUWorksItemUpdateStatus__CommittingChanges = 5,
	EUWorksItemUpdateStatus__EUWorksItemUpdateStatus_MAX = 6,

};

// Enum UWorksCore.EUWorksItemStatistic
enum class UWorksCore_EUWorksItemStatistic : uint8_t
{
	EUWorksItemStatistic__NumSubscriptions = 0,
	EUWorksItemStatistic__NumFavorites = 1,
	EUWorksItemStatistic__NumFollowers = 2,
	EUWorksItemStatistic__NumUniqueSubscriptions = 3,
	EUWorksItemStatistic__NumUniqueFavorites = 4,
	EUWorksItemStatistic__NumUniqueFollowers = 5,
	EUWorksItemStatistic__NumUniqueWebsiteViews = 6,
	EUWorksItemStatistic__ReportScore = 7,
	EUWorksItemStatistic__NumSecondsPlayed = 8,
	EUWorksItemStatistic__NumPlaytimeSessions = 9,
	EUWorksItemStatistic__NumComments = 10,
	EUWorksItemStatistic__EUWorksItemStatistic_MAX = 11,

};

// Enum UWorksCore.EUWorksItemState
enum class UWorksCore_EUWorksItemState : uint8_t
{
	EUWorksItemState__None         = 0,
	EUWorksItemState__Subscribed   = 1,
	EUWorksItemState__LegacyItem   = 2,
	EUWorksItemState__Installed    = 3,
	EUWorksItemState__NeedsUpdate  = 4,
	EUWorksItemState__Downloading  = 5,
	EUWorksItemState__DownloadPending = 6,
	EUWorksItemState__EUWorksItemState_MAX = 7,

};

// Enum UWorksCore.EUWorksItemPreviewType
enum class UWorksCore_EUWorksItemPreviewType : uint8_t
{
	EUWorksItemPreviewType__Image  = 0,
	EUWorksItemPreviewType__YouTubeVideo = 1,
	EUWorksItemPreviewType__Sketchfab = 2,
	EUWorksItemPreviewType__EnvironmentMap_HorizontalCross = 3,
	EUWorksItemPreviewType__EnvironmentMap_LatLong = 4,
	EUWorksItemPreviewType__ReservedMax = 5,
	EUWorksItemPreviewType__EUWorksItemPreviewType_MAX = 6,

};

// Enum UWorksCore.EUWorksVoiceResult
enum class UWorksCore_EUWorksVoiceResult : uint8_t
{
	EUWorksVoiceResult__OK         = 0,
	EUWorksVoiceResult__NotInitialized = 1,
	EUWorksVoiceResult__NotRecording = 2,
	EUWorksVoiceResult__NoData     = 3,
	EUWorksVoiceResult__BufferTooSmall = 4,
	EUWorksVoiceResult__DataCorrupted = 5,
	EUWorksVoiceResult__Restricted = 6,
	EUWorksVoiceResult__UnsupportedCodec = 7,
	EUWorksVoiceResult__ReceiverOutOfDate = 8,
	EUWorksVoiceResult__ReceiverDidNotAnswer = 9,
	EUWorksVoiceResult__EUWorksVoiceResult_MAX = 10,

};

// Enum UWorksCore.EUWorksLeaderboardUploadScoreMethod
enum class UWorksCore_EUWorksLeaderboardUploadScoreMethod : uint8_t
{
	EUWorksLeaderboardUploadScoreMethod__None = 0,
	EUWorksLeaderboardUploadScoreMethod__KeepBest = 1,
	EUWorksLeaderboardUploadScoreMethod__ForceUpdate = 2,
	EUWorksLeaderboardUploadScoreMethod__EUWorksLeaderboardUploadScoreMethod_MAX = 3,

};

// Enum UWorksCore.EUWorksLeaderboardSortMethod
enum class UWorksCore_EUWorksLeaderboardSortMethod : uint8_t
{
	EUWorksLeaderboardSortMethod__None = 0,
	EUWorksLeaderboardSortMethod__Ascending = 1,
	EUWorksLeaderboardSortMethod__Descending = 2,
	EUWorksLeaderboardSortMethod__EUWorksLeaderboardSortMethod_MAX = 3,

};

// Enum UWorksCore.EUWorksLeaderboardDisplayType
enum class UWorksCore_EUWorksLeaderboardDisplayType : uint8_t
{
	EUWorksLeaderboardDisplayType__None = 0,
	EUWorksLeaderboardDisplayType__Numeric = 1,
	EUWorksLeaderboardDisplayType__TimeSeconds = 2,
	EUWorksLeaderboardDisplayType__TimeMilliSeconds = 3,
	EUWorksLeaderboardDisplayType__EUWorksLeaderboardDisplayType_MAX = 4,

};

// Enum UWorksCore.EUWorksLeaderboardDataRequest
enum class UWorksCore_EUWorksLeaderboardDataRequest : uint8_t
{
	EUWorksLeaderboardDataRequest__Global = 0,
	EUWorksLeaderboardDataRequest__GlobalAroundUser = 1,
	EUWorksLeaderboardDataRequest__Friends = 2,
	EUWorksLeaderboardDataRequest__Users = 3,
	EUWorksLeaderboardDataRequest__EUWorksLeaderboardDataRequest_MAX = 4,

};

// Enum UWorksCore.EUWorksNotificationPosition
enum class UWorksCore_EUWorksNotificationPosition : uint8_t
{
	EUWorksNotificationPosition__TopLeft = 0,
	EUWorksNotificationPosition__TopRight = 1,
	EUWorksNotificationPosition__BottomLeft = 2,
	EUWorksNotificationPosition__BottomRight = 3,
	EUWorksNotificationPosition__EUWorksNotificationPosition_MAX = 4,

};

// Enum UWorksCore.EUWorksUniverse
enum class UWorksCore_EUWorksUniverse : uint8_t
{
	EUWorksUniverse__Invalid       = 0,
	EUWorksUniverse__Public        = 1,
	EUWorksUniverse__Beta          = 2,
	EUWorksUniverse__Internal      = 3,
	EUWorksUniverse__Dev           = 4,
	EUWorksUniverse__Max           = 5,

};

// Enum UWorksCore.EUWorksGamepadTextInputMode
enum class UWorksCore_EUWorksGamepadTextInputMode : uint8_t
{
	EUWorksGamepadTextInputMode__Normal = 0,
	EUWorksGamepadTextInputMode__Password = 1,
	EUWorksGamepadTextInputMode__EUWorksGamepadTextInputMode_MAX = 2,

};

// Enum UWorksCore.EUWorksGamepadTextInputLineMode
enum class UWorksCore_EUWorksGamepadTextInputLineMode : uint8_t
{
	EUWorksGamepadTextInputLineMode__SingleLine = 0,
	EUWorksGamepadTextInputLineMode__MultipleLines = 1,
	EUWorksGamepadTextInputLineMode__EUWorksGamepadTextInputLineMode_MAX = 2,

};

// Enum UWorksCore.EUWorksCheckFileSignature
enum class UWorksCore_EUWorksCheckFileSignature : uint8_t
{
	EUWorksCheckFileSignature__InvalidSignature = 0,
	EUWorksCheckFileSignature__ValidSignature = 1,
	EUWorksCheckFileSignature__FileNotFound = 2,
	EUWorksCheckFileSignature__NoSignaturesFoundForThisApp = 3,
	EUWorksCheckFileSignature__NoSignaturesFoundForThisFile = 4,
	EUWorksCheckFileSignature__EUWorksCheckFileSignature_MAX = 5,

};

// Enum UWorksCore.EUWorksUserHasLicenseForAppResult
enum class UWorksCore_EUWorksUserHasLicenseForAppResult : uint8_t
{
	EUWorksUserHasLicenseForAppResult__HasLicense = 0,
	EUWorksUserHasLicenseForAppResult__DoesNotHaveLicense = 1,
	EUWorksUserHasLicenseForAppResult__NoAuth = 2,
	EUWorksUserHasLicenseForAppResult__EUWorksUserHasLicenseForAppResult_MAX = 3,

};

// Enum UWorksCore.EUWorksBeginAuthSessionResult
enum class UWorksCore_EUWorksBeginAuthSessionResult : uint8_t
{
	EUWorksBeginAuthSessionResult__OK = 0,
	EUWorksBeginAuthSessionResult__InvalidTicket = 1,
	EUWorksBeginAuthSessionResult__DuplicateRequest = 2,
	EUWorksBeginAuthSessionResult__InvalidVersion = 3,
	EUWorksBeginAuthSessionResult__GameMismatch = 4,
	EUWorksBeginAuthSessionResult__ExpiredTicket = 5,
	EUWorksBeginAuthSessionResult__EUWorksBeginAuthSessionResult_MAX = 6,

};

// Enum UWorksCore.EUWorksAccountType
enum class UWorksCore_EUWorksAccountType : uint8_t
{
	EUWorksAccountType__Invalid    = 0,
	EUWorksAccountType__Individual = 1,
	EUWorksAccountType__Multiseat  = 2,
	EUWorksAccountType__GameServer = 3,
	EUWorksAccountType__AnonGameServer = 4,
	EUWorksAccountType__Pending    = 5,
	EUWorksAccountType__ContentServer = 6,
	EUWorksAccountType__Clan       = 7,
	EUWorksAccountType__Chat       = 8,
	EUWorksAccountType__ConsoleUser = 9,
	EUWorksAccountType__AnonUser   = 10,
	EUWorksAccountType__Max        = 11,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UWorksCore.UWorksControllerHandle
// 0x0008
struct FUWorksControllerHandle
{
	unsigned char                                      UnknownData_M13Q[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksControllerAnalogActionHandle
// 0x0008
struct FUWorksControllerAnalogActionHandle
{
	unsigned char                                      UnknownData_JW72[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksControllerMotionData
// 0x0028
struct FUWorksControllerMotionData
{
	float                                              RotQuatX;                                                  // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RotQuatY;                                                  // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RotQuatZ;                                                  // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RotQuatW;                                                  // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PosAccelX;                                                 // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PosAccelY;                                                 // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PosAccelZ;                                                 // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RotVelX;                                                   // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RotVelY;                                                   // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RotVelZ;                                                   // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct UWorksCore.UWorksControllerActionSetHandle
// 0x0008
struct FUWorksControllerActionSetHandle
{
	unsigned char                                      UnknownData_PUKP[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksControllerDigitalActionHandle
// 0x0008
struct FUWorksControllerDigitalActionHandle
{
	unsigned char                                      UnknownData_BBXZ[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksControllerDigitalActionData
// 0x0002
struct FUWorksControllerDigitalActionData
{
	bool                                               bState;                                                    // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bActive;                                                   // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct UWorksCore.UWorksControllerAnalogActionData
// 0x0010
struct FUWorksControllerAnalogActionData
{
	UWorksCore_EUWorksControllerSourceMode             Mode;                                                      // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7P4S[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              X;                                                         // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bActive;                                                   // 0x000C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1AUS[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksFriendsGroupID
// 0x0002
struct FUWorksFriendsGroupID
{
	unsigned char                                      UnknownData_AKZS[0x2];                                     // 0x0000(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksTicketHandle
// 0x0004
struct FUWorksTicketHandle
{
	unsigned char                                      UnknownData_092W[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksSteamInventoryResult
// 0x0004
struct FUWorksSteamInventoryResult
{
	unsigned char                                      UnknownData_B59U[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksSteamItemDetails
// 0x0020
struct FUWorksSteamItemDetails
{
	struct FUWorksSteamItemInstanceID                  InstanceID;                                                // 0x0000(0x0008) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksSteamItemDef                         Definition;                                                // 0x0008(0x0004) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                  // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<UWorksCore_EUWorksSteamItemFlags>           Flags;                                                     // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct UWorksCore.UWorksP2PSessionState
// 0x000C
struct FUWorksP2PSessionState
{
	bool                                               bConnectionActive;                                         // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bConnecting;                                               // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksP2PSessionError                  P2PSessionError;                                           // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUsingRelay;                                               // 0x0003(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BytesQueuedForSend;                                        // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PacketsQueuedForSend;                                      // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct UWorksCore.UWorksUGCHandle
// 0x0008
struct FUWorksUGCHandle
{
	unsigned char                                      UnknownData_7CGX[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksLeaderboardEntry
// 0x0020
struct FUWorksLeaderboardEntry
{
	struct FUWorksSteamID                              SteamID;                                                   // 0x0000(0x0008) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int                                                GlobalRank;                                                // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Details;                                                   // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TQO4[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUWorksUGCHandle                            UGCHandle;                                                 // 0x0018(0x0008) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct UWorksCore.UWorksUGCFileWriteStreamHandle
// 0x0008
struct FUWorksUGCFileWriteStreamHandle
{
	unsigned char                                      UnknownData_HX8N[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksScreenshotHandle
// 0x0004
struct FUWorksScreenshotHandle
{
	unsigned char                                      UnknownData_A554[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksUGCUpdateHandle
// 0x0008
struct FUWorksUGCUpdateHandle
{
	unsigned char                                      UnknownData_WJ0X[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksUGCQueryHandle
// 0x0008
struct FUWorksUGCQueryHandle
{
	unsigned char                                      UnknownData_P8Q5[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksSteamUser
// 0x0004
struct FUWorksSteamUser
{
	unsigned char                                      UnknownData_FS09[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksSteamLeaderboard
// 0x0008
struct FUWorksSteamLeaderboard
{
	unsigned char                                      UnknownData_1YPK[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksSteamLeaderboardEntries
// 0x0008
struct FUWorksSteamLeaderboardEntries
{
	unsigned char                                      UnknownData_ENM8[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksSteamUGCDetails
// 0x00A8
struct FUWorksSteamUGCDetails
{
	struct FUWorksPublishedFileID                      PublishedFileID;                                           // 0x0000(0x0008) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksResult                           Result;                                                    // 0x0008(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksWorkshopFileType                 FileType;                                                  // 0x0009(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KSCE[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CreatorAppID;                                              // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ConsumerAppID;                                             // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B5KP[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Title;                                                     // 0x0018(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamIDOwner;                                              // 0x0038(0x0008) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int                                                TimeCreated;                                               // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimeUpdated;                                               // 0x0044(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimeAddedToUserList;                                       // 0x0048(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UWorksCore_EUWorksRemoteStoragePublishedFileVisibility Visibility;                                                // 0x004C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBanned;                                                   // 0x004D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAcceptedForUse;                                           // 0x004E(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTagsTruncated;                                            // 0x004F(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Tags;                                                      // 0x0050(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FUWorksUGCHandle                            File;                                                      // 0x0060(0x0008) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FUWorksUGCHandle                            PreviewFile;                                               // 0x0068(0x0008) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     Filename;                                                  // 0x0070(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FileSize;                                                  // 0x0080(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PreviewFileSize;                                           // 0x0084(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     URL;                                                       // 0x0088(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VotesUp;                                                   // 0x0098(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VotesDown;                                                 // 0x009C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Score;                                                     // 0x00A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumChildren;                                               // 0x00A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct UWorksCore.UWorksServerInfo
// 0x0098
struct FUWorksServerInfo
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IP;                                                        // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QueryPort;                                                 // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ConnectionPort;                                            // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Ping;                                                      // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHadSuccessfulResponse;                                    // 0x002C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDoNotRefresh;                                             // 0x002D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V7UR[0x2];                                     // 0x002E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameDir;                                                   // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Map;                                                       // 0x0040(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameDescription;                                           // 0x0050(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AppID;                                                     // 0x0060(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Players;                                                   // 0x0064(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPlayers;                                                // 0x0068(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BotPlayers;                                                // 0x006C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPassword;                                                 // 0x0070(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               BSecure;                                                   // 0x0071(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D63H[0x2];                                     // 0x0072(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TimeLastPlayed;                                            // 0x0074(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ServerVersion;                                             // 0x0078(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K6NR[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameTags;                                                  // 0x0080(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUWorksSteamID                              SteamID;                                                   // 0x0090(0x0008) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct UWorksCore.UWorksPlayerInfo
// 0x0018
struct FUWorksPlayerInfo
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Score;                                                     // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimePlayed;                                                // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct UWorksCore.UWorksRuleInfo
// 0x0020
struct FUWorksRuleInfo
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct UWorksCore.UWorksAnnexCoreAppList
// 0x0001
struct FUWorksAnnexCoreAppList
{
	unsigned char                                      UnknownData_B3SX[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksAnnexCoreApps
// 0x0001
struct FUWorksAnnexCoreApps
{
	unsigned char                                      UnknownData_RYRX[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksAnnexCoreController
// 0x0001
struct FUWorksAnnexCoreController
{
	unsigned char                                      UnknownData_FFKQ[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksAnnexCoreFriends
// 0x0001
struct FUWorksAnnexCoreFriends
{
	unsigned char                                      UnknownData_SZJ4[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksAnnexCoreGameServer
// 0x0001
struct FUWorksAnnexCoreGameServer
{
	unsigned char                                      UnknownData_48FE[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksAnnexCoreGameServerStats
// 0x0001
struct FUWorksAnnexCoreGameServerStats
{
	unsigned char                                      UnknownData_RFZZ[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksAnnexCoreInventory
// 0x0001
struct FUWorksAnnexCoreInventory
{
	unsigned char                                      UnknownData_CWDB[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksAnnexCoreMatchmaking
// 0x0001
struct FUWorksAnnexCoreMatchmaking
{
	unsigned char                                      UnknownData_NH76[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksAnnexCoreMatchmakingServers
// 0x0001
struct FUWorksAnnexCoreMatchmakingServers
{
	unsigned char                                      UnknownData_KE10[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksAnnexCoreMusic
// 0x0001
struct FUWorksAnnexCoreMusic
{
	unsigned char                                      UnknownData_Y6KT[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksAnnexCoreNetworking
// 0x0001
struct FUWorksAnnexCoreNetworking
{
	unsigned char                                      UnknownData_SNB5[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksAnnexCoreRemoteStorage
// 0x0001
struct FUWorksAnnexCoreRemoteStorage
{
	unsigned char                                      UnknownData_IT11[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksAnnexCoreScreenshots
// 0x0001
struct FUWorksAnnexCoreScreenshots
{
	unsigned char                                      UnknownData_O86O[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksAnnexCoreUGC
// 0x0001
struct FUWorksAnnexCoreUGC
{
	unsigned char                                      UnknownData_IO27[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksAnnexCoreUser
// 0x0001
struct FUWorksAnnexCoreUser
{
	unsigned char                                      UnknownData_FWJQ[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksAnnexCoreUserStats
// 0x0001
struct FUWorksAnnexCoreUserStats
{
	unsigned char                                      UnknownData_LWZD[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksAnnexCoreUtils
// 0x0001
struct FUWorksAnnexCoreUtils
{
	unsigned char                                      UnknownData_B8X1[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksAnnexCoreVideo
// 0x0001
struct FUWorksAnnexCoreVideo
{
	unsigned char                                      UnknownData_1LP9[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct UWorksCore.UWorksSteamPipe
// 0x0004
struct FUWorksSteamPipe
{
	unsigned char                                      UnknownData_6ORE[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
