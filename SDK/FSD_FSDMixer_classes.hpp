#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_FSDMixer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class FSDMixer.FSDMixerBlueprintEventSource
// 0x0058 (0x0080 - 0x0028)
class UFSDMixerBlueprintEventSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TMap<struct FName, struct FScriptMulticastDelegate> ButtonEventDelegates;                                     // 0x0030(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FSDMixer.FSDMixerBlueprintEventSource");
		return ptr;
	}


	void OnButtonNativeEvent(struct FMixerButtonInput* Button);
};


// Class FSDMixer.FSDMixerDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UFSDMixerDelegateBinding : public UDynamicBlueprintBinding
{
public:
	TArray<struct FFSDMixerButtonEventBinding>         ButtonEventBindings;                                      // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FSDMixer.FSDMixerDelegateBinding");
		return ptr;
	}

};


// Class FSDMixer.MixerWrapper
// 0x0520 (0x0548 - 0x0028)
class UMixerWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
	bool                                               IsBroadcasting;                                           // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AlwaysCaptureTransactions;                                // 0x0041(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFSDMixerLoginState                                LoginState;                                               // 0x0042(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0043(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHandleUserEvent;                                        // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMixerStartedEvent;                                      // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMixerLoignStateChangedEvent;                            // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMixerHandleInputEvent;                                  // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMixerTransactionCompletedEvent;                         // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x4B0];                                     // 0x0098(0x04B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FSDMixer.MixerWrapper");
		return ptr;
	}


	void TriggerButtonCooldown(class FString* ControlID, int* Seconds);
	void StopMixer();
	void StartMixer();
	void SetStartScene(class FString* Scene);
	void SetMixerReady(bool* ready);
	void ChangeScene(class FString* Scene);
	int CaptureTransaction(struct FMixerButtonInput* Input);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
