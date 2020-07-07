#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_DiscordRpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DiscordRpc.DiscordRpc
// 0x0120 (0x0148 - 0x0028)
class UDiscordRpc : public UObject
{
public:
	bool                                               IsConnected;                                              // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnConnected;                                              // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDisconnected;                                           // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnErrored;                                                // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnJoin;                                                   // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSpectate;                                               // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnJoinRequest;                                            // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FDiscordRichPresence                        RichPresence;                                             // 0x0090(0x00B8) (BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DiscordRpc.DiscordRpc");
		return ptr;
	}


	void UpdatePresence();
	void Shutdown();
	void RunCallbacks();
	void Respond(class FString* userId, int* Reply);
	void Initialize(class FString* applicationId, bool* autoRegister, class FString* optionalSteamId);
	void ClearPresence();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
