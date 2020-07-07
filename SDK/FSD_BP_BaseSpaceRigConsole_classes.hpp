#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_BaseSpaceRigConsole_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C
// 0x00D0 (0x0400 - 0x0330)
class ABP_BaseSpaceRigConsole_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                               // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        TextRender;                                               // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            Widget;                                                   // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UInstantUsable*                              InstantUsable;                                            // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ABP_PlayerController_SpaceRig_C*>     PlayersThatHaveUsed;                                      // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class FString                                      StatCountKey;                                             // 0x0380(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FText                                       ConsoleTitle;                                             // 0x0390(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       NotificationText;                                         // 0x03A8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UTexture2D*                                  NotificationIcon;                                         // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TSoftObjectPtr<class UClass>                       ConsoleWindowClass;                                       // 0x03C8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                Window_Z_Order;                                           // 0x03F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               CreateMenuOnStartup;                                      // 0x03F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03F5(0x0003) MISSED OFFSET
	class UWindowWidget*                               WindowInstance;                                           // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BaseSpaceRigConsole.BP_BaseSpaceRigConsole_C");
		return ptr;
	}


	void ShowNotification(bool* IsVisible);
	void SetCreateMenuOnStartUp(bool* InCreateOnStartUp);
	void IsNewPlayer(class ABP_PlayerController_SpaceRig_C** PlayerController, bool* IsNewPlayer);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter** user);
	void OnOpenConsole(class ABP_PlayerController_SpaceRig_C** InPlayerController);
	void OnWindowCreated(class UWindowWidget** WindowWidget);
	void ExecuteUbergraph_BP_BaseSpaceRigConsole(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
