#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_BP_Switch_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Switch.BP_Switch_C
// 0x0040 (0x0398 - 0x0358)
class ABP_Switch_C : public ABP_SceneNode_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CurrentSelection;                                         // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	class FString                                      Name;                                                     // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               options;                                                  // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                              OptionsActors;                                            // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Switch.BP_Switch_C");
		return ptr;
	}


	void SelectNext();
	void SelectPrevious();
	void RegisterSwitch();
	void SetSelection(int* Value);
	void ReceiveBeginPlay();
	void OnSetNodeVisibility(bool* NewVisibility);
	void ExecuteUbergraph_BP_Switch(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
